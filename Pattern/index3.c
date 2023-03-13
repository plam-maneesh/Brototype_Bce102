#include <stdio.h>

int main()
{

    int n = 5;
    int nums=5;

    for (int i = 1; i <= n * 2; i++)
    {

        for (int c = 1; c <= n * 2; c++)
        {

            if (c <= nums && c > nums)
            {

                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        printf("\n");
        if (i <= n)
        {

            nuns--;
        }
        else
        {
            n++;
        }
    }


return 0;
}
