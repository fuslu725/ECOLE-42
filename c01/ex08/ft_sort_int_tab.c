/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:25:11 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/23 11:25:16 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while(i<size-1)
    {
        j = 0;
        while(j<size-i-1)
        {
            if(tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp; 
            }
            j++;
        }   
        i++;
    }
}

#include <stdio.h>
int main()
{
    int tab[] = {0,4,5,3,2,9,2};
    int size = 7;

    ft_sort_int_tab(tab,7);

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", tab[i]);
    }
        return 0;
}