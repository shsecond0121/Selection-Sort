#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max_size 100
void showArrayStatus(int *arr, int n){
  int i;
  for(i=0; i<n; ++i){
    printf("%d",arr[i]);
  }printf("/n");
}
void swap(int *t1, int *t2){
  int temp =*t1;
  *t1 = *t2;
  *t2 = temp;
}
void selectionSort(int *arr, int n){
  clock_t startp, endp;
  int i, j;
  startp = clock();
  for(i=0;i<n;++i){
    int minVal =arr[i], minIdx =i;
    for(j=i+1;j<n;++j){
      if(minVal > arr[j]){
        minVal =arr[j];
        minIdx =j;
      }
    }

    if(i !=minIdx){
      swap(&arr[i], &arr[minIdx]);
    }
  }
  endp =clock();
  printf("during time: %lf(ms)\n",(double)(endp-startp));
}

int main(void){
  int arr[max_size] = {0,}, n, i;
  scanf("%d",&n);

  for(i=0; i<n; ++i){
    scanf("%d",&arr[i]);
  }
  selectionSort(arr,n);
  showArrayStatus(arr,n);
  return 0;
}
