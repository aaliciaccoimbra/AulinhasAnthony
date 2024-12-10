#include <stdio.h>
int main ()
{
	float salario;
	printf("qual o salario bruto:\n");
	scanf("%f",&salario); // como faço para não aparecer um tanto de 0 após o ponto
	//Tentei fazer com switc case mas fiquei na duvida de como colocar uma condição para cada caso
	if (salario<=1903.98)
	{
		printf("não preciso de esmola de pobre");
	}
	else 
	{
		if (salario>=1903.99 && salario<2826.65)
	}
	
}

/*
Até R$1.903,98: Isento.
De R$1.903,99 a R$2.826,65: 7,5%.
De R$2.826,66 a R$3.751,05: 15%.
De R$3.751,06 a R$4.664,68: 22,5%.
Acima de R$4.664,68: 27,5%.
O programa deve exibir o valor do imposto e o salário líquido após a dedução.
*/