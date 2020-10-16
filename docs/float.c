/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:28:02 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/29 11:42:42 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	n = 3.14;

	int		i = n;
	int		ans1 = n - i;
	float	ans2 = n - i;

	printf("Answer 1: Int : %d\n", ans1);
	printf("Answer 2: Float: %f\n", ans2);

	printf("The value of n is : %f\n", n);
	printf("The value of i is : %d\n", i);

	return (0);
}

