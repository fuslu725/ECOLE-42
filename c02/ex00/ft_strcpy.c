/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:57:01 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/27 15:57:09 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
    
}

#include <stdio.h>
int main()
{
    char dest[] = "fatma";
    char src[] = "uslutalha";

    printf("%s \n",dest);
    ft_strcpy(dest,src);
    printf("%s",dest);

    return 0;

}
