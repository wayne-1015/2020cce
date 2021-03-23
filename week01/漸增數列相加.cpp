#include <stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d", &a);
	for(int i=a ; i>=1 ; i--)
	{
		ans=ans+i*(i-1);
	}
	printf("%d\n", ans);
}
