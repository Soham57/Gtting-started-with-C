/* To determine whether the point lies inside the circle ,on circle or outside of the circle. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{ int x,y,r,x1,y1;
printf("Enter the coordinates of centre of circle");
scanf("%d %d",&x,&y);
printf("\nEnter the radius of circle");
scanf("%d",&r);
printf("\nEnter the coordinates of point");
scanf("%d %d",&x1,&y1);
if((x1<r+x)&&(y1<r+y))
    printf("\nThe point(%d,%d) lies inside the circle",x1,y1);
if((x1==r+x)||(y1==r+y))
    printf("\nThe point(%d,%d) lies on the circle",x1,y1);
if((x1>r+x)||(y1>r+y))
    printf("\nThe point(%d,%d) lies outside the circle",x1,y1);
}
