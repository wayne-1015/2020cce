#include <stdio.h>
int main()
{
    char line[10]="deline";
    char line2[10]={'p', 'r', 'o', 'p', 'e', 'r', '\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority";
    char line4[]={'m', 'a', 'j', 'o', 'r', 'i', 't', 'y'};
    printf("%s\n", line3);

    printf("你相信嗎? 這是 line4:==%s==\n", line4);
}
