/*Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c, where c is some character not listing above.*/

#include <stdio.h>

int main(){
	printf("display a, \a");
	printf("display v, \v");
	printf("display r, \r");
}
