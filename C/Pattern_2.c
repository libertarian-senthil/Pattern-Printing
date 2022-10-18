// Pattern_2

# include <stdio.h>
# define HEIGHT 50

int main()
{
    for (int i = 1; i <= HEIGHT; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

