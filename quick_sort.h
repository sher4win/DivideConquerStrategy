//quick sort header file

/*
#ifndef QUICK_SORT_H
#define QUICK_SORT_H

//initialize function for quick sort algorithm
void quickSort(int arr[], int left, int right);

//initialization of function
void readInputFile(const char* filename, int arr[], int* size);

//initialization of function
void writeOutputFile(const char* filename, int arr[], int size);

#endif // QUICK_SORT_H
*/

#ifndef QUICKSORT_H
#define QUICKSORT_H

void quicksort(int arr[], char words[][100], int low, int high);
int partition(int arr[], char words[][100], int low, int high);
void swap(int* a, int* b);
void readCSV(const char* filename, int keys[], char words[][100], int* numEntries);
void writeCSV(const char* filename, int keys[], char words[][100], int numEntries);

#endif // QUICKSORT_H

