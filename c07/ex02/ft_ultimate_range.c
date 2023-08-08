/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:56:36 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/31 16:13:26 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = 0;
	if (min >= max)
		return (0);
	*range = (int *) malloc(sizeof(int) * max - min);
	if (*range == 0)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
