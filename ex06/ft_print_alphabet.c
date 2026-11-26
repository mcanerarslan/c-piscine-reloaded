/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:25:19 by maarslan          #+#    #+#             */
/*   Updated: 2026/11/26 16:43:27 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_alphabet(void)
{
    int i;
    
    i = 0;
    while (i < 26)
    {
        ft_putchar(97 + i);
        i++;
    }
}