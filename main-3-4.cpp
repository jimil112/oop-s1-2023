#include <iostream>

extern void print_pass_fail(char grade);

int main() {
    char grade;

    grade = 'A';
    print_pass_fail(grade); 

    grade = 'D';
    print_pass_fail(grade); 

    grade = 'S';
    print_pass_fail(grade); 

    return 0;
}
