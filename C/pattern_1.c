// Square pattern printing

# include <stdio.h>

# define DIMENSION 5

int main()
{
    for (int i = 0; i <= DIMENSION; i++)
    {
        for (int j = 0; j <= DIMENSION; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

