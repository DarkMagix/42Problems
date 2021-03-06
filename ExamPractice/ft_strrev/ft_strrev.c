/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:09:43 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 12:20:09 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int len;
	int i;
	char temp;
	len = 0;
	i = 0;
	while(str[len])
		len++;

	while (len - 1 > i)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		len--;
		i++;
	}
	return (str);
}

int main(void)
{
	char msg[100] = "12345";
	printf("%s", ft_strrev(msg));
	return (0);
}
