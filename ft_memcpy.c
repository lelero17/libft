/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:41:23 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/27 17:06:13 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*byte_dest;
	const unsigned char	*byte_src;

	if (dest == 0 && src == 0)
		return (dest);
	i = 0;
	byte_dest = dest;
	byte_src = src;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}
