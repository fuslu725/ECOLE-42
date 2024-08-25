/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:46:08 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/22 14:46:11 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	 ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

#include <stdio.h>
int main()
{
	int f = 25;
	int u = 7;
	int usf;
	int fus;
	
	ft_div_mod(f, u, &usf, &fus);

	printf("bölüm=%d , kalan=%d\n",usf, fus);

	return 0;
}
