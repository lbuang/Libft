/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:07:29 by lbuang            #+#    #+#             */
/*   Updated: 2019/05/28 10:49:57 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int        main(int argc, char **argv)
{
    int a;

	a = ft_tolower(argv[1][0]);
	ft_putchar(a);
    return 0;
}
