#include <QString>
#include <cmath>


double simpleFunctions(QString sign, double first, double second) {
       if (sign == "+") return first + second ;
       if (sign == "-") return first - second ;
       if (sign == "×") return first * second ;
       if (sign == "÷") return first / second;
       return 1;
}

unsigned long long factorial(unsigned n) {
    unsigned long long res = 1;
    for (unsigned i = 1; i < n; i++)
        res *= i;
    return res;
}

double normalRound(double num, unsigned k = 5) {
    return round(num * pow(10, k)) / pow(10, k);
}
