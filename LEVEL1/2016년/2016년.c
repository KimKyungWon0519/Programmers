#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* week[7] = { "SAT", "SUN", "MON", "TUE", "WED", "THU", "FRI" };

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = NULL;

    int q = b, m = a, y = 2016;

    if (m <= 2) {
        m += 12;
        y--;
    }

    int h = (q + 13 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;

    answer = week[h];
    return answer;
}

int main() {
    solution(5, 24);
}