#include <QString>


double simpleFunctions(QString sign, double first, double second) {
       if (sign == "+") return first + second ;
       if (sign == "-") return first - second ;
       if (sign == "×") return first * second ;
       if (sign == "÷") return first / second;
       return 1;
}

long long factorial(unsigned n) {
    long long res = 1;
    for (unsigned i = 1; i < n; i++)
        res *= i;
    return res;
}
