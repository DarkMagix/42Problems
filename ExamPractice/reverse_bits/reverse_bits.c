/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:08:34 by mweir             #+#    #+#             */
/*   Updated: 2018/04/05 18:48:23 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned char    reverse_bits(unsigned char octet)
{
	unsigned char res;
	int i;

	i = 0;
	res = 0;
	while (i < 8)
	{
		printf("res: %d | octet: %d \n", res << 1, octet & 1);
		res = (res << 1) | (octet & 1);
		octet = (octet >> 1);
		i++;
	}
	return (res);
}
int main(void)
{
	printf("%d",reverse_bits(67));
	printf("\n128 & 1 is %d",(1 & 1));
	return (0);
}
