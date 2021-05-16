#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer;
    int length = strlen(s);
    int index = 0;

    if (length % 2 == 0) {
        answer = (char*)calloc(3, sizeof(char));
        answer[index++] = s[(length / 2) - 1];
        answer[index++] = s[(length / 2)];
    }
    else {
        answer = (char*)calloc(2, sizeof(char));
        answer[index++] = s[(length / 2)];
    }

    return answer;
}

int main() {
    solution("abcde");
}