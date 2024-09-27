/*Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main(){
	int nb, nl , nt, c;

	nb = 0;
	nl = 0;
	nt = 0;


	while((c = getchar()) != EOF){


		if(c == '\n') nl++;
		else if(c == '\t') nt++;
		else if(c == ' ') nb++;

	}

	printf("%d %d %d", nl, nt, nb);

}
