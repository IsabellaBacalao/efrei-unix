#include "unistd.h"
//You have to create a C function that displays the alphabet in one line and ends with a new line

void display_alphabet(char c){
   // print C
  write(1, &c, 1);
}

int main(int ac, char **av){
    char c='a';

    while(c<='z'){
    display_alphabet(c);
    c++;
    }
    return(0);

}
