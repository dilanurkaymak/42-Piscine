#include <stdio.h>

void	ft_int_tab(int *tab, int size)

{
	int temp;
	int start = 0;
	int end = size - 1;

	while(start < end)
	{
		temp = tab[start];
		tab[start] = tab [end];
		tab [end] = temp;

		start++;
		end--;
	}

}

int	main()
{
	int i = 0;
	int tab[] = { 1, 2, 3, 4, 5};
	int size = 5;
	ft_int_tab(tab, size);
	while (i < size)
{
	printf("%d", tab[i]);
	i++;
}

}
