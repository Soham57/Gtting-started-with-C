/*Program to find day on 1 January of entered year acc. to Georgian calendar
Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
    int yr=0,lp=0,diff=0;
    printf("Enter year");
    scanf("%d",&yr);
    if(yr>2001)
        diff=yr-2001;
    else
        diff=2001-yr;
    lp=(diff/4);
    yr=((diff*365+lp)%7);
    if(yr==0)
        printf("\nMonday");
    if(yr==1)
        printf("\nTuesday");
    if(yr==2)
        printf("\nWednesday");
    if(yr==3)
        printf("\nThursday");
    if(yr==4)
        printf("\nFriday");
    if(yr==5)
        printf("\nSaturday");
    if(yr==6)
        printf("\nSunday");
    return 0;
}
