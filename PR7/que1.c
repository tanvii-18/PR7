#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int modul(int a, int b)
{
	return a%b;
}

int main()
{
	int a,b,choice;
	
	printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for % \n");
    printf("Press 0 for the exit \n");
    printf("\n");
    
	printf("Enter your choice :");
	scanf("%d", &choice);
	
		printf("\n");
		
	if(choice==0)
	{
		printf("Programme exited !");
	}
		
	printf("enter the value of a :");
	scanf("%d", &a);
	
	printf("enter the value of b :");
	scanf("%d", &b);

	
	switch(choice)
	{
		case 1 : printf("addition is %d", a+b);
		break;
		
		case 2 : printf("substraction is %d", a-b);
		break;
		
		case 3 : printf("multiplication is %d", a*b);
		break;
		
		case 4 : printf("division is %d", a/b);
		break;
		
		case 5 : printf("modul is %d", a%b);
		break;
		
		default : printf("Enter valid input !");
        break;
	
	}
	

}