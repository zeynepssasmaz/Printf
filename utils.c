/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeynepsasmaz <zeynepsasmaz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:03:19 by zeynepsasma       #+#    #+#             */
/*   Updated: 2022/07/19 00:03:23 by zeynepsasma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *var)
{
	int	i;

	if (!var)
		return (ft_putstr("(null)"));
	i = 0;
	while (var[i] != '\0')
		ft_putchar(var[i++]);
	return (i);
}
