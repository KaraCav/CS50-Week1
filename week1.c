// #1
#include <stdio.h>
#include <cs50.h>

int main(void)
{ //get user input and assign to variable
    string user_name = get_string("What's your name? ");
  // print hello, user_name
    printf("hello, %s\n", user_name);
}
