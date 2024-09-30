/*Exercise 1-12. Write a program that prints its input one word per line.*/

#include <stdio.h>

int main(){

    int c, tracker;
    tracker = 0;

    while((c = getchar()) != EOF){

        if(c == '\n' || c == '\t' || c == ' '){

            tracker = 0;

        } else if(tracker == 0){

            putchar('\n');
            tracker =  1;

        }

        putchar(c);


    }

    return 0;

}
