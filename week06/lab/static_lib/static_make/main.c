#include <stdio.h>
#include "fun.h"

int main()
{
    int a, b;
    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);
    int res1 = max(a,b);
    int res2 = min(a,b);
    printf("The max is %d, the min is %d.\n", res1, res2);
    return 0;
}