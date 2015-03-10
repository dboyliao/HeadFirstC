#include "fish.h"
#include <stdio.h>

void catalog(struct fish f){
    printf("%s is a %s with %i teeth. He is %i\n", 
            f.name, f.species, f.teeth, f.age);
}

void label(struct fish f){
    printf("Name: %s\nSpecies:%s\n%i years old, %i teeth",
            f.name, f.species, f.teeth, f.age);
}

int main(){
    struct fish snappy = {"Snappy", "Piranha", 69, 5};
    catalog(snappy);
    label(snappy);

    return 0;
}

