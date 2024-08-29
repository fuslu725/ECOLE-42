/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:39:25 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 11:39:30 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'z' && str[i] >= 'a')
        {
           str[i] = str[i] - 32;
        }
        i++;
    }
    
return str;
}

#include <stdio.h>
int main()
{
    char str[]="FatmaUslu";

    printf("%s \n",str);

    ft_strupcase(str);
    printf("%s",str);

    return 0;

}