//Reverse the array

#include<stdio.h>
#define MAX 100

int rev_arr();
int disp_arr();

int main(){
    int n;
    int a[MAX];

    scanf("%d",&n);
    printf("\n");
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nReverse of array\n");

    //logic 1 - print the array in reverse 
    // for(int i=n-1; i>=0; i--){
    //     printf("%d \n", a[i]);
    // }

    //logic 2 - create a new array and store in it
    // int rev_a[MAX];
    // int var=0;
    
    // for(int i=n-1; i>=0; i--){
    //     rev_a[var]=a[i];
    //     var++;
    // }
    // disp_arr(rev_a,n);
    
    
    //logic 3 - iteration
    int start=0;
    int end= n-1;

    while(start<end){
        int temp= a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    disp_arr(a,n);

    // //logic 4 - recursion
    // rev_arr(a,start, end);
    // disp_arr(a,n);

    return 0;
}

int rev_arr(int a[], int start, int end){

    if(start>end){
        return 0;
    }
    else{
        int temp= a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
        rev_arr(a,start,end);
    }
    
    return 0;
}

int disp_arr(int a[], int n){
    for(int i =0; i<n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}