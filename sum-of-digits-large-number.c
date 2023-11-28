#include<stdio.h>

int main() {
    char number[100];
   
    printf("Enter a large number: ");
    scanf("%s", number);

    int sum = 0;
    for (int i = 0; number[i] != '\0'; i++) {
        sum = sum + (number[i] - '0');
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}