#include <stdio.h>

#include <unistd.h>

int fatorial(int base)
{
	int	i;

	i = 1;

	if (base<0)
		return 0;
	else if (base == 0)
		return 1;
	else if (base == 1)
		return 1;
	else
	{
		while( base > 0)
		{
			i= i*base;
			base = base-1;
		}
		return(i);
	}
}



int main(int argc,char **argv)
{
	printf("number: %d",fatorial(2));
}
