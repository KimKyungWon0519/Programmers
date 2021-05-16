#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(int x) {
    bool answer = true;
    char strNumber[6];
    int number = 0;

    sprintf(strNumber, "%d", x);

    for (int i = 0; i < strlen(strNumber); i++) {
        number += (strNumber[i] - '0');
    }

    answer = x % number == 0 ? true : false;

    return answer;
}

int main() {
    solution(10);
}