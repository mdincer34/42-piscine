/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:29:28 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/25 17:23:14 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	while (power-- > 0)
		res *= nb;
	return (res);
}
