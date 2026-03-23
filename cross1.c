#include<stdio.h>
int crossproduct(int,int,int,int);
main()
{
	int A,B,C,D,a,b,c,d,i,j,n,ans,x[78],y[76567];
	printf("ente points on aline ab\n");
	scanf("%d%d%d%d",&A,&B,&C,&D);
	printf("how many points you want\n");
	scanf("%d",&n);
	printf("ente the set of points:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		a=C-A;
		b=D-B;
	}
	for(i=0;i<n;i++)
	{
		C=x[i]-A;
		D=y[i]-B;
		ans=crossproduct(a,b,C,D);
		if(ans>0)
		{
			printf("\ns1:\t%d\t(%d,%d)",ans,x[i],y[i]);
		}
		else
		{
			if(ans<0)
			{
				printf("\ns2:\t%d\t(%d,%d)",ans,x[i],y[i]);
			}
			else
			{
				printf("\ns3:\t%d\t(%d,%d)",ans,x[i],y[i]);
			}
		}
	}
}
int crossproduct(int a,int b,int c,int d)
{
	int k;
	k=a*d-b*c;
	return(k);
}
