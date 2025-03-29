#include <stdio.h>
  
int main() { 
    int num,                              

    // Input a number
    printf("Enter a number: ")
    scanf("%d", &num);

    int c = num;  Store original number for reversal

    // Calculate sum of digits and reverse the number
    while (c > 0) 
        digit = c % 10; // Extract last digit
        sum += digit;       // Add to sum
        reverse = reverse * 10 + digit; // Build reversed number
        c /= 10;         // Remove last digit
    }

    // Display results
    printf(Sum of digits: %d\n", sum);
    prinf("Reversed number: %d\n", reverse);

    retun 0;
}
