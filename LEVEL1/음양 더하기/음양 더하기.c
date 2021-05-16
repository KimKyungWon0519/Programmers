#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;

    for (int i = 0; i < absolutes_len; i++) {
        answer += signs[i] ? absolutes[i] : -absolutes[i];
    }
    return answer;
}

int main() {
    int arr[] = { 4, 7, 12 };
    bool bool_arr[] = { true, false, true };

    solution(arr, sizeof(arr) / sizeof(int), bool_arr, sizeof(bool_arr) / sizeof(bool));
}