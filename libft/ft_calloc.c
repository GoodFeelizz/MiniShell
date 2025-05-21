/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <togomez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:42:29 by togomez           #+#    #+#             */
/*   Updated: 2025/05/06 11:20:27 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot;

	tot = nmemb * size;
	if (tot == 0)
		return (ft_calloc(1, 1));
	else if (tot / size != nmemb)
		return (NULL);
	else
	{
		ptr = malloc(tot);
		if (ptr)
			ft_bzero(ptr, tot);
	}
	return (ptr);
}
