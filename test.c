#include <stdio.h>
#include <stdbool.h>
// biblioteka aby użyć funkcji potęgowania - pow() (opcjonalnie)
#include <math.h> 

int suma(int a, int b){
    int suma = a + b;
    printf("twój wynik: %d\n", suma);
    return suma;
}


int main() {
    
    int x = -90;
    int y = 4;
    int wynik = suma(x,y);
    

    return 0;
}