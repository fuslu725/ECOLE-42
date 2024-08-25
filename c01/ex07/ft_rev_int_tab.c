/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:26:03 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/22 19:26:11 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
   int i;
   int temp;

   i = 0;
   while(i < (size/2))
   {
    temp = tab[i];
    tab[i] = tab[size - 1 - i];
    tab[size - 1 - i] = temp;

    i++;
    }
}

#include <stdio.h>
int main()
{
    int tab[] = {0,1,2,3,4,5,6};
    int size = 6;

    ft_rev_int_tab(tab,6);

    int i = 0;
    while(i<size)
    {
        printf("%d", tab[i]);
        i++;
    }

    return 0;
}