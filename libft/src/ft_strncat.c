/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:10:10 by apakhomo          #+#    #+#             */
/*   Updated: 2017/11/11 13:10:11 by apakhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = ft_strlen(s1);
	while (b < ft_strlen(s2) && b < n)
	{
		s1[a] = s2[b];
		a++;
		b++;
	}
	s1[a] = '\0';
	return (s1);
}
