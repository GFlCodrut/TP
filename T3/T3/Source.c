#include<stdio.h>
#include<stdlib.h>
void int2bit(int n, int*nr)
{
	int V[] = { 0,0,0,0,0,0,0,0 };
	int i, m;
	i = 0; m = 0;
	while (n != 0)
	{
		if (n % 2 == 1) { m++; *nr = m; }
		V[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (i = 7; i >= 0; i--)
	{
		if (i == 3)printf(" ");
		printf("%d", V[i]);
	}
	printf("\n");
}

int main()
{
	int N, i, nr, S;
	nr = 0; S = 0;
	printf("Introduceti un numar: "); scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("%d - ", i); int2bit(i, &nr);
		S += nr;
	}
	printf("Rezultat: %d\n", S);


	system("pause");
	return 0;
}