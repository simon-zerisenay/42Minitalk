/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:50:45 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:50:45 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + src_len);
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
// int main()
// {
//     char  *src = "rahel";
//     char dest[25]  = "simon";
// 	size_t size = 15;
//     printf("%zu\n", ft_strlcat(dest,src, size));
//     return (0);
// }