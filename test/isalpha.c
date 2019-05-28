/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:58:05 by lbuang            #+#    #+#             */
/*   Updated: 2019/05/28 09:03:47 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int        main(int argc, char **argv)
{
    int a;

    a =48 + isalpha(argv[1][0]);
    ft_putchar(a);
    return 0;
}
