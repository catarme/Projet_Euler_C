//
// Created by catarme on 03/09/2021.
//

#include <stdio.h>

int main() {
    int result = 1;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    printf("%i\n", result);
}