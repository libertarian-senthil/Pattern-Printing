// Pattern 3
/*
The section A,B,C,D refers to the parts of the pattern divided.
Refered from:
https://www.geeksforgeeks.org/how-to-learn-pattern-printing-easily/
*/

# include <stdio.h>

# define N 4

int main()
{
    int i, j, min;


    for(i = 1; i <= N ; i++)
    {
        // Section A
        for(j = 1; j<= N; j++)
        {
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            int c =  N - min + 1;
            printf("%d",c);
        }
        // Section B
        for(j = N - 1; j>= 1; j--)
        {
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            int c =  N - min + 1;
            printf("%d",c);
        }
        printf("\n");
    }

    for(i = N-1; i >= 1 ; i--)
    {
        // Section C
        for(j = 1; j<= N; j++)
        {
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            int c =  N - min + 1;
            printf("%d",c);
        }
        // Section D
        for(j = N - 1; j>= 1; j--)
        {
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            int c =  N - min + 1;
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}
