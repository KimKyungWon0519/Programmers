#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer;
    char* strNumber = (char*)calloc(12, sizeof(char));

    sprintf(strNumber, "%lld", n);

    answer = (int*)calloc(strlen(strNumber), sizeof(int));

    for (int i = 0; i < strlen(strNumber); i++) {
        answer[i] = strNumber[strlen(strNumber) - i - 1] - '0';
    }

    return answer;
}

int main() {
    solution(12345);
}