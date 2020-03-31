#include<stdio.h>
#include<stdlib.h>
#define CAP 50

int n = -1, stack[CAP];

void push(int);
void pop(void);
int peek(void);
int ePlina(void);
int eVida(void);

int main()
{
	int a,r,nrZeros,nrOnes;
	nrOnes = 0;
	nrZeros = 0;
	printf("Numar :"); scanf("%d", &a);
	if (a > 255)
	{
		printf("Numarul e prea mare.");
		printf("Numar :"); scanf("%d", &a);
	}	
	else
	{
		while (a > 0) {
			r = a % 2; 
			if (r == 1)
				nrOnes++;
			else 
				nrZeros++;
			a = a / 2;
			push(r);
		}
	

	}


	


	system("pause");
	return 0;
}

void push(int elem)
{
	if (!ePlina())
	{
		++n;
		stack[n] = elem;
	}
	else
	{
		printf("Stiva este plina.\n");
	}
}

void pop()
{
	if (!eVida())
	{
		n--;
	}
	else
	{
		printf("Stiva este vida.\n");
	}
}

int peek()
{
	if (!eVida())
	{
		return stack[n];
	}
	else
	{
		printf("Stiva este vida.\n");
	}
}
int ePlina()
{
	if (n == CAP - 1)
	{
		return 1;
	}
	else return 0;
}

int eVida()
{
	if (n == -1)
		return 1;
	else return 0;
}
