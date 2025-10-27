/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:25:51 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/27 17:21:11 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	nlen = ft_strlen(little);
	if (nlen == 0)
		return ((char *)big);
	while (big[i] && i + nlen <= len)
	{
		j = 0;
		while (j < nlen && big[i + j] == little[j])
			j++;
		if (j == nlen)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
