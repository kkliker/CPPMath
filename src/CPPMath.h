//
// Created by sheep on 13.01.24.
//

#include <vector>
#include "iostream"

#ifndef CPPMATH_CPPMATH_H
#define CPPMATH_CPPMATH_H

class CPPMath {

    /**
     * a - number, which factorial we need to know
     *
     * return - the number's factorial
     */
    public: static int factorial(int a);

    /**
     * a - factorial of any number;
     *
     * return - the number, which factiorial is equals "a" if its exists else return -1.
     */
    public: static int reverseFactorial(int a);


    /**
     * vector - a const link to vector that we need
     *
     * return max value of a vector
     */

    public: static double max(const std::vector<double>& vector);


};


#endif //CPPMATH_CPPMATH_H
