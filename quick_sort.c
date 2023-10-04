//quick sort source file

/*
#include "quick_sort.h"
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return (i + 1);
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

void readInputFile(const char* filename, int arr[], int* size) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening input file");
        exit(1);
    }

    int i = 0;
    while (fscanf(file, "%d", &arr[i]) != EOF) {
        i++;
    }

    *size = i;
    fclose(file);
}

void writeOutputFile(const char* filename, int arr[], int size) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening output file");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\n", arr[i]);
    }

    fclose(file);
}
*/

#include "quick_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quicksort(int arr[], char words[][100], int low, int high) {
    if (low < high) {
        int pi = partition(arr, words, low, high);
        quicksort(arr, words, low, pi - 1);
        quicksort(arr, words, pi + 1, high);
    }
}

int partition(int arr[], char words[][100], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
            // Swap corresponding words
            char temp[100];
            strcpy(temp, words[i]);
            strcpy(words[i], words[j]);
            strcpy(words[j], temp);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    // Swap corresponding words
    char temp[100];
    strcpy(temp, words[i + 1]);
    strcpy(words[i + 1], words[high]);
    strcpy(words[high], temp);
    return (i + 1);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void readCSV(const char* filename, int keys[], char words[][100], int* numEntries) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    int i = 0;
    while (fscanf(file, "%d %[^\n]s", &keys[i], words[i]) != EOF) {
        i++;
    }

    *numEntries = i;
    fclose(file);
}

void writeCSV(const char* filename, int keys[], char words[][100], int numEntries) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    for (int i = 0; i < numEntries; i++) {
        fprintf(file, "%d %s\n", keys[i], words[i]);
    }

    fclose(file);
}
