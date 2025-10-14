/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:23:35 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/14 20:36:27 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	unsigned char	val;

	i = 0;
	val = c;
	while (s[i])
	{
		if (s[i] == val)
			return(&s);
		i++;
	}
	if (s[i + 1] == '\0')
		return (&s);
	return (0);
}
