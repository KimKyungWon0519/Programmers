#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;

    if (4 == strlen(s) || strlen(s) == 6) {
        for (int i = 0; i < strlen(s); i++) {
            if (!isdigit(s[i])) {
                return false;
            }
        }
    }
    else {
        return false;
    }

    return answer;
}

int main() {
    solution("a1234");
}