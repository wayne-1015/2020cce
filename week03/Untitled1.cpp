///�}�Cvs.����
#include <stdio.h>
int a[5]={0, 10, 20, 30, 40};
int main()
{
    int *p = & a[2];
    *p = 222;

    p = p + 2;
    *p = 666;
}
