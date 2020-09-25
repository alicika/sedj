#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j--;
		}
		i++;
	}
}



void show(int *tab, int size)
{
	int i,j;
	i = 0;
	while(i<size)
	{
		j = tab[i];
		printf("%d ",j);
		i++;
	}
	printf("\n");
}

void f1(int *p, int size)
{
	show(p, size);
	ft_sort_int_tab(p, size);
	show(p, size);
	printf("\n");
}

int main(void)
{
	int t1[] = {1};
	int t2[] = {2,1};
	int t3[] = {3,2,1};
	int t4[] = {4,2,1,3};
	int t5[] = {3,5,2,1,4};
	int t11[] = {3,5,2,1,4,-1,-4,-2,-3,-5,0};

	f1(t1, 1);
	f1(t2, 2);
	f1(t3, 3);
	f1(t4, 4);
	f1(t5, 5);
	f1(t11, 11);

	return(0);
}