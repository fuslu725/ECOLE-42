/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:29:22 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/19 10:29:27 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}