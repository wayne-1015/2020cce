#include <stdio.h>
int main()
{
	int a, n=0;
	scanf("%d", &a);
	for(int i=1 ; i<=a ; i++)
	{
		if(a%i==0) n=n+1;
	}
	printf("%d\n", n);
}
