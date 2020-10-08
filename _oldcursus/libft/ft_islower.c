/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuerta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:26:17 by mhuerta           #+#    #+#             */
/*   Updated: 2019/08/06 16:07:07 by mhuerta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
		r = 1;
	else
		r = 0;
	return (r);
}
