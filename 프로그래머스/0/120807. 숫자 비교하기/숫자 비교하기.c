#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int solution(int num1, int num2)
{
    int answer;
    if (num1 == num2)
        answer = 1;
    else
        answer = -1;
    return answer;
}
int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", solution(n1, n2));
    return 0;
}