// Sum of Digits of a Five Digit Number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, num, sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        num = n % 10;
        sum = sum + num;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}