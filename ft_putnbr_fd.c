/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:28:11 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/25 15:50:29 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	size_t	i;
	char	temp[20];

	num = (long)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	i = 0;
	while (num > 0)
	{
		temp[i++] = (char)((num % 10) + '0');
		num /= 10;
	}
	while (i > 0)
		write(fd, &temp[--i], 1);
}
