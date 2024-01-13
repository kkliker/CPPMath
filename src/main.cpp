//
// Created by sheep on 13.01.24.
//

#include "iostream"
#include "CPPMath.h"
#include "any"


using namespace std;

int main() {

    int fact = CPPMath::factorial(5);
    cout << fact << endl;

    int rfact = CPPMath::reverseFactorial(6);
    cout << rfact << endl;


    std::vector<double> vec;

    vec.reserve(50);
    for (int i = 0; i < 50; ++i) {
        vec.push_back(i);
    }

    cout << CPPMath::max(vec);

    return 0;
}

