/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:50:17 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/16 17:26:52 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	unsigned char val;

	i = ft_strlen(s);
	val = (unsigned char) c;
	if(val == '\0')
		return((char *)&s[i]);
	i -= 1;
	while(i > 0)
	{
		if(val == (unsigned char)s[i])
			return((char *)&s[i]);
		i--;
	}
	if(val == (unsigned char)s[i])
		return((char *)&s[i]);
	return(NULL);
}
