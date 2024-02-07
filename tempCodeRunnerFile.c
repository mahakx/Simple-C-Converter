#include <stdio.h>

// Function to get user input
int getUserInput() {
    int inputNum;
    printf("Please enter a value (1-999, 0 to quit): ");
    scanf("%d", &inputNum);
    return inputNum;
}

// Function to print the English word representation for a two-digit inputNum
void printTwoDigitWords(int inputNum) {
    const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int oneDigit = inputNum % 10;
    int tenDigit = inputNum / 10;
    
    if (oneDigit == 0) {
        printf("%s\n", tens[tenDigit]);
    } else {
        printf("%s-%s\n", tens[tenDigit], ones[oneDigit]);
    }
}

// Function to convert and print the English word representation for a inputNum
void convertToWords(int inputNum) {
    const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (inputNum < 10) {
        printf("%s\n", ones[inputNum]);
    } else if (inputNum < 100) {
        printTwoDigitWords(inputNum);
    } else {
        int oneDigit = inputNum % 10;
        int tenDigit = (inputNum / 10) % 10;
        int hundredDigit = inputNum / 100;
        printf("%s hundred", ones[hundredDigit]);
        if (tenDigit != 0 || oneDigit != 0) {
            printf(" and ");
            if (tenDigit < 2) {
                printf("%s", ones[tenDigit * 10 + oneDigit]);
            } else {
                printTwoDigitWords(inputNum % 100);
            }
        }
        printf("\n");
    }
}

int main() {
    printf("Welcome to the Number Converter Program!\n");

    while (1) {
        int inputNum = getUserInput();

        if (inputNum == 0) {
            printf("Goodbye.\n");
            break;
        }

        if (inputNum < 1 || inputNum > 999) {
            printf("Invalid input. Please enter a value between 1 and 999.\n");
        } else {
            convertToWords(inputNum);
        }
    }

    return 0;
}