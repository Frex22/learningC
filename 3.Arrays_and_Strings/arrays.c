#include<stdio.h>
int main () {
    int i, sum=0;
    int a[20] = {3,5,21,45,12,345,12,53,15,5,12,5,41,5345,1,9,3,2,5,234};
    for (i=0; i<20; i++) {
        sum = sum + a[i];
    }


printf("sum is %d\n", sum);

}
