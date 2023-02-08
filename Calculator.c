#include <stdio.h>

int main()
{
	char op;
	int again;
	double first, second;

	do{
	printf("\nEnter any one from the given below ");
	printf("\nUSE 'A' or 'a' or '+' for Addition");
	printf("\nUSE 'S' or 's' or '-' for Subtraction");
	printf("\nUSE 'M' or 'm' or '*' for Multiplication");
	printf("\nUSE 'D' or 'd' or '/' for Division");
	
	printf("\n\n---------------------------");
	printf("\nWhat would you like to do? : ");
	scanf("%c", &op);
	fflush(stdin);

	printf("\nEnter Value 1 :");
	scanf("%lf", &first);
	
	printf("\nEnter Value 2 :");
	scanf("%lf", &second);

	switch (op)
	{
        case '+':
		case 'A':
		case 'a':
		printf("\n-> %.lf + %.lf = %.2lf",first,second, first + second);
		break;
		case '-':
		case 'S':
		case 's':
		printf("\n-> %.lf - %.lf   = %.2lf",first,second, first - second);
		break;
		case '*':
		case 'M':
		case 'm':
		printf("\n-> %.lf - %.lf  = %.2lf",first,second, first * second);
		break;
		case '/':
		case 'D':
		case 'd':
		printf("\n-> %.lf / %.lf = %.2lf",first,second, first / second);
		break;
		default:
		printf("\nERROR: it seems like you entered wrong value!!");
		break;
	}
	    printf("\n\nWould you like to calculate again? (1=Yes 0=No) : ");
		scanf("%d", &again);
		fflush(stdin);
		if(again==0)
		{
		printf("\nThank-you for using me!!");
		}
	} while (again != 0 || again!=1);
	return 0;
}
