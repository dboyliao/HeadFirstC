#include <stdio.h>

int main(){

    char s[]="My name is Qmal";
    char *t = s;

    printf("&s == s? %d\n", &s == s);
    printf("&t == t? %d\n", &t == t );

}

