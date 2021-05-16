#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const int* fisrt, const int* second) {
    if (*fisrt > *second) {
        return 1;
    }
    else if (*fisrt > *second) {
        return -1;
    }
    else {
        return 0;
    }
}

// numbers_len은 배열 numbers의 길이입니다.
int size = 1;
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(size, sizeof(int));
    int index = 0;

    for (int i = 0; i < numbers_len; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            int addNumber = numbers[i] + numbers[j];
            int count = 0;

            for (int z = 0; z < size; z++) {
                if (answer[z] == addNumber) {
                    count++;
                }
            }

            if (count == 0) {
                answer[size - 1] = addNumber;
                answer = (int*)realloc(answer, sizeof(int) * ++size);
            }

            printf("\n");
        }

    }
    qsort(answer, size - 1, sizeof(int), compare);

    return answer;
}

int main() {
    int arr[] = { 2, 1, 3, 4, 1 };

    solution(arr, sizeof(arr) / sizeof(int));
}