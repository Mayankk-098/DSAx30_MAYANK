#include <stdio.h>
#include <math.h>

int main() {
    
    int start, end, kaprekarCount = 0;

    printf("Enter two numbers (start and end): ");
    
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        long long squared = (long long)num * num;
        int digitCount = 0, temp = num;

        while (temp > 0) {
            digitCount++;
            temp /= 10;
        }

        long long divisor = (long long)pow(10, digitCount);
        int firstPart = squared / divisor;
        int secondPart = squared % divisor;

        if (firstPart + secondPart == num && secondPart != 0) {
            printf("%d ", num);
            kaprekarCount++;
        
        }
    }

    if (kaprekarCount == 0) {
        printf("No Kaprekar numbers found.\n");
    } else {
        printf("\nTotal Kaprekar numbers: %d\n", kaprekarCount);
    }

    return 0;
}
