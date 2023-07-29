(1)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  int min = arr[0];


  for (int i = 1; i < 10; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }


  printf("The minimum value in the array is: %d\n", min);

    return 0;
}


(2)
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  int max = arr[0];


  for (int i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }


  printf("The maximum value in the array is: %d\n", max);

    return 0;
}

(3)
#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  int sum = 0;


  for (int i = 0; i < 10; i++) {
    sum += arr[i];
  }


  float average = sum / 10.0;


  printf("The average value in the array is: %.2f\n", average);


    return 0;
}


(4)
#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  for (int i = 0, j = 9; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }


  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }


    return 0;
}
