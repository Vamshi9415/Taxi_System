#include "choose mode.h"
#include <stdio.h>
#include "fare.h"

void choosemode(int i,int n)
{

    // struct fare f[10];
      struct fare f[10]=
{
    {500,250,150,575,800},
    {490,240,140,550,750},
    {480,230,130,540,740},
    {470,220,120,530,730},
    {460,210,110,520,720},
    {450,200,100,510,710},
    {440,290,90,500,700},
    {430,280,80,490,690},
    {420,270,70,480,680},
    {410,260,60,470,670},
};
    switch(i)
    {

        case 1:
        printf("1.TOTAL FARE FOR CAR IS %d\n",f[n-1].CAR);
        break;
        case 2:
        printf("2. TOTAL FARE FOR AUTO IS %d\n",f[n-1].AUTO);
        break;
        case 3:
        printf("3.TOTAL FARE FOR BIKE IS %d\n",f[n-1].BIKE);
        break;
        case 4:
        printf("4.TOTAL FARE FOR SEDAN IS %d\n",f[n-1].SEDAN);
        break;
        case 5:
        printf("5.TOTAL FARE FOR SUV IS %d\n",f[n-1].SUV);
        break;
        default:
            printf("ENTERED NUMBER IS WRONG");

    }
}


