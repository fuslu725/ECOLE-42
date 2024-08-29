/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:46:45 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 10:46:48 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
   
    while(str[i] != '\0')
    {
        if (!((str[i] <= 'z'  && str[i] >= 'a')))
            return 0;
       
        i++;
    }
    
    return 1;
}

#include <stdio.h>
int main()
{
    
    printf("%d\n", ft_str_is_lowercase("abchvj")); // 1
     printf("%d\n", ft_str_is_lowercase("abcFCH"));//0
      printf("%d\n", ft_str_is_lowercase(""));//1
       printf("%d\n", ft_str_is_lowercase("135"));//0
   
    return 0;

}
