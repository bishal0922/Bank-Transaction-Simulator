//Bishal Giri
//This program test that the formula (h-2)/4 is correct for the given problem.
#include <stdio.h>

int main(){
    printf("This program test that the formula (h-2)/4 is correct for the given problem.\n");

    //declaring variables
    float total_hours;
    float sunday_hours;
    float saturday_hours;
    float friday_hours = 2;

    //reads the user for the "h" value which is the total amount of hours that they can study
    printf("Enter h: ");
    scanf("%f", &total_hours);

    //formula for calculating hours for saturday and sunday
    sunday_hours = (total_hours-2)/4;
    saturday_hours = sunday_hours*3;

    //printing the user with the number of hours for all three days; friday, saturday and sunday
    printf("Number of hours to study on Sunday:%8.2f\n", sunday_hours);
    printf("Number of hours to study on Saturday:%6.2f\n", saturday_hours);
    printf("Number of hours to study on Friday:%8.2f\n", friday_hours);

    //showing how the hours add up to their initial time allocation.
    printf("%5.3f + %6.3f + %5.3f =% 6.3f\n", sunday_hours, saturday_hours, friday_hours, total_hours);
    printf("Good bye.");

}


