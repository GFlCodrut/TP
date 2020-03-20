#include<stdio.h>
#include<stdlib.h>
int *suma(int *, int *);

int main()
{
	//PRB 5
	/*
	int *p, a, i;
	int V[] = { 3, 5, 0, -2, 11 };
	a = 5;
	p = &a;
	printf("Valoarea pointerului la inceput: %d\n", *p);
	(*p)++;
	printf("Valoarea pointerului dupa incrementare: %d\n", *p);
	(*p)--;
	printf("Valoarea pointerului dupa decrementare: %d\n\n", *p);
	

	printf("Avem vectorul V="); for (i = 0; i < 5; i++)printf("%d ", V[i]);
	printf("\nPointerul 'p' ia adresa de inceput a acestui vector (V[0])\n");
	p = &V;
	printf("Initial acesta este %d\n", *p);
	(*p++);
	printf("Dupa incrementare acesta devine %d\n", *p);
	(*p--);
	printf("Iar dupa decrementare acesta este %d\n", *p);
	printf("Concluzii:\n- un vector poate fi parcurs cu ajutorul unui pointer folosind incrementarea sau decrementarea\n");
	*/

	//PRB 6
	/*
	int a, b, *S;

	printf("Introduceti cele 2 numere de adunat\n");
	scanf("%d%d", &a, &b);

	S = suma(&a, &b);

	printf("%d + %d = %d\n", a, b, *S);
	*/
	system("pause");
	return 0;
}


int *suma(int *a, int *b) {
	int *S,sum;

	sum = *a + *b;
	S = &sum;
	return S;

}
