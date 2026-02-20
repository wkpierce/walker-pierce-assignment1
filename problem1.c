#include <stdio.h>

int main(){

	char morning;
	char mom;
	char sleeping;

	scanf(" %c", &morning);
	scanf(" %c", &mom);
	scanf(" %c", &sleeping);
	
	if (sleeping == 'y') {
        	printf("Don't answer phone\n");
    	}
    	else if (morning == 'y' && mom != 'y') {
        	printf("Don't answer phone\n");
    	}
    	else {
        	printf("Answer phone\n");
    	}

    	return 0;
}
