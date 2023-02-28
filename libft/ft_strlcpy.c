/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:50:57 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:50:57 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src && !size)
		return (0);
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	while ((i + 1 < size) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

// int main()
// {
//     char dest[15]  = "hello";
//     char src[15] = "MyWorld";
//     printf("%zu\n", ft_strlcpy(dest, src, 16));
//     printf("%lu\n", strlcpy(dest, src, 15));
// 		printf("%s\n", dest);
//     return (0);
// }