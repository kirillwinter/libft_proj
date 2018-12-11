/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:01:25 by wballaba          #+#    #+#             */
/*   Updated: 2018/11/27 15:01:27 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	if (s != NULL)
	{
		while (ptr[i] != '\0')
		{
			ptr[i] = 0;
			i++;
		}
	}
}