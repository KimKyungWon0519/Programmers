#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int getRank(int value) {
    switch (value)
    {
    case 6:
        return 1;
    case 5:
        return 2;
    case 4:
        return 3;
    case 3:
        return 4;
    case 2:
        return 5;
    default:
        return 6;
    }
}

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2);
    int sameCount = 0, zeroCount = 0;

    for (int i = 0; i < lottos_len; i++) {
        if (lottos[i] != 0) {
            for (int j = 0; j < win_nums_len; j++) {
                if (lottos[i] == win_nums[j]) {
                    sameCount++;
                }
            }
        }
        else {
            zeroCount++;
        }
    }

    answer[0] = getRank(sameCount + zeroCount);
    answer[1] = getRank(sameCount);

    return answer;
}