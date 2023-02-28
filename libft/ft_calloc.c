/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:09:43 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/04 15:01:23 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count >= 65535 && size >= 65535)
		return (0);
	p = malloc (count * size);
	if (!p)
		return (0);
	ft_bzero(p, (count * size));
	return (p);
}

// int main()
// {
// 	int i = 100;
// 	int m = 4;
// 	printf("%s\n", ft_calloc(i, m));
// 	return (0);
// }