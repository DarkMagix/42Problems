#include <unistd.h>
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
}
