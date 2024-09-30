/*Exercise 1-9. Write a program to copy its input to its output, replacing each string one or more blanks by a single blank*/

#include <stdio.h>

int main(){
	int c, tracker;

	tracker = 0;

	while((c = getchar()) != EOF){

		if(c != ' '){

			putchar(c);
			tracker = 1;

		} else if(c == '\n'){

			printf("\n");

		} else if(c == ' ') {
			if(tracker == 1){

				putchar(c);

			}
			tracker = 0;
		}

	}

}
