#include<stdio.h>
main()
{
	int x[34],y[23],z[63];
	int xmin,xmax,ymin,ymax,zmax,zmin;
	int i,n;
	printf("enter the value of n points");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nente the point\t");
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	printf("enter the values of xmin,xmax\n");
	scanf("%d%d",&xmin,&xmax);
	printf("enter the values of ymin,ymax\n");
	scanf("%d%d",&ymin,&ymax);
	printf("enter the values of zmin,zmax\n");
	scanf("%d%d",&zmin,&zmax);
	for(i=1;i<=n;i++)
	{
		if((xmin>x[i]&&x[i]<xmax)||(ymin>y[i]&&y[i]<ymax)||(zmin>z[i]&&z[i]<zmax))
		{
			printf("\ns1:the point (%d,%d,%d) inside the polygon\t",x[i],y[i],z[i]);
		}
		else
		{
			if((xmin>x[i]&&x[i]<xmax)&&(ymin>y[i]&&y[i]<ymax)&&(zmin<z[i]&&z[i]<zmax))
			{
			printf("\ns2:the point (%d,%d,%d) lies outside the polygon\t",x[i],y[i],z[i]);
			}
			else
			{
				printf("\ns3:the point (%d,%d,%d) lies on the polygon\t",x[i],y[i],z[i]);
			}
		}
	}
}
