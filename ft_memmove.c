/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:17:11 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/11 19:42:18 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*byte_dest;
	const unsigned char	*byte_src;

	i = 0;
	byte_dest = dest;
	byte_src = src;
	if (n == 0 || byte_dest == byte_src)
		return (dest);
	if (byte_dest < byte_src || byte_dest >= byte_src + n)
	{
		while (i < n)
		{
			byte_dest[i] = byte_src[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		byte_dest[i - 1] = byte_src[i - 1];
		i--;
	}
	return (dest);
}
