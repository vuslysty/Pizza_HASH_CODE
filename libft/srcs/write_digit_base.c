/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_digit_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:11:57 by vuslysty          #+#    #+#             */
/*   Updated: 2019/01/21 20:12:36 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	write_digit_base(int n)
{
	if (n >= 0 && n <= 9)
		return ('0' + n);
	else
		return ('a' + (n - 10));
}