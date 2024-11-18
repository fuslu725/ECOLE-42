int ft_recursive_factorial(int nb)
{

    if (nb < 0)
        return 0;

    if (nb == 0)
        return 1;
    
    return nb *= ft_recursive_factorial(nb - 1); 
}

#include <stdio.h>
int main()
{
    int number = -5;
    printf("%d \n",ft_recursive_factorial(number));
}