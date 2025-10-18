/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:21:21 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/18 20:09:52 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;
	size_t	copy_len;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	copy_len = slen - (size_t)start;
	if (copy_len > len)
		copy_len = len;
	ptr = malloc(copy_len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + (size_t)start, copy_len);
	ptr[copy_len] = '\0';
	return (ptr);
}
