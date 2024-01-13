//
// Created by sheep on 13.01.24.
//

#include "CPPMath.h"

int CPPMath::factorial(int a) {
    int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }
    return factorial;
}

int CPPMath::reverseFactorial(int a) {

    int mul = 1;
    while(mul != a){

        if(a % mul != 0) return -1;
        a /= mul;
        mul += 1;
    }
    return mul;

}

double CPPMath::max(const std::vector<double> &vector) {
    if(vector.empty()) return -1;

    double max = vector[0];
    for (double d: vector) {
        if(max < d) max = d;

    }
    return max;
}



