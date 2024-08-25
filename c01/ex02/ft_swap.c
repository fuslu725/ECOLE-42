/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuslu <fuslu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:54:25 by fuslu             #+#    #+#             */
/*   Updated: 2024/08/22 10:54:29 by fuslu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int main()
{
	int a = 7;
	int b = 25;

	ft_swap(&a,&b);
	printf("a=%d , b=%d olur",a,b);
	return 0;
}

