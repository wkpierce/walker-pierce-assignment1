#include <stdio.h>
int main(){
	double num1, num2;
	char value;

	scanf("%lf %c %lf", &num1, &value, &num2);
	switch(value){
		case '+':
			printf("%.2lf\n", num1 + num2);
			break;
		case '-':
			printf("%.2lf\n", num1 - num2);
			break;
		case '*':
			printf("%.2lf\n", num1 * num2);
			break;
		case '/':
			if (num2 == 0) {
				printf("Error: dividing by zero\n");
			} else{
				printf("%.2lf\n", num1 / num2);
			}
			break;
		case '%':
            		if (num2 == 0) {
                		printf("Error: dividing by zero\n");
            		} else {
                		int a = (int)num1;
                		int b = (int)num2;
                		printf("%d\n", a % b);
            		}
            		break;
        	default:
            		printf("Error: unknown operator\n");
    	}

    	return 0;
}
