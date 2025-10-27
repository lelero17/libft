/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:02:05 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/27 17:31:33 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	size_t	free;

	i = 0;
	slen = 0;
	dlen = 0;
	free = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (dlen >= size)
		return (slen + size);
	free = size - dlen - 1;
	while (i < free && src[i])
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
