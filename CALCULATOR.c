#include <stdio.h>
int main() 
{
	float num1, num2, result;
		char operator;
		
		printf("Enter Frist Num: ");
		scanf(" %f", &num1);
		
		printf("Enter Operater ( + , - , * , / ):  ");
		scanf(" %c", &operator );
		
		printf("Enter Second Num:  ");
		scanf(" %f" , &num2);
		
		switch(operator)
	{ 
		case '+':
			result = num1 + num2;
		break;
		
		case '-':
			result = num1 - num2;
		break;
		
		case '*':
			result = num1 * num2;
		break;
		
		case '/':
			if (num2 != 0)
			{ result = num1 / num2 ;
			}
			else 
			{printf("Error cannot divide by zero");
			return 0;
			
			}
			break;
			
			default:
				printf("Invalid Operator");
				return 0;
		}
		printf("Result = %.2f" , result);
		
		return 0;
		
}
