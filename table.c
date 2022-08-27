//Bishal Giri
//This program reads a number N_number from the user and prints the values of N, N^2(squared) and N^3(cubed) in a table.

#include <stdio.h>

int main(){
    //declaring the variable
    float N_number;

    printf("This program reads a number N from the user and prints the values of N, N squared and N cubed in a table.\n");
    printf(" Enter N: ");
    scanf("%f", &N_number);

    //creating the table
    printf("+----------+--------+\n");
    printf("|%10s|%7.1f |\n", "N", N_number );
    printf("+----------+--------+\n");
    printf("|%10s|%8.2f|\n", "N squared", N_number*N_number );
    printf("+----------+--------+\n");
    printf("|%10s|%8.2f|\n", "N cubed", N_number*N_number*N_number );
    printf("+----------+--------+\n");
    printf("Good bye");
}
