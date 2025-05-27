#include <stdio.h>

int isHappy(int num) {
    if (num == 1) return 1;

    int result = 0;
    while (num > 0) {
        int digit = num % 10;
        result += digit * digit;
        num /= 10;
    }

    return isHappy(result);
}

int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if (isHappy(input)) {
        printf("happy");
    }

    return 0;
}
