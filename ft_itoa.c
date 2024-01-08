/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:51:11 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/29 18:33:55 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_itoa() converts an integer 'n' into a string representation.
 */

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = (n / 10);
		count = (count + 1);
	}
	return (count);
}

char	*ft_help(long nbr, long num_digit, char *res)
{
	long	digit;
	long	i;

	i = num_digit - 1;
	while (nbr != 0)
	{
		digit = nbr % 10;
		res[i--] = digit + 48;
		nbr = nbr / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	i;
	long	num_digits;
	long	new_n;
	char	*res;

	new_n = n;
	num_digits = count_digits(new_n);
	res = (char *)malloc(num_digits + 1);
	if (res == NULL)
		return (NULL);
	if (new_n == 0)
		res[0] = '0';
	else if (new_n < 0)
	{
		new_n = -new_n;
		res[0] = '-';
	}
	i = num_digits - 1;
	res = ft_help(new_n, num_digits, res);
	res[num_digits] = '\0';
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void) 
{
	int test_cases[20] = {1, 123, -456, -2147483648};	
	int i = 0;
	while (i < 4)
	{
		int num = test_cases[i];
		char *res= ft_itoa(num);
		printf("Integer: %d , String: %s\n\n", num, res);
		i++;
	}
	return (0);
}
*/
