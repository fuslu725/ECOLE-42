int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    
    else if(index < 2)
        return index;

    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    
}

#include <stdio.h>
int main()
{
    int index = 7;
    printf("Fibonacci sayisi: %d\n",ft_fibonacci(index));
    
}