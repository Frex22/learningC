#include<stdio.h>
int sum(int arr[], int n){
    if (n <= 0){
        return 0;
    }
    return arr[n-1] + sum(arr, n-1);

}

int main (){
    int n;
    printf("enter the length of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array of %d elements\n", n);
    
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
int total = sum(arr, n);
printf("The sum is %d", total);
}
