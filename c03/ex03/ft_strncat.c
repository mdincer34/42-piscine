/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:08:50 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/18 15:26:56 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_of_dest;
	unsigned int	i;

	len_of_dest = ft_len(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len_of_dest] = src[i];
		i++;
		len_of_dest++;
	}
	dest[len_of_dest] = '\0';
	return (dest);
}
