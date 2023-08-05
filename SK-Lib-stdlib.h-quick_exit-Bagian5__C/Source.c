#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void f1(void) {
    puts("pushed first");
    fflush(stdout);
}

void f2(void) {
    puts("pushed second");
}

void f3(void) {
    puts("won't be called");
}

int main(void) {
    at_quick_exit(f1);
    at_quick_exit(f2);
    atexit(f3);
    quick_exit(0);

    _getch();
    return 0;
}