/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:49:22 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/25 15:26:38 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	long	temp;
	int		len;

	len = 0;
	temp = n;
	if (n == 0)
		return (1);
	if (temp < 0)
	{
		len++;
		temp = -temp;
	}
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		len;
	int		neg;
	long	num;
	char	*str;

	len = ft_intlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	neg = (n < 0);
	if (neg)
		num = -num;
	i = len;
	while (i > (size_t)neg)
	{
		str[--i] = (num % 10) + '0';
		num /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
