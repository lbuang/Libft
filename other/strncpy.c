/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:20:47 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/04 15:40:16 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strncpy(char *dst, const	char *src, size_t len)
{
	 size_t	i;

	i = 0;
	while (src[i] != '\0' && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main()
{
	const char a[50] = "hello";
	char b[50];

	ft_strncpy(b, a, 3);
	printf("%s", b);
	return (0);
}
