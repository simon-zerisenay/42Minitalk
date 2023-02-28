/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:48:36 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:48:36 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	int		i;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (!cdest && !csrc)
		return (0);
	while (n--)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

// int main()
// {
// 	char *csrc = "Hello World";
// 	char cdst[12]; 
// 	printf("%s\n", ft_memcpy(cdst, csrc, 5));
// 	printf("%s\n", memcpy(cdst, csrc, 5));
// 	// // Copies from src to dest until n
// }