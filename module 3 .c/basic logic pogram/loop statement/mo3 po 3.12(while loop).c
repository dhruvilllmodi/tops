//Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
int main() 
{
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    
while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
