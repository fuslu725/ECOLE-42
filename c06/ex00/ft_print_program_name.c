/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:47:24 by fuslu             #+#    #+#             */
/*   Updated: 2024/09/05 20:47:27 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (argv[0][i])
    {
        ft_putchar(argv[0][i]);  
        
        i++;
    }
    ft_putchar('\n');
    return 0;
}
clear
