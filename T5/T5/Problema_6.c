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
	int a,r,i,nrOnes,m,nr;
	nrOnes = 0;
	nr = 0;
	printf("Numar :"); scanf("%d", &a);

	if (a > 255)
	{
		printf("Numarul e prea mare.\n");
	}	
	else
	{
		printf("%d-->", a); //Calculez numarul in binar si ii introduc bitii in stiva
		while (a > 0) {
			push(a % 2);

			if (a % 2 == 1)
				nrOnes++; //Salvez aparitiile cifrei 1

			a = a / 2;
		}

		m = 8 - n;
		while (m > 1) {
			push(0);
			m--;
		}

		while (!eVida()) //Parcurg stiva, afisez varful si il sterg
		{
			if (nr == 4)printf(" ");
			printf("%d", peek());
			pop();
			nr++;
		}
		printf("\n");


		printf("Valoare maxima: ");


		m = 8 - nrOnes; //Calculez numarul aparitiei cifrei 0 
		while (m > 0)
		{
			push(0); //Introduc in stiva zerourile
			m--;
		}
		while (nrOnes > 0)
		{
			push(1); //Introduc in stiva cifra 1 de cate ori apare
			nrOnes--;
		}
		nr = 0;

		while (!eVida())
		{
			if (nr == 4)printf(" ");
			printf("%d", peek());
			pop();
			nr++;
		}
		printf("\n");

	}
	


	system("pause");
	return 0;
}

void push(int elem) //Introduce un element in stiva
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

void pop() //Sterge varful stivei
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

int peek() //Returneaza varful stivei
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
