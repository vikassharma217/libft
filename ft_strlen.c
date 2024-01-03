/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                           :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: vsharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:46:31 by vsharma           #+#    #+#             */
/*   Updated: 2023/09/05 11:46:34 by vsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("String length"));
}*/
