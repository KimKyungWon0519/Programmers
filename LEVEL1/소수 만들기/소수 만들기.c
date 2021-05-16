#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;

    for (int i = 0; i < nums_len - 2; i++) {
        for (int j = i + 1; j < nums_len - 1; j++) {
            for (int z = j + 1; z < nums_len; z++) {
                int sum = nums[i] + nums[j] + nums[z];
                int g;

                for (g = 2; g < sum; g++) {
                    if (sum % g == 0) {
                        break;
                    }
                }

                if (g == sum) {
                    answer++;
                }
            }
        }
    }

    return answer;
}

int main() {
    int arr[] = { 1, 2, 3, 4 };
    
    solution(arr, sizeof(arr) * sizeof(int));
}