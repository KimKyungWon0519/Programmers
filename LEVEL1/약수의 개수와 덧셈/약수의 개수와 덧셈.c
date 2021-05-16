#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int count = 0;

    for (int i = left; i <= right; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }

        }

        answer += (count & 1) ? -i : i;
        count = 0;
    }


    return answer;
}

int main() {
    solution(13, 17);
}