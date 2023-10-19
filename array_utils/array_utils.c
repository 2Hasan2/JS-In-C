#include "array_utils.h"
#include <stdlib.h>

void push(int **arr, int element, int *size) {
    // Check if the array is full and needs to be resized
    if (*size == 0) {
        *arr = (int *)malloc(sizeof(int));
        if (*arr == NULL) {
            // Handle memory allocation error
            return;
        }
    } else {
        int *new_arr = (int *)realloc(*arr, (*size + 1) * sizeof(int));
        if (new_arr == NULL) {
            // Handle memory allocation error
            return;
        }
        *arr = new_arr;
    }

    // Add the element to the end of the array
    (*arr)[(*size)++] = element;
}


int pop(int *arr, int *size) {
    if (*size == 0) {
        // Handle underflow error (array is empty)
        return 0; // You can choose a different error code if needed
    }

    int popped_element = arr[--(*size)];

    if (*size == 0) {
        // If the array is empty after the pop, free the memory
        free(arr);
        arr = NULL;
    } else {
        int *new_arr = (int *)realloc(arr, (*size) * sizeof(int));
        if (new_arr == NULL) {
            // Handle memory allocation error
            return 0; // You can choose a different error code if needed
        }
        arr = new_arr;
    }

    return popped_element;
}

