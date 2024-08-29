/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:44:44 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/28 12:44:49 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
   
    while(str[i] != '\0')
    {
        if (!((str[i] <= 'z'  && str[i] >= 'a') || (str[i] <= 'Z'  && str[i] >= 'A')))
            return 0;
       
        i++;
    }
    
    return 1;
}
#include <stdio.h>
int main()
{
    
    printf("%d\n", ft_str_is_alpha("abJIHH")); // 1
    printf("%d\n", ft_str_is_alpha("..123ddfv ")); // 0
    printf("%d\n", ft_str_is_alpha("")); // 1
    printf("%d\n", ft_str_is_alpha("Hello123")); // 0

    return 0;

}