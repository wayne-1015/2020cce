# 2020cce
# 基礎題1:找零錢
```c
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
```
# 基礎題2:因數個數
```c
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
```
# 基礎題3:找倍數
```c
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
```
# 基礎題4:整數轉換為等級
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a>=90) printf("A\n");
	else if(a>=80) printf("B\n");
	else if(a>=60) printf("C\n");
	else printf("F\n");
}
```
# 進階題1:分式化簡
```c
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	int x=a, y=b;
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	printf("%d %d\n", x/a, y/a);
}
```
# 進階題2:讀入整數反序列印
```c
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
```
# 進階題3:A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=1 ; i<=b ; i++)
	{
		ans*=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
# 進階題4:漸增數列相加
```c
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
```
