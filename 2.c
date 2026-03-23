#include<stdio.h>
main()
{
	int x[34],y[23];
	int xmin,xmax,ymin,ymax;
	int n,i;
	printf("how many points you want\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nente the point\t");
		scanf("%d%d",&x[i],&y[i]);
	}
	printf("enter the values of xmin,xmax\t");
	scanf("%d%d",&xmin,&xmax);
	printf("enter the values of ymin,ymax\t");
	scanf("%d%d",&ymin,&ymax);
	for(i=1;i<=n;i++)
	{
		if((xmin<x[i]&&x[i]<xmax)&&(ymin<y[i]&&y[i]<ymax))
		{
			printf("\nthe point (%d,%d) lies inside the rectangle\t",x[i],y[i]);
		}
		else
		{
			if((xmin>x[i]&&x[i]>xmax)&&(ymin>y[i]&&y[i]>ymax))
			{
			printf("\nthe point (%d,%d) lies outside the rectangle\t",x[i],y[i]);	
			}
			else
			{
				printf("\nthe point (%d,%d) lies on the rectangle\t",x[i],y[i]);
			}
			{
			}
		}
	}
}
