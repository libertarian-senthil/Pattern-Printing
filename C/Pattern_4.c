// Pattern_4

#include <stdio.h>

int main()
{
    int i,j,N;
    N = 15;

    for (i = 0; i < N; i++)
    {
        for(j = N-i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
