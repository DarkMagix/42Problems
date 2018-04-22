/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:43:43 by exam              #+#    #+#             */
/*   Updated: 2018/04/19 19:31:54 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa_base(int nbr, int base)
{
	char *hex = "0123456789ABCDEF";
    long sum;
    int neg;
    int len;
    long tempN;
    char *res;
	sum = nbr;
    neg = 0;
    len = 1;
	if (base <2)
		return (NULL);
    if (sum < 0)
    {
        neg = 1;
        sum *=-1;
    }
	if(base ==10)
		len++;
    tempN = sum;
    while (tempN >= base)
    {
        len++;
        tempN/=base;
    }
    res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0';
    while (len--)
    {
        res[len] = hex[sum % base];
        sum /= base;
    }
    if (neg == 1 && base ==10)
        res[0] = '-';
    return (res);
}

int main(void)
{
	printf("%s", ft_itoa_base(0,2));
	return (0);
}
