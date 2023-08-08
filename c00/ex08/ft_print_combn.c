/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:28:33 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/12 16:55:39 by mudincer         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	first_digit;
	int	second_digit;

	if (n == 2)
	{
		first_digit = '0';
		while (first_digit <= '8')
		{
			second_digit = first_digit + 1;
			while (second_digit <= '9')
			{
				write(1, &first_digit, 1);
				write(1, &second_digit, 1);
				if (first_digit != '8')
				{
					write(1, ", ", 2);
				}
				second_digit++;
			}
			first_digit++;
		}
	}
}
