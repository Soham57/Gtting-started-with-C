/*Program to find whether the point lies on origin x-axis or y-axis. Developer-SOHAM MALVIYA*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates of point");
  scanf("%d %d",&x,&y);
  if((x>0||x<0)&&(y==0))
  printf("\nThe point lies on x-axis");

  if((y>0||y<0)&&(x==0))
  printf("\nThe point lies on y-axis");

  if((x==y)&&(x==0))
  printf("\nThe point lies on origin");
  return 0;
}
