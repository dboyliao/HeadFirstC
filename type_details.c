#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    char range_msg_i[]="The value of %s is %i.\n";
    char range_msg_f[] = "The value of %s is %f\n";
    char size_msg[]="An %s takes %zu bytes.\n";

    printf(range_msg_i, "INT_MAX", INT_MAX);
    printf(range_msg_i, "INT_MIN", INT_MIN);
    printf(size_msg, "int", sizeof(int));
    printf("\n");

    printf(range_msg_f, "FLT_MAX", FLT_MAX);
    printf(range_msg_f, "FLT_MIN", FLT_MIN);
    printf(size_msg, "float", sizeof(float));
    printf("\n");

    printf(range_msg_i, "CHAR_MAX", CHAR_MAX);
    printf(range_msg_i, "CHAR_MIN", CHAR_MIN);
    printf(size_msg, "char", sizeof(char));
    printf("\n");

    printf(range_msg_f, "DBL_MAX", DBL_MAX);
    printf(range_msg_f, "DBL_MIN", DBL_MIN);
    printf(size_msg, "double", sizeof(double));
    printf("\n");

    printf(range_msg_i, "SHRT_MAX", SHRT_MAX);
    printf(range_msg_i, "SHRT_MIN", SHRT_MIN);
    printf(size_msg, "short", sizeof(short));
    printf("\n");

    printf("The value of %s is %li.\n", "LONG_MAX", LONG_MAX);
    printf("The value of %s is %li.\n", "LONG_MIN", LONG_MIN);
    printf(size_msg, "long", sizeof(long));
    printf("\n");
    
    return 0;
}

