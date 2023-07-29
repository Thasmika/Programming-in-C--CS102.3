(1)
#include <stdio.h>
int main() {
int array[10];
int i;
int minValue, maxValue, sum = 0;
double average;
printf("Enter 10 integer values:\n");
for (i = 0; i < 10; i++) {
printf("Value %d: ", i + 1);
scanf("%d", &array[i]);
}
minValue = array[0];
maxValue = array[0];
for (i = 1; i < 10; i++) {
if (array[i] < minValue)
minValue = array[i];
if (array[i] > maxValue)
maxValue = array[i];
}
for (i = 0; i < 10; i++) {
sum += array[i];
}
average = (double)sum / 10;
printf("\nMinimum value: %d\n", minValue);
printf("Maximum value: %d\n", maxValue);
printf("Average value: %.2f\n", average);
printf("\nValues in reverse order:\n");
for (i = 9; i >= 0; i--) {
printf("%d ", array[i]);
}
return 0;
}


(02)
#include <stdio.h>
void scalarSum(int arr1[], int arr2[], int size);
void vectorSum(int arr1[], int arr2[], int size);
void vectorProduct(int arr1[], int arr2[], int size);
void scalarProduct(int arr1[], int arr2[], int size);
int main() {
int size;
printf("Enter the size of the arrays: ");
scanf("%d", &size);
int arr1[size], arr2[size];
printf("Enter the elements of array 1: ");
for (int i = 0; i < size; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter the elements of array 2: ");
for (int i = 0; i < size; i++) {
scanf("%d", &arr2[i]);
}
printf("Scalar Sum: ");
scalarSum(arr1, arr2, size);
printf("Vector Sum: ");
vectorSum(arr1, arr2, size);
printf("Vector Product: ");
vectorProduct(arr1, arr2, size);
printf("Scalar Product: ");
scalarProduct(arr1, arr2, size);
return 0;
}
void scalarSum(int arr1[], int arr2[], int size) {
for (int i = 0; i < size; i++) {
printf("%d ", arr1[i] + arr2[i]);
}
printf("\n");
}
void vectorSum(int arr1[], int arr2[], int size) {
int sum[size];
for (int i = 0; i < size; i++) {
sum[i] = arr1[i] + arr2[i];
printf("%d ", sum[i]);
}
printf("\n");
}
void vectorProduct(int arr1[], int arr2[], int size) {
int product[size];
for (int i = 0; i < size; i++) {
product[i] = arr1[i] * arr2[i];
printf("%d ", product[i]);
}
printf("\n");
}
void scalarProduct(int arr1[], int arr2[], int size) {
int result = 0;
for (int i = 0; i < size; i++) {
result += arr1[i] * arr2[i];
}
printf("%d\n", result);
}

