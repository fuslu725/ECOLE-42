/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:28:11 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/03 10:28:23 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(dest[i])
    {
        i++;
    }

    j = 0;
    while(src[j])
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
    char dest[16] = "fillerguzel";
    char src[] = "dir";

    printf("%s",ft_strcat(dest,src));
}
