/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 05:24:48 by maarslan          #+#    #+#             */
/*   Updated: 2026/11/28 11:52:48 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	sum = 1;
	i = 1;
	while (i <= nb)
	{
		sum = sum * i;
		i++;
	}
	return (sum);
}
