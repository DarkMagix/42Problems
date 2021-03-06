/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:22:50 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 12:44:00 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_word_count(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			count++;
		i++;
	}
	return (count + 1);
}

void rev_wstr(char *s, int first)
{
	int        start;
    int        i;

    i = 0;
    if (s[i])
    {
        while (s[i] && (s[i] == ' ' || s[i] == '\t'))
            i++;
        if (!s[i])
            return ;
        start = i;
        while (s[i] && s[i] != ' ' && s[i] != '\t')
            i++;
		printf("passing in %s\n", &s[i]);
        rev_wstr(&s[i], 0);
        write(1, &s[start], i - start);
        if (!first)
            write(1, " ", 1);
    }
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1],1);
	return (0);
}
