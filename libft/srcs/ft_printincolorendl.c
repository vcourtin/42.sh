/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printincolorendl.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:43:55 by agreau            #+#    #+#             */
/*   Updated: 2014/03/27 01:36:19 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_printincolorendl(const char *str, char *color)
{
	return (ft_putendl(ft_putcolor(str, color)));
}
