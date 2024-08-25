/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:11:36 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/21 20:11:42 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
#include <stdio.h>
int main()

{
    int f;
    int *us = &f;
    int **us2 = &us;
    int ***us3 = &us2;
    int ****us4 = &us3;
    int *****us5 = &us4;
    int ******us6 = &us5;
    int *******us7 = &us6;
    int ********us8 = &us7;
    int *********us9 = &us8;

	ft_ultimate_ft(&f);
    printf("%d", f);
    return 0;
}
