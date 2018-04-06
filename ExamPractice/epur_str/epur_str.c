/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:49:15 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 11:04:49 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	int space;
	int i;

	i = 0;
	space = -1;
	if (str[i] == ' ')
		i++;
	while (str[i])
	{
		if(str[i] != ' ' && str[i] != '\t')
		{
			if (space == 1)
				ft_putchar(' ');
			space = 0;
			ft_putchar(str[i]);
		}
		else if (space == 0)
			space = 1;
		i++;
	}
}

int main(int argc, char **argv)
{
	epur_str("This is a test\t\t\tmessage\n");
	epur_str(" seulement          la c'est      plus dur \n");
	epur_str("this is a test            message");
	return (0);
}
