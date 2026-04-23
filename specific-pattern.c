#include <stdio.h>

int main() {
    int rows = 4;  // Fixed for the pattern shown

    printf("Printing the specific star pattern:\\n");

    for(int i = 1; i <= rows; i++) {
        // Print spaces for right alignment (decreasing)
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print odd stars: 1,3,5,7
        for(int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\\n");
    }

    return 0;
}

// Compile: gcc specific-pattern.c -o specific-pattern
// Run: ./specific-pattern.exe (Windows)

// Output:
//    *
//   ***
//  *****
// *******
