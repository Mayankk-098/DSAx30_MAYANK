#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int dimension = 2 * number - 1;

    for (int row = 0; row < dimension; row++) {
        
        for (int col = 0; col < dimension; col++) {
            int distance = row;
            if (col < distance)
                distance = col;
            if ((dimension - 1 - row) < distance)
                distance = dimension - 1 - row;
            if ((dimension - 1 - col) < distance)
                distance = dimension - 1 - col;

            printf("%d", number - distance);
        }
        printf("\n");
    }

    return 0;
}
