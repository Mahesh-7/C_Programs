#include <stdio.h>
#define ROW     3 // number of rows in array
#define COL     3 // number of col in array
#define TOTAL_CELLS (ROW * COL) //totall cells in array
int main(void)
{
    // 2d array
    int aiData [ROW][COL] = { { 9, 6, 1 }, { 144, 70, 50 }, {10, 12, 78} };
    int *piData = NULL; //pointer to integer
    int arrayIndex = 0; //variable for array index
    piData = &aiData[0][0]; //You can also write *aiData
    for (arrayIndex = 0; arrayIndex < TOTAL_CELLS; ++arrayIndex) //Loop of row
    {
        printf(" array elements = %d\n", *(piData + arrayIndex ));
    }
    return 0;
}
