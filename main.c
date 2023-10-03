//quick sort main.c
#include <stdio.h>
#include <stdlib.h>
#include "quick_sort.h"

int main() {
    const char* inputFile = "input.csv"; // Change to your input file name
    const char* outputFile = "output.csv"; // Change to your output file name

    int arr[1000]; // Adjust the size based on your input file
    int size;

    readInputFile(inputFile, arr, &size);
    quickSort(arr, 0, size - 1);
    writeOutputFile(outputFile, arr, size);

    printf("Sorting complete. Output written to %s\n", outputFile);

    return 0;
}
