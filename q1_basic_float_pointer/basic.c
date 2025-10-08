/*
 * Day 3 Exercise 1: Basic Pointer Operations with Float
 *
 * Implement the pointer operations as described in the tutorial Step 1.
 * Create a program that:
 * 1. Declares a float variable temp = 25.5f
 * 2. Creates a pointer to it
 * 3. Prints the original value and address
 * 4. Changes the value via the pointer to 30.0f
 * 5. Prints the new value
 *
 * Compile: gcc -Wall -std=c99 -o basic basic.c
 * Run: ./basic
 * Expected output matches the tutorial.
 */

#include <stdio.h>

int calculate_double(int *num) {
    return (*num)*2;
}

int main() {
    // TODO: Implement the exercise here
    // Hint: Remember to use & for addresses and * for dereferencing. Declare a float, point to it, print value and address, modify via pointer, print again.

    // Placeholder - replace with your implementation
    float temp = 25.5;
    float *p = &temp;
    printf("Value of temp: %.1ff\n", temp);
    printf("Address of temp: %p\n", (void*)&temp); 
    *p = 30.0;
    printf("New value of temp: %.1ff\n",temp);
    
    int val = 5;
    int result = calculate_double(&val);
    printf("Double of %d is %d\n", val, result);
<<<<<<< HEAD
    
    if(temp == 30.0f) {
    	printf("Correct implementation! ✓\n");
    }
 
=======
>>>>>>> 49422f69f6758797defe5e05d6437e53d3c30bf1

    if(temp == 30.0f) {
    printf("Correct implementation! ✓\n");
    }
 
    return 0;
}

