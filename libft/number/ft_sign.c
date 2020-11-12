/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ihi <aait-ihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:23:45 by aait-ihi          #+#    #+#             */
/*   Updated: 2020/11/07 20:35:58 by aait-ihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(long long v)
{
	return (v >= 0 ? 1 : -1);
}

int	ft_fsign(long double v)
{
	return ((long long)v >> 63 ? 1 : -1);
}