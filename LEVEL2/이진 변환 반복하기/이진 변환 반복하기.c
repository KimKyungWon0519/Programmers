#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int answer[2] = { 0, };
    int i;
    char* cps = (char*)calloc(strlen(s) + 1, sizeof(char));
    strcpy(cps, s);

    for (i = 0; strcmp(cps, "1") != 0; i++) {
        int count = 0, length = 0, remove;
        for (int j = 0; j < strlen(cps); j++) {
            if (cps[j] == '0') {
                count++;
            }
        }

        remove = strlen(cps) - count;

        while (remove > 1) {
            cps[0] = remove % 2 + '0';

            remove /= 2;

            for (int j = length; j > -1; j--) {
                cps[j + 1] = cps[j];
            }

            length++;
        }
        
        cps[0] = '1';
        cps[length + 1] = '\0';

        answer[1] += count;
    }

    answer[0] = i;

    return answer;
}

int main() {
    int* arr = solution("110010101001");

    for (int i = 0; i < 2; i++) {
        printf("%d\n", arr[i]);
    }
}