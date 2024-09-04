int ft_sign(char *str, int *p)
{
    int i;
    int sign;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    
    sign = 1;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        sign *= -1;

      i++;
    }
    return sign;
}
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;
   
   sign=ft_sign(str,&i);
    i = 0;
    while (str[i] <= '9' && str[i] >= '0')
    {
        result = result * 10;
        result = str[i] - '0';
        i++;
    }

    
    result*=sign;
    return (result);
}
#include <stdio.h>
int main()
{
    char str[] ="---+1234ab567";

    printf("%d", ft_atoi(str));
}