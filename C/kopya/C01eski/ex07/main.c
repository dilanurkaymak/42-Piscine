#include <stdio.h>

void	ft_int_tab(int *tab, int size);


int	main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5};
	int size = 5;
	ft_int_tab(arr, size);
	while (i < size)
{
	printf("%d", arr[i]);
	i++;
}
}
