/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen <jichen@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:35:13 by jichen            #+#    #+#             */
/*   Updated: 2022/06/08 16:16:48 by jichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	resul;

	i = 0;
	d = 0;
	s = 0;
	resul = 0;
	while (dst[d] != '\0')
		++d;
	while (src[s] != '\0')
		++s;
	if (dstsize > d)
		resul = d + s;
	else
		resul = s + dstsize;
	while (src[i] && (d + 1) > dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (resul);
}
