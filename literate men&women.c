// Percentage of illiterate men and women in a town when population=80000
//Developer-SOHAM MALVIYA
#include<stdio.h>
 int main()
 { int ilm=0,ilw=0;
  ilm=(80000)-((87.0/100)*80000);           //illiterate men
  ilw=((65.0/100)*80000);                  //illiterate women
  printf("Total illiterate men%d\nTotal illiterate women %d in village",ilm,ilw);
  return 0;
 }
