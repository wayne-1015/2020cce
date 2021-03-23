#include <stdio.h>
int main()
{
	int a, x, y, z;
	scanf("%d", &a);
	x=a/50;
	y=(a%50)/5;
	z=(a%50)%5;
	printf("%d=50*%d+5*%d+1*%d\n", a, x, y, z);
}
