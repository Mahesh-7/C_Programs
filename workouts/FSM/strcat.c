
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int main() 
{ 
  
    // Get the two Strings to be concatenated 
    char str1[] = "Geeks", str2[] = "World"; 
  
    // Declare a new Strings 
    // to store the concatenated String 
    //char *str3=malloc(100); 
  
    int i = 0, j = 0; 
  
    printf("\nFirst string: %s", str1); 
    printf("\nSecond string: %s", str2); 
  
    // Insert the first string in the new string 
    while (str1[i] != '\0') { 
       // str3[j] = str1[i]; 
        i++; 
      //  j++; 
    } 
  
    // Insert the second string in the new string 
   // i = 0; 
    while (str2[j] != '\0') { 
        str1[i] = str2[j]; 
        i++; 
        j++; 
    } 
    str1[i] = '\0'; 
  
    // Print the concatenated string 
    printf("\nConcatenated string: %d", sizeof(str1)); 
  
    return 0; 
} 
