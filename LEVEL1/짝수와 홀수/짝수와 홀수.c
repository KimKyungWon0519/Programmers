#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    return num & 0x01 ? "Odd" : "Even";
}

int main() {
    solution(3);
}