#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n) {
    char* strNumber = (char*)calloc(6, sizeof(char));
    int answer = 0;

    sprintf(strNumber, "%d", n);

    for (int i = 0; i < strlen(strNumber); i++) {
        answer += strNumber[i] - '0';
    }


    return answer;
}

int main() {
    solution(123);
}