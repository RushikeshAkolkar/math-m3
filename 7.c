#include<stdio.h>
#include<math.h>
main()
{
	int n,min,max,i;
	float x[345],y[445],del,x1,y1,a,b;
	printf("how many points you want\t");
	scanf("%d",&n);
	printf("enter the semi-major axis and semi-minor axis\t");
	scanf("%f\t%f",&a,&b);
	printf("enter minimum and maximum value of angle");
	scanf("%d%d",&min,&max);
	del=(max-min)/n;
	x1=a*cos(min);
	y1=b*sin(min);
	printf("the set of points is as follows\n");
	printf("(%f\t%f)",x1,y1);
	for(i=0;i<n;i++)
	{
		x[i]=x1*cos(del)+y1*(-sin(del));
		y[i]=x1*cos(del)+y1*sin(del);
		x1=x[i];
		y1=y[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n point is as follows(%f\t%f)",x[i],y[i]);
	}
}
