/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 15:52:17 by maarslan          #+#    #+#             */
/*   Updated: 2026/11/28 15:52:18 by maarslan         ###   ########.fr       */
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
