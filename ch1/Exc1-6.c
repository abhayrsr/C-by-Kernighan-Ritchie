/*Exercise 1-6. Verify that the expression getchar () != EOF is 0 or 1*/

#include <stdio.h>

int c;


int main(){

	c= (getchar() != EOF);
	printf("%d", c);	

}
