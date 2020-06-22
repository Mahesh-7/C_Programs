	#include<iostream>
	#include<string>
	 
	using namespace std;
	
	enum VendingMachineState {
		
		SELECT,QUANTITY,CALCULATE,UPDATE
	};
	
	enum Brand {
		
		COKE =100, PEPSI =200, SEVENUP =300
	};
 
  struct Student {
  	
  	string name;
  	int points;
  };
  
  struct Soda {
  	
  	Brand brandName;
  	int inventory;
  	int price;
  	
  };

 
int main()
 
 {
 	//initiate vending Machine State is SELECT , Update upon state change.
	VendingMachineState currentState = SELECT;  //enum 1
	
	//Fill up our vending machine with Soda.
	Soda vendingMachine[3];  //struct 1
	
	//loadup with coke
	vendingMachine[0].brandName = COKE;
	vendingMachine[0].inventory = 10;
	vendingMachine[0].price = 1000;
	
	//load up with pepsi
	vendingMachine[1].brandName = PEPSI;
	vendingMachine[1].inventory = 10;
	vendingMachine[1].price = 2000;
	
	//load up with sevenup
	vendingMachine[2].brandName = SEVENUP;
	vendingMachine[2].inventory = 10;
	vendingMachine[2].price = 3000;
	
	Soda selectedSoda; //struct 1
	
	Student eric; //struct 2
	eric.name= "Mahesh"; 
	eric.points=100000;  //total my wallet amount
while(1)
{
	
	switch (currentState) {
		case SELECT:
			//1.display the current status for the vending machine and students wallet
			cout<<"<<<<<<<---CURRENT STATUS----->>>>"<<endl;
			cout<<"[[Vending Machine]]"<<endl<<endl;
			int i;
			for(i=0;i<3;i++)
			{
				cout<<vendingMachine[i].brandName <<" has "<<vendingMachine[i].inventory<<" drinks,each cost "<<vendingMachine[i].price<<endl;
			}
			cout<<endl;
			cout<<"[[[Student]]]"<<endl;
			cout<<eric.name<<" has "<<eric.points<<" points total " <<endl;
			cout<<"<<<<---END STATUS --->>>>"<<endl <<endl;
			//2.ask the user what drink they want
			cout<<"select drinks from following option"<<endl;
			//3.dispaly the soda names and corresponding id values	
			cout<<"COKE=100\nPEPSI=200\nSEVENUP=300"<<endl;	
			//4.user input the drink	
			int selectedDrink;
			cin>>selectedDrink;
			//5.if valid drink selected,move to QUANTITY state ;else ,go back to SELECT state. 
			switch(selectedDrink) {
				case COKE:
					cout<<"You have selected coke "<<endl;
					selectedSoda.brandName=COKE;
					currentState=QUANTITY;
					break;
				case PEPSI:
					cout<<"You have selected pepsi "<<endl;
					selectedSoda.brandName=PEPSI;
					currentState=QUANTITY;
					break;
				case SEVENUP:
					cout<<"You have selected sevenup "<<endl;
					selectedSoda.brandName=SEVENUP;
					currentState=QUANTITY;
					break;
				default:
					cout<<"invalid drink" <<endl;
					currentState=SELECT;
					break;
			} 
			break;
			
		case QUANTITY:
			cout<<" how many drinks would you like?"<<endl;
			static int orderQuantity;
			cin>>orderQuantity;
			cout<< "your order has been received.your placed and order " <<orderQuantity <<" sodas" <<endl;
			switch(selectedSoda.brandName) {
				case COKE:
					if( orderQuantity <0 || orderQuantity >vendingMachine[0].inventory )
					{
						cout<<"not enough in stock" <<endl<<endl;
						currentState=SELECT;
					}
					else
					{
						currentState=CALCULATE;
					}
				break;
				case PEPSI:
					if( orderQuantity <0 || orderQuantity >vendingMachine[1].inventory )
					{
						cout<<"not enough in stock" <<endl<<endl;
						currentState=SELECT;
					}
					else
					{
						currentState=CALCULATE;
					}
				break;
				case SEVENUP:
					if( orderQuantity <0 || orderQuantity >vendingMachine[2].inventory )
					{
						cout<<"not enough in stock" <<endl<<endl;
						currentState=SELECT;
					}
					else
					{
						currentState=CALCULATE;
					}
				break;
				default:
					cout<<"invalid amount"<<endl;
					currentState=SELECT;
					break;
									
			}
			break;
			
		case CALCULATE:
			 cout<<"total cost for your drinks is:";
			 int cost;
			 switch (selectedSoda.brandName) {
			 	case COKE:
			 		cost =vendingMachine[0].price * orderQuantity;
			 		cout<<cost<<endl;
			 		break;
			 	case PEPSI:
			 		cost =vendingMachine[1].price * orderQuantity;
			 		cout<<cost<<endl;
			 		break;
			 	case SEVENUP:
			 		cost =vendingMachine[2].price * orderQuantity;
			 		cout<<cost<<endl;
			 		break;
			 	default:
			 		
			 		cout<<"error!"<<endl;
			 		break;
			 		
			 }
			 int payment;
			 cout<<"please type in ur payment: ";
			 cin>>payment;
			 
			 if(payment >eric.points || payment < cost || payment <=0)
			 {
			 	cout << "you dont have enough money" << endl;
			 	currentState=SELECT;
			 	cout<<endl;
			 }
			 else
			 {
			 	//eric.points = eric.points - payment;
			 	int change = payment -cost;
			 	cout<<"Thank you ur change is " << change << " points " <<endl;
			 	eric.points = change;
			 	currentState=UPDATE;
			 }
			
			break;
			
		case UPDATE:
			
			switch(selectedSoda.brandName) {
				case COKE:
					vendingMachine[0].inventory = vendingMachine[0].inventory - orderQuantity;
					currentState=SELECT;
					cout<<endl;
					break;
				case PEPSI:
					vendingMachine[1].inventory = vendingMachine[1].inventory - orderQuantity;
					currentState=SELECT;
					cout<<endl;
					break;
				case SEVENUP:
					vendingMachine[2].inventory = vendingMachine[2].inventory - orderQuantity;
					currentState=SELECT;
					cout<<endl;
					break;
				default:
					cout<<"error"<<endl;
					currentState=SELECT;
					break;
			}
			
			cout<<"inventory updated"<<endl<<endl;
			
			break;
			
		default:
			cout<<"invalid state detected"<<endl;
	}
}
 	return 0;
 	
 }
