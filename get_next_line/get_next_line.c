/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arapaill <arapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:39:32 by arapaill          #+#    #+#             */
/*   Updated: 2019/11/06 10:40:36 by arapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int get_next_line(int fd, char **line)
{
    fd = open("line", O_RDONLY);
    if (fd == -1 || line == NULL)
        return(1);
    
}