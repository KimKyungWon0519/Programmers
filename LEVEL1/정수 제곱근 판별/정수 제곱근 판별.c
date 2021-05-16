#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    if ((int)sqrt(n) - sqrt(n) == 0) {
        return pow(sqrt(n) + 1, 2);
    }

    return -1;
}

int main() {
    solution(121);
}