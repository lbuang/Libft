/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:25:25 by lbuang            #+#    #+#             */
/*   Updated: 2019/05/30 15:59:18 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int        ft_atoi(const char *str)
{
   int        sign;
   int        result;
   int        i;

   i = 0;
   result = 0;
   sign = 1;

   while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
           || str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
   if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
            i++;
        }
    }
      while(str[i] != '\0')
   {
       result = result * 10 + str[i] - '0';
       i++;
   }
   return (sign * result);
}

int        main(void)
{
   char num[] = "15";

   printf("%d", ft_atoi(num));
   return (0);
}
