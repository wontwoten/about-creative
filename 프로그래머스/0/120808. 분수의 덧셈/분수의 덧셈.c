#include <stdio.h>
#include <stdlib.h>

// 최대공약수
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// solution 함수 정의
int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2 * sizeof(int));
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;
    int g = gcd(numerator, denominator);
    answer[0] = numerator / g;
    answer[1] = denominator / g;
    return answer;
}

// main 함수 (테스트용)
int main() {
    int* result = solution(1, 2, 3, 4);
    printf("[%d, %d]\n", result[0], result[1]); // [5, 4]
    free(result); // malloc 했으니 해제도 해야 함
    return 0;
}

