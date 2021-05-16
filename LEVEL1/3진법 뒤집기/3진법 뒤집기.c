#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int square = 0;

int solution(int n) {
	int answer = 0, number = 0, index = 0, size = 2;
	char* threeNumber = (char*)calloc(size, sizeof(char));

	while (n > 0) {
		number = n % 3;
		threeNumber[index++] = number + '0';
		threeNumber = (char*)realloc(threeNumber, sizeof(char) * ++size);
		n /= 3;
	}

	threeNumber[index] = '\0';

	for (int i = strlen(threeNumber) - 1; i > -1; i--) {
		number = threeNumber[i] - '0';
		for (int i = 0; i < square; i++) {
			number *= 3;
		}
		answer += number;
		square++;
	}

	return answer;
}

int main() {
	int n = 45;

	solution(n);
}