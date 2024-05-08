#include <stdio.h>

int main(){
    FILE*p = fopen("exemplo.dat", "a");

    fclose(p);
return 0;
}
