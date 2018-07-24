/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:43:55 by mweir             #+#    #+#             */
/*   Updated: 2018/07/23 18:44:05 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_empty(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int is_nbr(char c, int base)
{
	char l_hex[16] = "0123456789abcdef";
	char u_hex[16] = "0123456789ABCDEF";
	while (base--)
		if (l_hex[base] == c || u_hex[base] == c)
			return (1);
	return (0);
}
int get_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int    ft_atoi_base(const char *str, int str_base)
{
	int sum;
	int neg;

	sum = 0;
	while (is_empty(*str))
		str++;
	neg = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : 0;
	while (is_nbr(*str, str_base))
		sum = sum * str_base + get_val(*str++);
	return (sum * neg);
}
