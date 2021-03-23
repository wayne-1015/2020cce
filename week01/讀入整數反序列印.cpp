#include <stdio.h>
int main()
{
	int a[1000], n=0;
	for(int i=1 ; i<=1000 ; i++)
	{
		scanf("%d", &a[i]);
		n++;
		if(a[i]==0) break;
	}
	for(int j=n-1 ; j>=1 ; j--)
	{

		printf("%d ", a[j]);
	}
	printf("\n");
}
