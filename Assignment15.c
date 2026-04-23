#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int i, n;

    printf("How many random numbers do you wantt:");
    scanf("%d",&n);

    srand(time(0));

    printf("pseudo random numbers are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ",rand());
    }
}
