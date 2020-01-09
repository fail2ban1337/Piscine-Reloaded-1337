/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:53:41 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/05 10:17:24 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int lentgh;

	lentgh = 0;
	while (str[lentgh] != '\0')
	{
		lentgh++;
	}
	return (lentgh + 1);
}

char		*ft_strcpy(char *ptr, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char		*ft_strdup(char *src)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(src));
	ft_strcpy(ptr, src);
	return (ptr);
}
