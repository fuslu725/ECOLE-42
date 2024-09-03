/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:27:48 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/03 10:27:51 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(s1[i] && s2[i] && (i < n - 1) && (s1[i] == s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

#include<stdio.h>
int main()
{
    char s1[]="fil";
    char s2[]="lif";

    printf("%d", ft_strncmp(s1, s2, 4));
}
