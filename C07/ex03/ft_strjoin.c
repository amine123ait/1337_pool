/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:24:43 by testggman          #+#    #+#             */
/*   Updated: 2024/07/18 01:25:03 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total += ft_strlen(sep);
		}
		i++;
	}
	return (total);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;
	char	*empty_str;

	if (size == 0)
	{
		empty_str = malloc(sizeof(char));
		if (empty_str)
			empty_str[0] = '\0';
		return (empty_str);
	}
	total_len = ft_total_len(size, strs, sep);
	result = malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcpy(result + ft_strlen(result), strs[i]);
		if (i++ < size - 1)
			ft_strcpy(result + ft_strlen(result), sep);
	}
	return (result);
}
