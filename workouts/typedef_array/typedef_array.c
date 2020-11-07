#include <stdio.h>
//Use typedef
typedef  int Brick_Price[3];
void InitBrickPrice( Brick_Price *paPrice)  //Brick_Price *paPrice similar to  int (*paPrice)[3]
{
    (*paPrice)[0] = 10;
    (*paPrice)[1] = 20;
    (*paPrice)[2] = 30;
}
int main(int argc, char *argv[])
{
    int i =0;
    Brick_Price price;
    //Init Price
    InitBrickPrice(&price);
    while(i < 3)
    {
        printf("Brick Price%d : %d\n\n",i,price[i++]);
    }
    return 0;
}
