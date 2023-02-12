/*
Binarne poszukiwanie. Implemenetacja iteracja. Implementacja rekurencja.
*/
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int binarySearch(int *array, int length, int r, int key) {
  while (length < r) {
    int midIndex = length + (r - length) / 2;

    if (array[midIndex] == key) {
      return midIndex;
    } else if (key > array[midIndex]) {
      length = midIndex + 1;
    } else {
      r = midIndex - 1;
    }
  }

  return -1;
}

int binarySearchRecursion(int arr[], int length, int r, int key) {
  if (r >= length) {
    int mid = length + (r - length) / 2;
    if (arr[mid] == key)
      return mid;
    if (arr[mid] > key)
      return binarySearchRecursion(arr, length, mid - 1, key);
    return binarySearchRecursion(arr, mid + 1, r, key);
  }
  return -1;
}

int main() {

  int start = 0, end = MAX_LINE_LENGTH;
  int key = 70405; 

  FILE *fptr;
  int number, i = 0, arr[MAX_LINE_LENGTH];

  fptr =
      fopen("Dane.dat", "r");

  if (fptr != NULL) {
    printf("File opened successfully!\n");
  } else {
    printf("Failed to read the file.\n");
    return -1;
  }

  while (fscanf(fptr, "%d", &number) == 1) {
    arr[i] = number;
    i++;
  }
  fclose(fptr);

  printf("Indeks tej liczby jest: %d\n",
         binarySearch(arr, 0, MAX_LINE_LENGTH, key));

  printf("Indeks tej liczby jest: %d\n",
         binarySearchRecursion(arr, 0, MAX_LINE_LENGTH - 1, key));

  return 0;
}
