#include <stdio.h> // standard input output

// Char -> 'a'    char     8bit
// Short -> shorter than int  16 bit
// Integer -> signed/unsigned  -16   int   -32,000,000 ish - 32,000,000 ish    32bit
// Long -> much larger (and smaller) possible values   64bit

// String -> "double quotes" == { 'd', 'o', 'u' ... }   arrays of chars

// Float -> 5.432423 -2.478235 (always signed)    float 99%

// Array<int> ->  no mixing types
// Can't change the length

int main() {
    //            0 1  2 3  4 5 <- indices
    int ages[] = {1,3,54,2,43,4}; // 6 long
    // Read from the array
    int bobsAge = ages[2]; // == 53
    // Change the array
    ages[0] = 7;
    printf("Hello world");
}