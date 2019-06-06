/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:47:00 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/06 11:07:36 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			org_size;
	static char	*dup;
	char		*dup_offset;

	org_size = strlen(s1);
	dup = (char *)malloc(sizeof(char) * org_size + 1);
	if
		(dup == NULL)
		return ((char *)NULL);
	dup_offset = dup;
	while (*s1)
	{
		*dup_offset = *s1;
		dup_offset++;
		s1++;
	}
	*dup_offset = '\0';
	return (dup);
}
