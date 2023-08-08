/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:42:08 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/12 10:45:02 by mudincer         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_letter;

	last_letter = 'z';
	while (last_letter >= 'a')
	{
		write(1, &last_letter, 1);
		last_letter--;
	}
}
