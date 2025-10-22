/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:23:25 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/22 19:41:32 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(ft_strlen(s1) * sizeof(char));
	while(s1[i] == set)
		i++;
	len = i;
	i = ft_strlen(s1);
	while(s1[i] == set)
		i--;
	while(len <= i)
	{
		res[j] = s1[len];
		j++;
		len++;
	}
	res[j] = '\0';
	return(res);
}
