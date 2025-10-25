/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:29:42 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/25 16:49:05 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*out;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = f((unsigned int)i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
