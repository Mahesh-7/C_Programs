#include <stdio.h>
typedef struct
{
    char Name[12];
    int Age;
    float Weight;
    int RollNumber;
} sStudentInfo;
int main(int argc, char *argv[])
{
    //Create pointer to the structure
    sStudentInfo *psInfo  = NULL;
    //Increment the pointer
    psInfo++;
    int*p;
    int arr[10];
    printf("Size of structure  =  %d %d %d\n\n",&psInfo,p,arr);
    return 0;
}
