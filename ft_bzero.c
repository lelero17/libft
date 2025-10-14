/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:54:33 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/14 19:04:57 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*byte_ptr;

	i = 0;
	byte_ptr = s;
	while (i < n)
	{
		byte_ptr[i] = '0';
		i++;
	}
}
