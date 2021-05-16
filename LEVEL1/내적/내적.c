#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;

    for (int i = 0; i < a_len; i++) {
        answer += (a[i] * b[i]);
    }

    return answer;
}

int main() {
    int a[] = { 1,2,3,4 }, b[] = { -3,-1,0,2 };

    solution(a, sizeof(a) / sizeof(int), b, sizeof(b) / sizeof(int));
}