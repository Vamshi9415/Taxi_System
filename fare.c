#include "fare.h"
#include <stdio.h>
void print(int n){
    int i;
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
    printf("1. CAR - %d INR\n",f[n-1].CAR);
    printf("2. AUTO - %d INR\n",f[n-1].AUTO);
    printf("3. BIKE - %d INR\n",f[n-1].BIKE);
    printf("4. SEDAN - %d INR\n",f[n-1].SEDAN);
    printf("5. SUV - %d INR\n",f[n-1].SUV);
}
