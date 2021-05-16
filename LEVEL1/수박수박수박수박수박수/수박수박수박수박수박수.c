#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
	char* answer = (char*)calloc((n * 3) + 1, sizeof(char));

	for (int i = 0; i < n; i++) {
		strcat(answer, i & 1 ? "박" : "수");
	}

	return answer;
}

int main() {
	solution(3);
}