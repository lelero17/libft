/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:02:05 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/16 15:24:01 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	size_t	free;

	i = 0;
	slen = 0;
	dlen = 0;
	free = 0;
	while (dlen < size && dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (dlen >= size)
		return (slen + size);
	free = size - dlen - 1;
	while (i < free && src[i])
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>

// int main(void) {
//     char a1[6] = "Hi";
//     printf("r1=%zu", ft_strlcat(a1, "Joe", 6));

//     char a2[7] = "Hello";
//     printf("r2=%zu", ft_strlcat(a2, "World", 7));

//     char a3[1]; a3[0] = 'X';
//     printf("r3=%zu", ft_strlcat(a3, "abc", 0));

//     return (0);
// }