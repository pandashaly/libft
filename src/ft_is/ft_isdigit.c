/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:07:16 by ssottori          #+#    #+#             */
/*   Updated: 2023/11/10 13:50:36 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check for a decimal digit 0 - 9*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}