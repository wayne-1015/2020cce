#include <stdio.h>
int main()
{
	int a[11], n=0;
	for(int i=1 ; i<11 ; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%3==0) n=n+1;
	}
	printf("%d\n", n);
}
