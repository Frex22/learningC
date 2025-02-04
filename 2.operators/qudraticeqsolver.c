#include<stdio.h>
#include<math.h>
int main(){
    int rem, i, decimal;
    long long num;
    printf("Enter the number");
    scanf("%lld", &num);

    long long temp = num;
    while(temp!=0){
        rem=temp%10;
        if (rem !=0 && rem !=1){
            printf("invalid Num");
            return 1;
        }
            temp = temp/10;

    }
    
    temp = num;

    while(temp!=0){
        rem = temp % 10;
        decimal += rem << i;
        i++;
        temp /= 10;
    }

    printf("decimal equivalent is %d\n", decimal);

    return 0;

}