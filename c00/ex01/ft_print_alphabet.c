/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:38:37 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/13 11:45:08 by mudincer         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
