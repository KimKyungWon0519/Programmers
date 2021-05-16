#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int max = a, min = b;

    if (a < b) {
        max = b;
        min = a;
    }

    for (int i = min; i <= max; i++) {
        answer += i;
    }

    return answer;
}

int main() {
    solution(3, 5);
}