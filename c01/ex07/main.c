#include <stdio.h>

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
	ft_rev_int_tab(p, size);
	show(p, size);
	printf("\n");
}

int main(void)
{
	int tab[] = {1,2,3,4,5};
	int size = 5;

	int t0[] = {};
	int t1[] = {1};
	int t2[] = {1,2};
	int t3[] = {1,2,3};
	int t4[] = {1,2,3,4};
	int t5[] = {1,2,3,4,5};
	int t10[] = {10,11,12,13,14,15,16,17,18,19};

	f1(t0, 0);
	f1(t1, 1);
	f1(t2, 2);
	f1(t3, 3);
	f1(t4, 4);
	f1(t5, 5);
	f1(t10, 10);

	return(0);
}