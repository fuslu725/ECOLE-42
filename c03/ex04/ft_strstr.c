/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:23:25 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/03 10:30:04 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if(to_find[0] == '\0')
    {
        return str;
    }

    i = 0;
    while(str[i])
    {
        j = 0;
        while(str[i + j] == to_find[j] && to_find[j])
        { 
            if(to_find[j + 1] == '\0')
            {
                return (str + i);
            }
            j++;
        }
        i++;
    }
    return 0;
    
}
#include <stdio.h>
int main()
{
    char str[] = "ah bir ataş ver";
    char find[] = "taş";

    printf("%s",ft_strstr(str,find));
}
