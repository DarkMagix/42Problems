/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 09:34:09 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 14:10:04 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalnum(int c)
{
	if (c > 32 && c < 128)
		return (1);
	return (0);
}

void first_word(char *str)
{
	int i;
	int start;

	i = 0;
	while (str[i] && ft_isalnum(str[i]) == 0)
		i++;
	if(!str[i])
	{
		write(1, "\n", 1);
		return ;
	}
	start = i;
	while(str[i] && ft_isalnum(str[i]) == 1)
		i++;
	if(i - start > 0)
		write(1, &str[start], (i - start));
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
