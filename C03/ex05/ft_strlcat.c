/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:49:17 by testggman          #+#    #+#             */
/*   Updated: 2024/07/13 15:22:16 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	total;

	i = ft_strlen(dest);
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	total = len_dest + len_src;
	if (size < 1)
		return (len_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (total);
}
