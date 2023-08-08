/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:27:14 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/18 17:03:08 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!(to_find[j]))
			return (str + i);
		i++;
	}
	return (0);
}
