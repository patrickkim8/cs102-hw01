#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
char operator;
operator = argv[1][0];
float a = atof(argv[2]);
float b = atof(argv[3]);
float c;

switch(operator)
{
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case 'x':
		c = a * b;
		break;
	case '/':
		c = a / b;
		break;
}
printf("%f\n", c);
}