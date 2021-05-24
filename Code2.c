#include <stdio.h>
#include <stdlib.h>

float calc_kwadrat(float a);
float calc_prostokat(float a, float b);
float calc_prostopadloscian(float a, float b, float c);
float calc_szescian(float a);


int main(int argc, char* argv[])
{
	int wybor;
	float a, b, c;
	printf("Wybierz figure:\n"
		"1. kwadrat\n"
		"2. prostokat\n"
		"3. prostopadloscian\n"
		"4. szescian\n");
	scanf("%d", &wybor);
	fflush(stdin);
	switch (wybor)
	{
	case 1:
		printf("Podaj dlugosc boku kwadratu\n");
		scanf("%f", &a);
		printf("Pole wynosi %f\n", calc_kwadrat(a));
		break;
	case 2:
		printf("Podaj dlugosc 1. boku prostokata\n");
		scanf("%f", &a);
		printf("Podaj dlugosc 2. boku prostokata\n");
		scanf("%f", &b);
		printf("Pole wynosi %f\n", calc_prostokat(a,b));
		break;
	case 3:
		printf("Podaj dlugosc 1. krawedzi prostopadloscianu\n");
		scanf("%f", &a);
		printf("Podaj dlugosc 2. krawedzi prostopadloscianu\n");
		scanf("%f", &b);
		printf("Podaj dlugosc 3. krawedzi prostopadloscianu\n");
		scanf("%f", &c);
		printf("Objetosc wynosi %f\n", calc_prostopadloscian(a,b,c));
		break;
	case 4:
		printf("Podaj dlugosc krawedzi szescianu\n");
		scanf("%f", &a);
		printf("Objetosc wynosi %f\n", calc_szescian(a));
		break;
    default:
        printf("Wprowadzono zle dane!");
	}
}

