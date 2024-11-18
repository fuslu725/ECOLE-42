int ft_sqrt(int nb)
{
    int i = 1;

    if(nb == 0 || nb < 0)
        return 0;

    while (i * i < nb)
    {
        i++;
    }

    if (nb == i * i)
        return i;

    return 0;
    

}

#include <stdio.h>
int main()
{
    int nb = 17;
    printf("sayinin karekoku: %d\n", ft_sqrt(nb));
}