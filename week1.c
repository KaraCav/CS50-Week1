// #1
#include <stdio.h>
#include <cs50.h>

int main(void)
{ //get user input and assign to variable
    string user_name = get_string("What's your name? ");
  // print hello, user_name
    printf("hello, %s\n", user_name);
}

// #2
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int user_number = get_int("input a number between 1 and 8 ");
    while(user_number < 1 || user_number > 8) {
        user_number = get_int("please input a number between 1 and 8");
    }
    for(int i = 0; i < user_number; i++) {
       // printf("#");
        for(int j = user_number; j > i; j--) {
       //     printf("%i ", i);
            printf("#");
        }
         printf("  ");
        for(int j = 0; j <= i; j++) {
            printf("#");
        }

         printf("\n");
    }
}
