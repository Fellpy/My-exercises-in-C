#include <stdio.h>

/* Programa que pede dois numeros
para o usuário e mostra o resultado
da soma, subtração, muitplicação e divisão
do primeiro pelo segundo.
*/

int main()
{
	float num1, num2, sum, sub, mult, div;

	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);

	printf("Digite o segundo numero: ");
	scanf("%f",&num2);

	// Soma
	sum = num1 + num2;

	// Subtração
	sub = num1 - num2;

	// Multiplicação
	mult = num1 * num2;

	// Divisão
	div = num1 / num2;

	printf("%.2f + %.2f = %.2f\n",num1,num2,sum);
	printf("%.2f - %.2f = %.2f\n",num1,num2,sub);
	printf("%.2f * %.2f = %.2f\n",num1,num2,mult);
	printf("%.2f / %.2f = %.2f\n",num1,num2,div);

	return 0;
}