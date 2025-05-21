/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <togomez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:00:27 by togomez           #+#    #+#             */
/*   Updated: 2025/05/06 10:35:11 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src) + 1;
	copy = ft_calloc(size, sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, size);
	return (copy);
}
