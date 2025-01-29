#include <stdio.h>
int main() {
    int s1, s2, s3;
    float avg, total; 
    char grade;
    printf("Add marks for subject 1\n");
    scanf("%d", &s1);
    printf("Add marks for subject 2\n");
    scanf("%d", &s2);
    printf("Add marks for subject \n");
    scanf("%d", &s3);
    total = s1+s2+s3;
    avg = (total/3);

    if (avg > 100){
        printf(" Wrong values please try again");

    }

    if (avg >= 90) {
        grade = 'A';
    }
    else if (avg >=80){
        grade = 'B';
    }
    else if (avg >=60){
        grade = 'C';
    }
    else if (avg >=50){
        grade = 'D';
    }
    else if (avg >=40){
        grade = 'E';
    }
    else {
        grade = 'F';
    }

    printf ("\n average is %.4f\n", avg);
    printf("Grade:%c\n", grade);

    return 0;
}
