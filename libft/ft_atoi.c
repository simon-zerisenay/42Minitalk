/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:44:42 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/03 19:44:42 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const	char *nptr)
{
	int	result;
	int	sign;
	int	num;

	sign = 1;
	result = 0;
	while (nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == 32))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (nptr && *nptr >= '0' && *nptr <= '9')
	{
		num = *nptr - '0';
		result *= 10;
		result += num;
		nptr++;
	}
	result *= sign;
	return (result);
}

// int main()
// {
//     char *num = "-2147483649";
//     printf("%d\n", ft_atoi(num));
// 	printf("%d\n", atoi(num));
//     return (0);
// } 