/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:45:21 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 10:45:27 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
   
    while(str[i] != '\0')
    {
        if (!((str[i] <= '9'  && str[i] >= '0')))
            return 0;
       
        i++;
    }
    
    return 1;
}
#include <stdio.h>
int main()
{
    
    printf("%d\n", ft_str_is_numeric("abJIHH")); // 0
    printf("%d\n", ft_str_is_numeric("013456")); //1
    printf("%d\n", ft_str_is_numeric("")); //1
    printf("%d\n", ft_str_is_numeric("124a.,gv")); //0
   
    return 0;

}
