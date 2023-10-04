//quick sort main.c

/*
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
*/

#include <stdio.h>
#include "quick_sort.h"

int main() {
    const char* inputFilename = "inputQS.csv";
    const char* outputFilename = "outputQS.csv";
    int keys[100]; // Assuming a maximum of 100 entries
    char words[100][100]; // Assuming a maximum of 100 entries
    int numEntries;

    readCSV(inputFilename, keys, words, &numEntries);

    quicksort(keys, words, 0, numEntries - 1);

    writeCSV(outputFilename, keys, words, numEntries);

    printf("CSV file sorted and saved as %s\n", outputFilename);

    return 0;
}

