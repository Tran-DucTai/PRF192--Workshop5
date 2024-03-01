#include <stdio.h>
#include <math.h>

int getUserChoice()
{   int choice;
	printf("1. Quadratic equation.\n");
	printf("2. Bank deposit problem.\n");
	printf("3. Exit the program.\n");
	printf("\n");
	printf("Enter Your Choice: ");
	scanf("%d%*c", &choice);
	return choice;
}

void quadEquation()
{
	float a, b, c, d, x, y;
	printf("Quadratic equation: ax^2 + bx + c = 0\n");
	printf("Please enter coefficient a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	if (a != 0) {
		d = b*b - 4*a*c;
		if (d == 0)
			printf("Equation has double solution x1 = x2 = %.0f\n", -b/(2*a));
		else if ( d >0)
			printf("Equation has two real solutions: x1 = %.0f, x2 = %.0f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
		else printf("Equation has no solution!\n");
	}
	else printf("Wrong condition of a!\n");
}

void bank() {
	float x, y, z, m;
	do {
	printf("Enter your deposit: ");
	scanf("%f", &x);
    }
    while (x <= 0);
	do {
	printf("Enter yearly rate (between 0.1 and 1.0): ");
	scanf("%f", &y);
    }
    while (y <= 0 || y > 1);
    do {
	printf("Enter number of year: ");
	scanf("%f", &z);
    }
    while (z <= 0);  
    m = x*pow(1+y,z); 
    printf("Your amount after this duration: %f\n", m); 
}

int main()
{   int userChoice;
    do
    {   userChoice = getUserChoice();
        switch(userChoice)
		{   case 1: quadEquation();
		            break;
		    case 2: bank();
			        break; 
		    default: printf("Good Bye");
	    }
	}
	while (userChoice>0 && userChoice<3);
	return 0;
}

