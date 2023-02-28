/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:48:48 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/04 19:48:48 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)s)[i++] = c;
	}
	return (s);
}

// int main()
// {
//     char arr[SIZE_ARRAY] = "ABCD";
//     // printf("%s\n", arr);
//     ft_memset(arr,'0', sizeof(arr));
//     printf("%s\n", arr);
//     return 0;
// }