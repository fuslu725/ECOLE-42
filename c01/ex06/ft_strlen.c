/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:07:30 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/22 19:07:34 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



int ft_strlen(char *str)
{
    int length;
    

    length = 0;
    while(str[length] != '\0') 
    {
        length++;
        
    }
    return (length);

}

#include <stdio.h>

int main()
{
    char fatma[] = "fatma uslu";
    int lenght = ft_strlen(fatma);
    printf("The lenght of the string is: %d\n", lenght);
    return 0;
}