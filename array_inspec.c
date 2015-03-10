#include <stdio.h>

int main(){
    int drinks[] = {4, 2, 3};
    printf("drinks: %2i\n", *drinks);
    printf("drinks[2]: %i\n", drinks[2]);
    printf("*(drinks+2): %i\n", *(drinks+2));
    printf("drinks:%p\n", drinks);
    printf("drinks+2:%p\n", drinks+2);
    return 0;
}

