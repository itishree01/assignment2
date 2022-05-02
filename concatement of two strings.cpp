#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],b[100],c[200],d[400];
	int i,j=0,k;
	printf("enter the first string:\n");
	scanf("%s",a);
	printf("enter the 2nd string:\n");
	scanf("%s",b);
	printf("the string is:\n");
	printf("%s\n",strcat(a,b));
	k=strlen(strcat(a,c));
	for(i=k-1;i>=0;i--)
	{
		d[j++]=strcat(a,b)[i];
		
	}
	printf("the reversed string is=%s\n",d);
	return 0;
}
