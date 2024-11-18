int ft_is_prime(int nb)
{
    int i = 2;
    int f;

    if (nb < 2)
        return 0;
    
    while (i != nb / 2) 
    {
        f = nb % i;
        //asal sayı değil sonuç 0
        if(f == 0)
            return 0;
        i++;
    }

    return 1;
    
}

#include <stdio.h>
int main()
{
    int nb = 1;
    printf("%d\n",ft_is_prime(nb));
}