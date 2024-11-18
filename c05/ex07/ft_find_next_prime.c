int ft_is_prime(int nb)
{
    int i = 2;
    int fu;

    while (i != nb / 2) 
    {
        fu = nb % i;

        if(fu == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    int i = 2;

    if (nb <= 2)
        return 2;

    if (ft_is_prime(nb) == 1)
    {
        return nb;
    }
    else
    {
        return ft_find_next_prime(nb + 1);
    }
    
}

#include <stdio.h>
int main()
{
    int nb = -5;
    printf("%d\n",ft_find_next_prime(nb));
}