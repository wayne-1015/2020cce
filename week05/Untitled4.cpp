#include <stdio.h>
int main()
{
    char line[5][10]={"deline", "proper", "majority", "bullet", "shop"};
    char *p;

    for(int i=0 ; i<5 ; i++)
    {
        printf("%s\n", line[i]);
    }
}
