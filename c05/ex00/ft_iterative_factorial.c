int ft_iterative_factorial(int nb)
{
    int i;
    int result;

       /* if (nb == 0)
        {
            return 1;
        } */

    if (nb < 0)
    {  
        return 0;
    }

    i = 1;
    result = 1;
    while (i <= nb)
    {
        result *= i;
        i++;
    }
        return result;
}

#include <stdio.h>
int main()
{
    int number = 0;
    printf("%d \n",ft_iterative_factorial(number));
}