#include <stdio.h>
#define n 11

int main(void) {
    char s1[100];
    int i;
    scanf("%s", s1);
    for( i = 0 ; s1[i] != '\0' ;i++ )
    {
        printf("%c\n",s1[i]);
    }
    

    return 0;
}
