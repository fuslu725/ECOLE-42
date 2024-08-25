/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:45:10 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/22 14:45:15 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

#include <stdio.h>
int main()
{
	int a = 25;
	int b = 7;

	ft_ultimate_div_mod(&a, &b);

	printf("bölüm=%d , kalan=%d\n", a,b);

	return 0;
}

