//
// Created by catarme on 03/09/2021.
//

#include <stdio.h>

int main(){
    long int n = 600851475143;
    int i = 2;
    while ((i*i) < n){
        while ((n % i) == 0){
            n /= 1;
        }
        i++;
    }
    printf("%li", n);
}
