#include <iostream>
using namespace std;

void swap(int *xp, int*yp){
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[],int n){
  int i,j,min_idx;
  for(i = 0; i<n-1; i++){
    min_idx = i;
       for (j = i+1; j < n; j++)
         if (arr[j] < arr[min_idx])
           min_idx = j; 
  }
}

int main(){


  return 0;
}
