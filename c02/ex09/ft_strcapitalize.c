/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:02:56 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/29 15:03:00 by fuslu            ###   ########.tr       */
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
char *ft_strcapitalize(char *str)
{
    int i;
    int control;

    ft_strlowcase(str);

    control= 1;

    i=0;
    while(str[i]!= '\0')
    {
       if(str[i] <= 'z' && str[i] >= 'a')
       {
            if (control == 1)
            {
                str[i] = str[i] - 32;
                control = 0;
            }
       }
        else if (str[i] <= '9' && str[i] >= '0')
            control = 0;
        else 
            control = 1;     
        i++;  
    }
    return (str);
}


#include <stdio.h>
int main()
{
    char str[]= "sALut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    printf("%s",str);
    return 0;
}
