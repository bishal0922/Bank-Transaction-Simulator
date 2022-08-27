//Bishal Giri
/*This program simulates two bank transactions. It asks for your current amount and lets the user know of the changes in their account
balance after the transactions. It also prints out the original amount the user had in their account.*/

#include <stdio.h>

int main()
{
    //declaring variables
    float bank_amount;
    float first_transaction;
    float second_transaction;

    printf("This program will simulate 2 bank transactions.\n");

    //reads the user for original balance
    printf("Enter the original amount of money in the bank: ");
    scanf("%f", &bank_amount);
    //reads the user for the first transaction
    printf("Enter the 1st transaction: ");
    scanf("%f", &first_transaction);

    //formula to calculate the balance after the first transaction
    float after_first = bank_amount + (first_transaction);
    printf("Current amount: %0.2f\n",after_first);

    //reads the user for the second transaction
    printf("Enter the 2nd transaction: ");
    scanf("%f", &second_transaction);

    //formula to calculate the balance after the second transaction
    float after_second = after_first + (second_transaction);
    printf("Current amount: %0.2f\n", after_second);

    //letting the user know of their initial balance in their bank
    printf("The original amount was: %0.2f", bank_amount);
}
