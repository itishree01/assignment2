#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],sum[2][2],mul[2][2],i,j,k;
	printf("enter the elements in the 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("enter a%d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
}
printf("enter the elements of 2nd matrix:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
	printf("enter b%d%d:",i+1,j+1);
	scanf("%d",&b[i][j]);
	
	}	
}
for(i=0;i<2;++i)
{
	for(j=0;j<2;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
		
	}
}
printf("sum of matrixes :\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d\t",sum[i][j]);
	}
	printf("\n");
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
	for(k=0;k<2;k++)
	
{

mul[i][j]=a[i][k]*b[k][j];
}
}
}
printf("multiplication of matrixes=\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");
	
	
}
return 0;
}
