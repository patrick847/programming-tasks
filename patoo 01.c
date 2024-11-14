#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10 // Define constant MAX to specify the array size

int a[MAX]; // Global array of integers

// Function to generate random numbers
int rand_custom(void) {
    static int rand_seed = 10;
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

// Bubble sort function
void bubble_sort() {
    int x, y, temp;
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                temp = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temp;
            }
        }
    }
}

int main(void) {
    int i;
    srand(time(0)); // Initialize random number seed based on system time

    // Fill array with random values and print them
    for (i = 0; i < MAX; i++) {
        a[i] = rand() % 100; // Generate random number between 0 and 99
        printf("%d\n", a[i]);
    }

    // Sort the array using bubble sort
    bubble_sort();

    // Print sorted array
    printf("Sorted array:\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
