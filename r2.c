/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jitondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:51:58 by jitondo           #+#    #+#             */
/*   Updated: 2024/06/15 15:52:11 by jitondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	multiply(int base,int vezes)
{
	int count_v=1;

	while (count_v <= vezes)
	{
		ft_putchar(base);
		count_v++;
	}
}

/*
void add_col_x(int x,f,c,u)
{
	if()
	ft_putchar('o');
	multiply('-',x-2);
	ft_putchar('o');
	ft_putchar('\n');
}
*/



void	rush(int x,int y)
{
	int count_l=1;
	while (count_l <= x)
	{
		if (count_l==1)
		{
			ft_putchar('o');
			multiply('-',x-2);
			ft_putchar('o');
			ft_putchar('\n');

		}
		else
		{
			ft_putchar('|');
			multiply(' ',x-2);
			ft_putchar('|');
			ft_putchar('\n');
		}

		if (count_l==x)
		{
			ft_putchar('o');
			multiply('-',x-2);
			ft_putchar('o');
			ft_putchar('\n');
		}

	count_l++;
	}
}

int main(){
	rush(1,1);
	return(0);
}
