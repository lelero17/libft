/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:29:39 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/18 12:28:09 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t		i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t'
			|| nptr[i] == '\n' || nptr[i] == '\v'
			|| nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (!ft_isdigit(nptr[i]))
		return (0);
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(sign * res));
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("Test  1: '%s' -> %d\n", "42", ft_atoi("42"));
// 	printf("Test  2: '%s' -> %d\n", "   42", ft_atoi("   42"));
// 	printf("Test  3: '%s' -> %d\n", "   -42", ft_atoi("   -42"));
// 	printf("Test  4: '%s' -> %d\n", "   +42", ft_atoi("   +42"));
// 	printf("Test  5: '%s' -> %d\n", "   --42", ft_atoi("   --42"));
// 	printf("Test  6: '%s' -> %d\n", "   -+42", ft_atoi("   -+42"));
// 	printf("Test  7: '%s' -> %d\n", "   ++42", ft_atoi("   ++42"));
// 	printf("Test  8: '%s' -> %d\n", "   +0042", ft_atoi("   +0042"));
// 	printf("Test  9: '%s' -> %d\n", "   -0042abc", ft_atoi("   -0042abc"));
// 	printf("Test 10: '%s' -> %d\n", "   +0042  56", ft_atoi("   +0042  56"));
// 	printf("Test 13: '%s' -> %d\n", " \t\n\v\f\r", ft_atoi(" \t\n\v\f\r"));
// 	printf("Test 14: '%s' -> %d\n", "", ft_atoi(""));
// 	printf("Test 15: '%s' -> %d\n", "+", ft_atoi("+"));
// 	printf("Test 16: '%s' -> %d\n", "-", ft_atoi("-"));
// 	printf("Test 17: '%s' -> %d\n", "00000123", ft_atoi("00000123"));
// 	printf("Test 18: '%s' -> %d\n", "123abc456", ft_atoi("123abc456"));

// 	return (0);
// }