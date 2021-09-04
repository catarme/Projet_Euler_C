//
// Created by catarme on 03/09/2021.
//

#include <stdio.h>

int main(){
    int i = 1;
    int o = 2;
    int p;
    int result;

    for (int j = 0; i+o < 4000000; j++) {
        p = i + o;
        i = o;
        o = p;
        if (p % 2 == 0){
            result += p;
        }
    }

    printf("%i\n", result);
}