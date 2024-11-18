int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    if (power == 0 && nb == 0)
        return 1;

    if (power < 0)
        return 0;

    i = 1;
    result = 1;
    while (i <= power)
    {
        result *= nb;
        i++;
    }
    return result;
}

#include <stdio.h>
int main()
{
    int number = 2;
    int pwr = -2;
    printf("%d\n",ft_iterative_power(number,pwr));
    return 0;
}
int ft_recursive_power(int nb, int power)
{
    if (power < 0) 
        return 0;

    if (power == 0) 
        return 1;
    if (power == 0 && nb == 0)
        return 1;

    return nb * ft_recursive_power(nb, power - 1);
    
}
#include <stdio.h>
int main()
{
    printf("%d \n",ft_recursive_power(2,3));
}