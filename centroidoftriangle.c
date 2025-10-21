#include<stdio.h>
int main ()
{
	int x1,x2,x3,y1,y2,y3;
	float x,y;

     printf("enter centroid of triangle\n");
     scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    
    x=(x1+x2+x3)/3;
	y=(y1+y2+y3)/3;
    printf("x1=%d\n x2=%d\n x3=%d\n y1=%d\n y2=%d\n y3=%d\n",x1,x2,x3,y1,y2,y3);
    printf("centroid of triangle = %f\n",x,y);
    return 0;
}
