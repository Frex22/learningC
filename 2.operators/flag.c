#include<stdio.h>

#define FLAG_A (1 << 0)
#define FLAG_B (1 << 1)
#define FLAG_C (1 << 2)

void set_flag(int *flags, int flag){
    *flags |= flag;   
}

void clear_flag(int *flags, int flag){
    *flags &=~flag;
}


void toggle_flag(int *flags, int flag) {
    *flags ^= flag;
}

int is_flag_set(int flags, int flag) {
    return (flags & flag) ? 1:0;
}

int main () {
    int flags = 0;

    set_flag(&flags, FLAG_A);
    set_flag(&flags, FLAG_C);
    printf("value after setting flag a and c is %d\n", flags);

    printf("FLAG_A is %s\n", is_flag_set(flags, FLAG_A) ? "set" : "not set");
    printf("FLAG_B is %s\n", is_flag_set(flags, FLAG_B) ? "set" : "not set");
    printf("FLAG_C is %s\n", is_flag_set(flags, FLAG_C) ? "set" : "not set");

    printf("\nFlags after toggling FLAG_B: %d\n", flags);
    printf("Flags after clearing FLAG_A: %d\n", flags);

    printf("FLAG_A is %s\n", is_flag_set(flags, FLAG_A) ? "set" : "not set");
    printf("FLAG_B is %s\n", is_flag_set(flags, FLAG_B) ? "set" : "not set");
    printf("FLAG_C is %s\n", is_flag_set(flags, FLAG_C) ? "set" : "not set");

    return 0;

} 
