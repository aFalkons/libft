/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:59:03 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/23 12:41:11 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_atoicalc(int *som, int x, int i, const char *str)
{
	int	seg;

	seg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		seg = ',' - str[i];
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			x = str[i] - 48;
			*som = *som * 10;
			*som = *som + x;
		}
		else
			break ;
		i++;
	}
	*som = *som * seg;
}

int	ft_atoi(const char *str)
{
	int		som;
	int		x;
	int		i;

	som = 0;
	x = 0;
	i = 0;
	ft_atoicalc(&som, x, i, str);
	return (som);
}


""	 	 	  	   	 	 43679"
