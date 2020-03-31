#include<stdio.h>
#include<stdlib.h>

#define CAP 50

int n = -1,stack[CAP],m = -1, stack2[CAP]; //Stiva 1 si stiva 2
//Prototipuri
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
int pow10(int);


int main()
{
	int i, ch, elem, a, nr;
	nr = 0;
	for (i = 1; i <= 50; i++) //Introduc elemente pana la 50
	{
		push(i);
	}

	while (!eVida()) //Afisez si sterg
	{
		printf("%d\n", peek());
		pop();
	}
	printf("\n");



	for (i = 1; i <= 50; i++) //Elimin elementele prime din prima stiva si le introduc sub forma binara in ce de-a doua
	{
		if (!ePrim(i))
			push(i);
		else
		{
			a = transf(i);
			push2(a);
		}
	}

	while (!eVida()) //Afisez prima stiva fara elemente prime
	{
		printf("%d\n", peek());
		pop();
	}

	printf("\n");

	while (!eVida2()) //Afisez cea de-a doua stiva 
	{
		printf("%d\n", peek2());
		pop2();
	}

	
	system("pause");
	return 0;
}

void push(int elem)// Introduce elemente in prima stiva
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

void pop() //Sterge varful din prima stiva
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

int peek() //Afiseaza varful din prima stiva
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

int ePrim(int x) //Verifica daca un numar este prim
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






void push2(int elem)//Introduce elemente in cea de-a doua stiva
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

void pop2()//Sterge varful din cea de-a doua stiva
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

int peek2()//Afiseaza varful din cea de-a doua stiva
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

int transf(int a)//Transforma un numar in forma binara 
{
	int m,r,nr;
	nr = 0;
	m = 0;
	while (a > 0)
	{
		
		m = a % 2 * pow10(nr) + m;
		a = a / 2;
		nr++;
	}
	return m;
}

int pow10(int j) //Returneaza puteri ale lui 10 in functie de j ( 10^j )
{
	if (j == 0)return 1;
	int i = 1;
	while (j > 0)
	{
		i = i * 10;
		j--;
	}
	return i;
}


