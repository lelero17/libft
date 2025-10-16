/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:23:35 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/16 15:24:02 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	val;

	i = 0;
	val = (unsigned char) c;
	while (s[i])
	{
		if (val == (unsigned char)s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (val == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
