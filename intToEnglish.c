/*
Program Name: Succinct program to convert any integer
Author/Student Num: Maha Khan / 251312708
Purpose:  The program accepts integer inputs in the range 1-999, converts them to their English word representation, and provides a user-friendly interface
           with descriptive prompts and clear comments. It adheres to good programming practices and includes a comment block at the top for program details.
*/

#include <stdio.h>  // Include the standard input/output library

// Function to get user input
int getInput() {  // Define a function to get user input
    int num;  // Declare an integer variable 'num' to store user input
    printf("Please enter a value (1-999, 0 to quit): ");  // Display a prompt for user input
    scanf("%d", &num);  // Read and store the user's input
    return num;  // Return the input value
}

// Function to print the English word representation for a two-digit num
void printTwoDigit(int num) {  // Define a function to print the word for two-digit numbers
    const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int one = num % 10;  // Calculate the one's digit
    int ten = num / 10;  // Calculate the ten's digit
    
    if (one == 0) {  // If the one's digit is zero
        if (ten == 1) {
            printf("%s\n", teens[1]);  // Print the word for 'ten' or 'eleven' to 'nineteen'
        } else {
            printf("%s\n", tens[ten]);  // Print the word for 'twenty' to 'ninety'
        }
    } else {
        if (ten == 1) {
            printf("%s\n", teens[one]);  // Print the word for 'eleven' to 'nineteen'
        } else {
            printf("%s-%s\n", tens[ten], ones[one]);  // Print the combined word for 'twenty' to 'ninety' and 'one' to 'nine'
        }
    }
}

// Function to convert and print the English word representation for a num
void convertToWords(int num) {  // Define a function to convert and print the word representation
    const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num < 10) {
        printf("%s\n", ones[num]);  // Print the word for single-digit numbers
    } else if (num < 100) {
        printTwoDigit(num);  // Call the function to handle two-digit numbers
    } else {
        int one = num % 10;  // Calculate the one's digit
        int ten = (num / 10) % 10;  // Calculate the ten's digit
        int hundred = num / 100;  // Calculate the hundred's digit
        printf("%s hundred", ones[hundred]);  // Print the word for the hundred's place
        if (ten != 0 || one != 0) {
            printf(" and ");  // Print "and" if there are more digits
            if (ten < 2) {
                printf("%s", ones[ten * 10 + one]);  // Handle special cases
            } else {
                printTwoDigit(num % 100);  // Call the function to handle two-digit numbers
            }
        }
        printf("\n");  // Print a newline character
    }
}

int main() {
    printf("Number Converter Program\n");  // Display a welcome message

    while (1) {
        int num = getInput();  // Get user input and store it in 'num'

        if (num == 0) {
            printf("Goodbye.\n");  // Exit the program
            break;
        }

        if (num < 1 || num > 999) {
            printf("Invalid input. Please enter a value between 1 and 999.\n");  // Notify the user of invalid input
        } else {
            convertToWords(num);  // Call the function to convert and print the English word representation
        }
    }

    return 0;  // Exit the program
}
