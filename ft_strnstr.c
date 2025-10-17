/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:25:51 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/17 15:33:28 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			nlen;

	i = 0;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	while (i + nlen <= len && haystack[i])
	{
		j = 0;
		while (j < nlen && haystack[i + j] == needle[j])
			j++;
		if (j == nlen)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
