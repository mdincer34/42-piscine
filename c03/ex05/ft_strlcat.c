/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:04:54 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/18 17:22:03 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_of_dest;

	len_of_dest = ft_strlen(dest);
	i = 0;
	while (src[i] && i < size)
	{
		dest[len_of_dest + i] = src[i];
		i++;
	}
	dest[len_of_dest + i] = '\0';
	return (len_of_dest + i);
}
