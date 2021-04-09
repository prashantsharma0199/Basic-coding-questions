// Find the maximum and minimum element in an array

#include<stdio.h>
#define MAX 100

int get_max();
int get_min();
int max_n_min();

int main(){
    int n;
    scanf("%d",&n);
    printf("\n");

    int a[MAX];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // logic-1 simple linear search
    int max=get_max(a, n);
    int min=get_min(a, n);
    printf("Max is: %d and Min is: %d\n", max, min);

    // logic-2 sorting algorithm
    max_n_min(a,n);

    return 0;
}

int max_n_min(int a[], int n){
   for (int i = 0; i < n-1; i++){
       for (int j = 0; j < n-i-1; j++){
           if (a[j] > a[j+1]){
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   printf("Max is: %d and Min is: %d\n", a[n-1], a[0]);
   return 0;
}

int get_max(int a[], int n){
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int get_min(int a[], int n){
    int min= a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}