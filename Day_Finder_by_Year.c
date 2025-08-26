#include <stdio.h>

int main() {    
    int year, difference, leap_years_in_between, add; 
    printf("Year: ");
    scanf("%d", &year);

   difference = year-2001;
   leap_years_in_between = difference/4;
   add = difference + leap_years_in_between;
   
   if (add % 7 == 1)
   printf("its tuesday");

   if (add % 7 == 2)
   printf("its wednesday");

   if (add % 7 == 3)
   printf("its thursday");

   if (add % 7 == 4)
   printf("its friday");

   if (add % 7 == 5)
   printf("its saturday");

   if (add % 7 == 6)
   printf("its sunday");

   return 0;
}