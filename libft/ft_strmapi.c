/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arapaill <arapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:52:42 by arapaill          #+#    #+#             */
/*   Updated: 2019/10/22 09:41:25 by arapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	int		i;

	if (s == 0 || f == 0)
		return (NULL);
	i = 0;
	if (!(array = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (i < ft_strlen(s))
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}
