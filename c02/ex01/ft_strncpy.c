/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:55:29 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/28 11:55:32 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
   unsigned   int i;

    i = 0;
    while (i < n && src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
     
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
    }

#include <stdio.h>
int main()
{
    char dest[] = "fatmatalha"; //uslu \0 \0 \0 talha
    char src[] = "uslu";

    printf("%s \n",dest);
    ft_strncpy(dest,src,7);
    printf("%s",dest);

    return 0;
}