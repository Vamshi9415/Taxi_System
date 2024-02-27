#include <stdio.h>
#include <stdlib.h>
#include "places.h"
#include "choose.h"
#include "mode.h"
#include "fare.h"
#include "choose mode.h"
int main()
{   int i,n;
printf("****** WELCOME TO BACHU'S TAXI ******");
printf("\n");
printf("\n");
printf("****** PLEASE SELECT THE PLACES ******");
printf("\n");
printf("\n");
    places();
   scanf("%d",&n);
   printf("\n");
   choose (n);
   print(n);
   printf("******PLEASE SELECT THE TYPE OF MODE*********");
   printf("\n");
   scanf("%d",&i);
   choosemode(i,n);
    printf("\n");
   printf("**** SUCCESSFULLY BOOKED******");

    return 0;
}
