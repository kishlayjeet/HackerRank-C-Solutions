// Sum and Difference of Two Numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d%d", &a, &b);
    // Complete the code to calculate the sum of the five digits on n.
    printf("%d %d\n", a + b, a - b);

    scanf("%f%f", &c, &d);
    printf("%.1f %.1f", c + d, c - d);

    return 0;
}