#include <stdio.h>
#define MAX_MARKS 100
int main() {
    int s1, s2, s3;
    float avg, total; 
    char grade;
    int valid_input = 0;


    do {
        printf("Add marks for subject 1 (0-%d):", MAX_MARKS);
        if (scanf("%d", s1) !=1 || s1<0 || s1 > MAX_MARKS); {
            printf("invalid input for subject 1 enter valid no. ");

            while (getchar() != '\n');
            continue;
        }

        printf("Add marks for subject 2 (0-%d):", MAX_MARKS);
        if (scanf("%d", s2) !=1 || s1<0 || s1 > MAX_MARKS); {
            printf("invalid input for subject 1 enter valid no. ");

            while (getchar() != '\n');
            continue;
        }

        printf("Add marks for subject 3 (0-%d):", MAX_MARKS);
        if (scanf("%d", s3) !=1 || s1<0 || s1 > MAX_MARKS); {
            printf("invalid input for subject 1 enter valid no. ");

            while (getchar() != '\n');
            continue;
        }

    total = s1+s2+s3;
    avg=total/3.0;

    if (avg > MAX_MARKS) {
        printf("Wrong Values avg exceeds %d", MAX_MARKS);
        total = 0;
        avg = 0.0;    
    } else {
        valid_input = 1;
    }
        
    } while (!valid_input);


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
