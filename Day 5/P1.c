#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char *s) {
    int i = 0;
    int num = 0;
    int sign = 1;

    // Skip leading whitespaces
    while (s[i] == ' ') {
        i++;
    }

    // Check sign
    if (s[i] == '+') {
        sign = 1;
        i++;
    } else if (s[i] == '-') {
        sign = -1;
        i++;
    }

    // Convert digits to integer
    while (isdigit(s[i])) {
        int digit = s[i] - '0';

        // Check for overflow
        if (num > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        num = num * 10 + digit;
        i++;
    }

    return num * sign;
}
