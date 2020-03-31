
//Problema nu e rezolvata, aici e ce am incercat 
#include<stdio.h>
#include<stdlib.h>

#define CAP 50

int n = -1,stack[CAP],m = -1, stack2[CAP];
void push(int);
void pop(void);
int peek(void);
int ePlina(void);
int eVida(void);
int ePrim(int);
int transf(int);
void push2(int);
void pop2(void);
int peek2(void);
int ePlina2(void);
int eVida2(void);
int pwr(int);


int main()
{
	int i, ch, elem, a,nr;
	/*nr = 0;
	for (i = 1; i <= 50; i++)
	{
		push(i);
	}
	
	while (!eVida()) 
	{
		printf("%d\n", peek());
		pop();
	}
	for (i = 1; i <= 50; i++) {

		a = peek();
		if (!ePrim(a))
		{
			push2(a);
		}
		pop();

	}
	while (!eVida2())
	{
		printf("%d\n", peek2());
		pop2();
		nr++;
	}*/
	printf("%d", transf(20));


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
	if(!eVida())
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

int ePrim(int x)
{
	int i;
	if (x == 1)return 0;
	if (x == 2)return 1;
	for (i = 2; i <= x / 2; i++)
	{
		if (x%i == 0)return 0;
	}
	return 1;
}
///////////////////
void push2(int elem)
{
	if (!ePlina2())
	{
		++m;
		stack2[m] = elem;
	}
	else
	{
		printf("Stiva este plina.\n");
	}
}

void pop2()
{
	if (!eVida2())
	{
		m--;
	}
	else
	{
		printf("Stiva este vida.\n");
	}
}

int peek2()
{
	if (!eVida2())
	{
		return stack2[m];
	}
	else
	{
		printf("Stiva este vida.\n");
	}
}
int ePlina2()
{
	if (m == CAP - 1)
	{
		return 1;
	}
	else return 0;
}

int eVida2()
{
	if (m == -1)
		return 1;
	else return 0;
}

int transf(int a)
{
	int m,r,nr;
	nr = 0;
	m = 0;
	while (a > 0)
	{

		r = a % 2;
		if (r == 1)nr++;
		a = a / 2;
		m = r*pwr(nr) + m;
	}
	return m;
}

int pwr(int i)
{
	int j,a;
	a = 1;
	for (j = 1; j <= i; j++)
		a = a * 10;
	return a;
}


