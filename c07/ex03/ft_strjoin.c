/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:05:25 by mudincer          #+#    #+#             */
/*   Updated: 2023/08/02 11:28:47 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	int		seplen;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
		len += slen(strs[i++]);
	str = (char *) malloc(sizeof(char) * (len + (size - 1) * slen(sep) + 1));
	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[len++] = strs[i][j++];
		seplen = 0;
		while (sep[seplen] && i < size - 1)
			str[len++] = sep[seplen++];
		i++;
	}
	str[len] = '\0';
	return (str);
}

// #include "stdio.h"

// int	main()
// {
// 	char *strs[] = {"mustafa","ahmet","mustafa", "ugur"};
// 	char *str;
// 	str = ft_strjoin(4, strs, ", ");
// 	printf("%s\n",str);
// }
