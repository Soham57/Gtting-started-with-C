/*Program to calculate currency notes
Developer- SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
    int amt=0,ten=0,fif=0,hun=0;
    printf("Enter amount");
    scanf("%d",&amt);
    hun=amt/100;
    fif=(amt-hun*100)/50;
    ten=(amt-fif*50-hun*100)/10;
    amt-=ten*10+fif*50+hun*100;

    printf("\nThe required number of notes of\n HUNDRED=%d\n FIFTY=%d\n TEN=%d",hun,fif,ten);
    printf("\nAmount Left= %d",amt);
    return 0;

}
