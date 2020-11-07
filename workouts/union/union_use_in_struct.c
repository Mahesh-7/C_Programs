#include <stdio.h>
#include<string.h>
//define enum
typedef enum  { ROLLNUMB, AGEYEAR, AGEMONTH } eInfoTypes;
//struc contains union
typedef struct
{
    eInfoTypes e_Infotype;
    union //Anonyms union
    {
        int RollNumber;
        int AgeYear;
        int AgeMonth;
    };
} InfoData;
//function to read stored data
void readInformation (const InfoData *MyInfoData, InfoData *ReadData)
{
    switch(MyInfoData->e_Infotype)
    {
    case ROLLNUMB:
        ReadData->RollNumber = MyInfoData->RollNumber; // Read MyInfoData->RollNumber
        break;
    case AGEYEAR:
        ReadData->AgeYear = MyInfoData->AgeYear; // Read MyInfoData->AgeYear
        break;
    case AGEMONTH:
        ReadData->AgeMonth = MyInfoData->AgeMonth; // Read MyInfoData->AgeMonth
        break;
    }
}
//function to write data
void writeInformation (InfoData *MyInfoData)
{
    switch(MyInfoData->e_Infotype)
    {
    case ROLLNUMB:
        MyInfoData->RollNumber = 100; // write MyInfoData->RollNumber
        break;
    case AGEYEAR:
        MyInfoData->AgeYear = 20; // write MyInfoData->AgeYear
        break;
    case AGEMONTH:
        MyInfoData->AgeMonth = 240;  // write MyInfoData->AgeMonth
        break;
    }
}
//Driving main function
int main()
{
    //structure variable to store data
    InfoData sInfoData = {0};
    
    //structure variable to store read data
    InfoData sReadInfoData = {0};
    
    
    //enum variable initialize with ROLLNUMB
    sInfoData.e_Infotype = ROLLNUMB;
    //write roll number to the structure variable
    writeInformation(&sInfoData);
    //read roll number from the structure variable
    readInformation(&sInfoData,&sReadInfoData);
    //print read roll number
    printf("Roll Number %d\n", sReadInfoData.RollNumber);
    
    
    //enum variable initialize with age in year
    sInfoData.e_Infotype = AGEYEAR;
    //write age in year to the structure variable
    writeInformation(&sInfoData);
    //read age in year from the structure variable
    readInformation(&sInfoData,&sReadInfoData);
    //print read age in year
    printf("Age in year %d\n", sReadInfoData.AgeYear);
    //enum variable initialize with AGEMONTH
    
    
    sInfoData.e_Infotype = AGEMONTH;
    //write age in month to the structure variable
    writeInformation(&sInfoData);
    //read age in month to the structure variable
    readInformation(&sInfoData,&sReadInfoData);
    //print read age in month
    printf("Age in month %d\n", sReadInfoData.AgeMonth);
    return 0;
}
