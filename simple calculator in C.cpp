#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Simple and effective calculator in C ; 
int main()
{
	int alegere;
	float n1, n2, res;
	printf("Simple calculator\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Square root\n");
	printf("6.Power (n1^n2)\n");
	printf("7.Sine (sin(n1))\n");
	printf("8.Cosine (cos(n1))\n");
	printf("9.Tangent (tan(n1))\n");
	printf("10.Exit\n");
	while (1)
	{
		printf("Please enter your choice (1->10) :");
		scanf("%d", &alegere);
		break;
	}
	if (alegere == 10)
	{
		printf("Exiting the program...\n");
	}
	if (alegere == 5 || alegere==7 ||alegere== 8 ||alegere== 9)
	{
		printf("	Enter the number:");
		scanf("%f", &n1);
	}
	else if (alegere >= 1 && alegere <= 4 || alegere == 6)
	{
		printf("Enter the first number: ");
		scanf("%f", &n1);
		printf("Enter the second number: ");
		scanf("%f", &n2);
	}
	else {
		printf("Invalid!");
		
	}
	switch (alegere)
	{
	case 1:
		res = n1 + n2;
		printf("\nResult: %.2f+%.2f = %.2f\n", n1, n2, res);
		break;
	case 2:
		res = n1 - n2;
		printf("\nResult: %.2f-%.2f = %.2f\n", n1, n2, res);
		break;
	case 3:
		res = n1 * n2;
		printf("\nResult: %.2f*%.2f = %.2f", n1, n2, res);
		break;
	case 4:
		if (n2 == 0)
		{
			if (n1 > 0)
			{
				printf("Result infinity. (positive)\n");
			}
			else if(n1<0){
				printf("Result infinity.(negative)\n");
			}
			else {
				printf("Result undefined\n");
			}
		}
		else 
		{
			res = n1 / n2;
			printf("\nResult: %.2f:%.2f = %.2f", n1, n2, res);
		}
			break;
	case 5:
		if (n1 >= 0)
		{
			res = sqrt(n1);
			printf("\nResult: Square root of %.2f = %.2f\n", n1, res);
		}
		else {
			printf("Can not calculate square root of negative number.");
		}
		break;
	case 6:
		res = pow(n1, n2);
		printf("\nResult: %.2f^%.2f = %.2f", n1, n2, res);
		break;
	case 7:
		res = sin(n1);
		printf("\nResult: Sin of %.2f = %.2f", n1, res);
		break;
	case 8:
		res = cos(n1);
		printf("\nResult: Cos of %.2f = %.2f", n1, res);
		break;
	case 9:
		res = tan(n1);
		printf("\nResult: Tan of %.2f = %.2f ", n1, res);
		break;
	default:
		printf("Invalid choice! Please try again!");
	}

}