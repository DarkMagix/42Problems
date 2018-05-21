<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 12:43:43 by exam              #+#    #+#             */
/*   Updated: 2018/04/22 17:30:08 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
=======
#include <unistd.h>
>>>>>>> 84d67bf0173085b49fa772c6f3d1582575cebfac
#include <stdio.h>
#include "stdlib.h"

int numLen(int nbr, int base)
{
  int size;

  size = (nbr < 0) ? 1 : 0;
  while (nbr != 0)
    {
      size++;
      nbr/=base;
    }
  return (size-1);
}

int ft_abs(int nbr)
{
  return ((nbr < 0) ? -nbr : nbr);
}

<<<<<<< HEAD
int main(int argc, char **argv)
{
	printf("%s", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return (0);
=======
char *ft_itoa_base(int nbr, int base)
{
  int len;
  char *res;
  int neg;
  char *hex;
  long long int value;
  
  hex = "0123456789ABCDEF";
  value = nbr;
  if (value == 0 || base <2)
    return ("0");
  len = numLen(value, base);
  neg = (value < 0) ? 1 : -1;
  res = (char*)malloc(sizeof(char) * (len + 1));
  len--;
  res[len]= '\0';
  while (len >= 0)
    {      
      res[len] = hex[ft_abs(value % base)];
      value = ft_abs(value / base);
      len--;
    }
  if (neg == -1 && base ==10)
    res[0]='-';
  return (res);
>>>>>>> 84d67bf0173085b49fa772c6f3d1582575cebfac
}
