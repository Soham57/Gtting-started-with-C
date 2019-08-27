/* to check whether the enter points are collinear or not. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
float fin=0;
int x1,y1,x2,y2,x3,y3;
printf("Enter coordinates of 1,2 & 3 point");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
fin=(1/2.0*((x1-x2)*(y2-y3)-(y1-y2)*(x2-x3)));
if(fin==0)
printf("\nThe points are collinear");
else
printf("\nThe points are not collinear");
return 0;
}
