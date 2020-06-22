#include<stdio.h>
#include<string.h>
#include <math.h> // For sqrt() and cbrt() 
//DECIMAL TO HEXA DECIMAL VALUE CONVERSION
void main()
{
	long long int a=123456789;
	
	long long int t=a;
	
	while(a>0)
	{
	
	printf("%x\n",a%16);//decimal to hexa

    a=a/16;
    
	}
	
}
// C++ implementation of above approach 



//  
//// Function to check if the 
//// number is a perfect square 
//int isSquare(int num) 
//{ 
//    int root = sqrt(num); 
//    return (root * root) == num; 
//} 
//  
//// Function to check if the 
//// number is a perfect cube 
//int isCube(int num) 
//{ 
//    int root = cbrt(num); 
//    return (root * root * root) == num; 
//} 
//  
//// Function to count the number 
//// of perfect squares and cubes 
//int countSC(int N) 
//{ 
//    int count = 0,i; 
//    for ( i = 1; i <= N; i++) { 
//  
//        // If a number is perfect square, 
//        //if (isSquare(i)) 
//          //  count++; 
//  
//        // Else if the number is cube or not 
//         if (isCube(i)) 
//            count++; 
//    } 
//  
//    return count; 
//} 
//  
//// Driver code 
//int main() 
//{ 
//    int N = 7; 
//  
//    printf( "Number of squares and cubes is %d" , countSC(N)); 
//    return 0; 
//} 
//



//  
//// Function to convert hexadecimal to decimal 
//int hexadecimalToDecimal(char hexVal[]) 
//{    
//    int len = strlen(hexVal); 
//      
//    // Initializing base value to 1, i.e 16^0 
//    int base = 1,i; 
//      
//    int dec_val = 0; 
//      
//    // Extracting characters as digits from last character 
//    
//	for ( i=len-1; i>=0; i--) 
//    {    
//        // if character lies in '0'-'9', converting  
//        // it to integral 0-9 by subtracting 48 from 
//        // ASCII value. 
//        if (hexVal[i]>='0' && hexVal[i]<='9') 
//        { 
//            dec_val += (hexVal[i] - 48)*base; 
//                  
//            // incrementing base by power 
//            base = base * 16; 
//        } 
//  
//        // if character lies in 'A'-'F' , converting  
//        // it to integral 10 - 15 by subtracting 55  
//        // from ASCII value 
//        else if (hexVal[i]>='A' && hexVal[i]<='F') 
//        { 
//            dec_val += (hexVal[i] - 55)*base; 
//          
//            // incrementing base by power 
//            base = base*16; 
//        } 
//    } 
//      
//    return dec_val; 
//} 
//  
//// Driver program to test above function 
//int main() 
//{ 
//    char hexNum[] = "1F";     
//    printf("%d", hexadecimalToDecimal(hexNum));
//    return 0; 
//} 
