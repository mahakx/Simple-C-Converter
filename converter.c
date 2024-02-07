/*
Program Name: Simple Converter
Author/Student Num: Maha Khan / 251312708
Purpose:  In this program the user is asked what she/he wants to do. An integer can be entered with the following six actions associated with different values of the integer. 
You can assume that the user will always enter an integer.
- 1 for conversion between Kilograms and Pounds (1 kilogram == 2.20462 pounds)
- 2 for conversion between Hectares and Acres (1 hectare == 2.47105 acres)
- 3 for conversion between Litres and Gallons (1 litre == 0.264172 gallons)
- 4 for conversion between Kilometre and Mile (1 kilometre == 0.621371 miles)
- 5 for quit
- {any other integer} for prompting the user to try again.
The program prompts the user to select an option and provides conversion in both directions.
*/

#include <stdio.h>

int main() {
    int userInput;  // Variable to store the user's userInput

    printf("Converter Program\n");  // Display a message

    do {
        printf("\nPlease select an option:\n");
        printf("1. Conversion between Kilograms and Pounds\n"); //(1 kilogram == 2.20462 pounds)
        printf("2. Conversion between Hectares and Acres\n");   //(1 hectare == 2.47105 acres)
        printf("3. Conversion between Litres and Gallons\n");   //(1 litre == 0.264172 gallons)
        printf("4. Conversion between Kilometre and Mile\n");   //(1 kilometre == 0.621371 miles)
        printf("5. Quit\n");

        printf("Enter your userInput: ");
        scanf("%d", &userInput);  // Ask the user for their userInput

        // The first userInput: Conversion between Kilograms and Pounds
        if (userInput == 1) {
            char direction;  // Variable for conversion direction
            double amount;  // Variable to store the input value
            double total;  // Variable to store the result

            printf("Enter K for conversion from kilograms to pounds, P for conversion from pounds to kilograms: ");
            scanf(" %c", &direction);  // Ask the user for the conversion direction

            printf("Enter a value: ");
            scanf("%lf", &amount);  // Ask the user for the input value

            if ((direction == 'K' || direction == 'k') || (direction == 'P' || direction == 'p')) {
                // Calculate the conversion factor based on the direction
                double conversionFactor = (direction == 'K' || direction == 'k') ? 2.20462 : 1 / 2.20462;
                total = amount * conversionFactor;  // Perform the conversion
                printf("Your conversion is %.2lf ", total);
                printf("%s\n", (direction == 'K' || direction == 'k') ? "pounds" : "kilograms");  // Display the result
            } else {
                printf("Not valid. Try again.\n");  // Handle invalid input
            }

        // The second userInput: Conversion between Hectares and Acres
        } else if (userInput == 2) {
            char direction;  // Variable for conversion direction
            double amount;  // Variable to store the input value
            double total;  // Variable to store the result

            printf("Enter H for conversion from Hectares to Acres, A for conversion from Acres to Hectares: ");
            scanf(" %c", &direction);  // Ask the user for the conversion direction

            printf("Enter a value: ");
            scanf("%lf", &amount);  // Ask the user for the input value

            if ((direction == 'H' || direction == 'h') || (direction == 'A' || direction == 'a')) {
                // Calculate the conversion factor based on the direction
                double conversionFactor = (direction == 'H' || direction == 'h') ? 2.47105 : 1 / 2.47105;
                total = amount * conversionFactor;  // Perform the conversion
                printf("Your conversion is %.2lf ", total);
                printf("%s\n", (direction == 'H' || direction == 'h') ? "acres" : "hectares");  // Display the result
            } else {
                printf("Not valid. Try again.\n");  // Handle invalid input
            }

        // The third userInput: Conversion between Litres and Gallons
        } else if (userInput == 3) {
            char direction;  // Variable for conversion direction
            double amount;  // Variable to store the input value
            double total;  // Variable to store the result

            printf("Enter L for conversion from Litres to Gallons, G for conversion from Gallons to Litres: ");
            scanf(" %c", &direction);  // Ask the user for the conversion direction

            printf("Please enter a value: ");
            scanf("%lf", &amount);  // Ask the user for the input value

            if ((direction == 'L' || direction == 'l') || (direction == 'G' || direction == 'g')) {
                // Calculate the conversion factor based on the direction
                double conversionFactor = (direction == 'L' || direction == 'l') ? 0.264172 : 1 / 0.264172;
                total = amount * conversionFactor;  // Perform the conversion
                printf("Your conversion is %.2lf ", total);
                printf("%s\n", (direction == 'L' || direction == 'l') ? "gallons" : "litres");  // Display the result
            } else {
                printf("Not valid. Try again.\n");  // Handle invalid input
            }

        // The fourth userInput: Conversion between Kilometre and Mile
        } else if (userInput == 4) {
            char direction;  // Variable for conversion direction
            double amount;  // Variable to store the input value
            double result;  // Variable to store the result

            printf("Enter K for conversion from Kilometer to Mile, M for conversion from Mile to Kilometer: ");
            scanf(" %c", &direction);  // Ask the user for the conversion direction

            printf("Please enter a value: ");
            scanf("%lf", &amount);  // Ask the user for the input value

            if ((direction == 'K' || direction == 'k') || (direction == 'M' || direction == 'm')) {
                // Calculate the result based on the direction
                result = (direction == 'K' || direction == 'k') ? amount * 0.621371 : amount / 0.621371;  // Perform the conversion
                printf("Your conversion is %.2lf ", result);
                printf("%s\n", (direction == 'K' || direction == 'k') ? "miles" : "kilometers");  // Display the result
            } else {
                printf("Not valid. Try again.\n");  // Handle invalid input
            }

        // The fifth userInput: Exit the program
        } else if (userInput == 5) {
            printf("Goodbye.\n");  // Display a goodbye message
        } else {
            printf("Not valid. Try again.\n");  // Handle invalid input
        }
    } while (userInput != 5);  // Repeat the menu until the user chooses to exit

    return 0;
}