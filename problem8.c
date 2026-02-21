#include <stdio.h>

int main() {
    int n;
    char choice;
    scanf("%4d", &n);
    scanf(" %c", &choice);


    int d1 = n/1000;
    int d2 = (n/100)%10;
    int d3 = (n/10)%10;
    int d4 = n % 10;




    if (choice == 'e'){
	    d1 = (d1 + 7)%10;
	    d2 = (d2 + 7)%10;
	    d3 = (d3 + 7)%10;
	    d4 = (d4 + 7)%10;



	    int t = d1; d1 = d3; d3 = t;
	    t = d2; d2 = d4; d4 = t;
	    printf("%d%d%d%d\n", d1, d2, d3, d4);

    }else if (choice == 'd'){
	    int t = d1; d1 = d3; d3 = t;
	    t = d2; d2 = d4; d4 = t;
	    d1 = (d1 + 3) % 10;
	    d2 = (d2 + 3) % 10;
	    d3 = (d3 + 3) % 10;
	    d4 = (d4 + 3) % 10;
	    printf("%d%d%d%d\n", d1, d2, d3, d4);

    }else {
	    printf("Error: Invalid choice\n");

    }
    return 0;
}
