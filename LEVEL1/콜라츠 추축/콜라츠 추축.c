#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long num) {
    printf("%d", sizeof(long));
    int answer = 0;
    int count = 0, i = 0;

    while (i++ < 500) {
        if (num == 1) {
            return count;
        }

        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num = (num * 3) + 1;
        }

        count++;
    }
    return -1;
}

int main() {
    solution(6);
}