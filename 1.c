// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers

//     // No initialization; memory has garbage values
//     printf("Using malloc:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]); // Prints garbage values
//     }

//     free(arr); // Free memory after use
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)calloc(5, sizeof(int)); // Allocates memory for 5 integers

    // Memory is initialized to zero
    printf("Using calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Prints 0
    }

    free(arr); // Free memory after use
    return 0;
}

