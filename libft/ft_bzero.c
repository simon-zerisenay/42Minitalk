/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:44:49 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:44:49 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = '\0';
		p++;
	}
}

// int main()
// {
//     char str[4] = "ABCD";
//     printf("%s\n", str);
// 	Fills first n values of the string  with null
//     ft_bzero(str, 3);
//     printf("%s\n", str);
// }