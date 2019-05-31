/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:39:16 by lbuang            #+#    #+#             */
/*   Updated: 2019/05/31 11:49:23 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		++j;
	}
	s1[i] = '\0';
	return (s1);
}

int        main(void)
{
    char a[15] = "This is ";
    const char b[15] = "me";

    ft_strcat(a, b);

    printf("%s", a);
    return (0);
}
