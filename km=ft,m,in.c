//To convert the given distance in km in meters,feet,inches
//Developer-SOHAM MALVIYA
#include<stdio.h>
int main()
{
  float km;
  printf("Enter the distance in kilometre");
  scanf("%f",&km);
  printf("\nThe distance between two cities in \n\t\t\tMetre =%fm\n\t\t\tFeet =%fft\n\t\t\tInches =%finc",(km*1000),(km*1000*3.281),(km*1000*3.281*12));
  return 0;
}
