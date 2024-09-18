#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_putnbr_base_control(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
    if (base[i] == ' ' || base[i] == '+' || base[i] == '-' ||
        (base[i] <= 13 && base[i] >= 9))
        return 1;
    i++;
    }

    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if(base[i] == base[j])
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
    
}

void ft_putnbr_base(int nbr, char *base)
{
    int i;
    int lengh;
    int control;

    control = ft_putnbr_base_control(base);
    lengh = ft_strlen(base);

    if (lengh < 2 || control == 1)
        return;

    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }

    if (nbr >= lengh)
    {
        ft_putnbr_base(nbr / lengh, base);
        ft_putnbr_base(nbr % lengh, base);
    }
    else
    {
        ft_putchar(base[nbr]);
    }
    
    
}

#include <stdio.h>
int main()
{
    ft_putnbr_base(10, "01");   // Output: "1010"  (Binary)
    write(1, '-', 1);
    ft_putnbr_base(42, "01234567");  // Output: "52"    (Octal)
    printf("\n");
    ft_putnbr_base(255, "0123456789ABCDEF");  // Output: "FF"  (Hexadecimal)
    printf("\n");
}
