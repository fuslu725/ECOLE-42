/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_strlowcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:55:17 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 14:55:20 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
        {
           str[i] = str[i] + 32;
        }
        i++;
    }
    
return str;
}
#include <stdio.h>
int main()
{
    char str[]="FatmaUSLU";

    printf("%s \n",str);

    ft_strlowcase(str);
    printf("%s",str);

    return 0;
}