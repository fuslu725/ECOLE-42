/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:27:20 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/03 10:27:23 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
    char s1[]="uslu";
    char s2[]="usluu";

    printf("%d",ft_strcmp(s1,s2));
}
