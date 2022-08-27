//Bishal Giri
/*This program simulates two bank transactions. It asks for your current amount and lets the user know of the changes in their account
balance after the transactions. This is all presented in a table for the user's viewing experience.*/
#include <stdio.h>

int main()
{
    //declaring variables
    float bank_amount;
    float first_transaction;
    float second_transaction;

    //program's intention
    printf("This program will simulate 2 bank transactions.\n");
    //reads the user for the initial bank account money
    printf("Enter the original amount of money in the bank: ");
    scanf("%f", &bank_amount);

    //reads the user for the first bank transaction
    printf("Enter the 1st transaction: ");
    scanf("%f", &first_transaction);

    //reads the user for the second bank transaction
    printf("Enter the 2nd transaction: ");
    scanf("%f", &second_transaction);

    //setting up the table graphic
    printf("---------------------------\n");
    printf("|%12s |%9s  |\n", "Transaction", "Account");
    printf("|%12s |%10.2f |\n", " ", bank_amount);

    //formula for calculating the account balance after the first transaction
    float after_first = bank_amount + (first_transaction);
    printf("|%12.2f |%10.2f |\n",first_transaction,after_first);

    //formula for calculating the account balance after the second transaction
    float after_second = after_first + (second_transaction);
    printf("|%12.2f |%10.2f |\n",second_transaction,after_second);
    printf("---------------------------\n");


}
