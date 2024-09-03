/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:29:24 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/03 10:29:26 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while(dest[i])
    {
        i++;
    }

    j = 0;
    while(src[j] && j < nb )
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
#include <stdio.h>
int main()
{
    char dest[70] = "merhaba";
    char src[] = "dunya";

    printf("%s",ft_strncat(dest,src,2));
}
