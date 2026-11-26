/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 20:20:43 by maarslan          #+#    #+#             */
/*   Updated: 2026/11/26 20:26:25 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int n)
{
    if(n<0)
    {
        ft_putchar('N');
    }
    else
    {
        ft_putchar('P');
    }
}