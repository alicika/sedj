#include <stdio.h>

void	ft_comb(int A[], int p, int w, int n, int r);
int		ft_print_combn(int r);

int	num = 0;

int		ft_print_combn(int r)
{
	int n;
	int K[128];

	n = 9;
	ft_comb(K, r, n-r, n, r);
}

void	ft_comb(int A[], int p, int w, int n, int r)
{
	if (p > 0)
	{
	int i;
	while (i <= w)
	{
		A[p] = i;
		ft_comb(A, p - 1, w - i, n, r);
	}
}
else
{                                              /*  ★   */
	int i, j, m;
	num++;
	printf("%d:\t", num);
	m = 0;
	for(i = 1;i <= r;i++)
	{
		for(j = 0;j < A[i];j++, m++)
		{
		printf("0");
		printf("1");
		m++;
		}
	}
	for(;m < n;m++)
	printf("0");
	printf("\n");
	}
}

int		main(void)
{
	ft_print_combn(3);
	return 0;
}
