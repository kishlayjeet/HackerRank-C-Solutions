// For Loop in C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void function(int a, int b)
{

    for (int i = a; i <= b; i++)
    {

        switch (i)
        {

        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            if (i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
}

int main()
{
    int a, b;

    scanf("%d\n%d", &a, &b);
    // Complete the code.
    function(a, b);

    return 0;
}
