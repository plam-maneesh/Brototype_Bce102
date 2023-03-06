#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n = 5;
    for (int i = 1; i <= n * 2; i++)
    {

        for (int c = 1; c <= n * 2; c++)
        {

            if (c <= n & c > n)
            {

                printf("*");
            }
            else
            {
                
            }
        }
           if(i<=n){

               n--;

           }

    }

    return 0;
}
