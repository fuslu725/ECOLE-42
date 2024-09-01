/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:18:56 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 15:19:01 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    int len;

    len = 0;
    while(src[len] != '\0')
    {
        len++;
    }

    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
       dest[i] = src[i];
       i++;
    }

    dest[i] = '\0';

    return len;
}


#include <stdio.h>
int main()
{
    char dest[] = "uslufatma";
    char src[] = "talha";

    printf("%d , %s",ft_strlcopy(dest,src,sizeof(dest)),dest);
    return 0;
}
