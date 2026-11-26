/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:43:44 by maarslan          #+#    #+#             */
/*   Updated: 2026/11/26 20:20:14 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_numbers(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        ft_putchar(48 + i);
        i++;
    }
}