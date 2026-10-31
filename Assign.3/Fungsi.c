#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b); //Pass by Reference
int maks(int a, int b);     //Pass by Value

int factorial(int n);
void vector_add(int *x, int *y, int *z, int n);

int main(){
    int a = 4;
    int b = 6;

    printf("Nilai maks antara %d dan %d adalah %d\n",a ,b, maks(a, b));
    
    tukar(&a, &b);
    printf("Nilai bila ditukar yaitu a = %d, b = %d\n", a, b);
    printf("Faktorial dari %d = %d\n", a, factorial(a));

    int n = 5;
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {10, 20, 30, 40, 50};
    int z[n];
    
    vector_add(x, y, z, n);     //In the case of an array, the variable is already the adress itself
    
    for(int i = 0; i < n; i++){
        printf("%d \n", x[i]);
        printf("%d \n", y[i]);
    
        printf("%d \n\n", z[i]);
    }

 
    return 0;
}
int maks(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }

}
void tukar(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;    

}

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

void vector_add(int *x, int *y, int *z, int n){
    for(int i = 0; i < n; i++){
        z[i] = x[i] + y[i];
    }
}