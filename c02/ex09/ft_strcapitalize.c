/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:45:33 by mudincer          #+#    #+#             */
/*   Updated: 2023/07/17 16:23:50 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	controle;

	ft_strlowcase(str);
	controle = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (controle == 1)
				str[i] = str[i] - 32;
			controle = 0;
		}
		else if (str[i] <= '9' && str[i] >= '0')
			controle = 0;
		else
			controle = 1;
		i++;
	}
	return (str);
}
