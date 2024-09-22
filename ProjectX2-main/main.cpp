#include "src/calculator.h"

int main() {
    //Sums
    
    //TESTING
    
    
    calculator(1.4, '+', -1);
    calculator(-4.4, '+', -2);
    calculator(-4.4565, '+', 2);
    calculator(1.1, '+', 0);
    calculator(-1.3, '+', 0);
    calculator(0.7, '+', 0);

    //Substract
    calculator(1.654, '-', -1);
    calculator(-4.241, '-', -2);
    calculator(-4.7653, '-', 2);
    calculator(1, '-', 0.1341);
    calculator(-1, '-', 0.12341);
    calculator(0, '-', 0.1341);
    
    //Multiply
    calculator(1, '*', -1);
    calculator(-4, '*', -2);
    calculator(-4, '*', 2);
    calculator(1, '*', 0);
    calculator(-1, '*', 0);
    calculator(0, '*', 0);
    
    //Division
    calculator(1.1, '/', -1.5);
    calculator(-4.342, '/', -2.3);
    calculator(-4, '/', 2.4);
    calculator(1, '/', 0);
    calculator(-1, '/', 0);
    calculator(0, '/', 0);
    
    //misc
    calculator(1, '++', -1);
    calculator(-4, '--', -2);
    calculator(-4, 'a', 2);
    calculator(1, '?', 0);
    calculator(-1, '%', 0);
    calculator(0, '#', 0);
    
    calculator('a', '+', -1);
    calculator(-4, '-', 'b');
    calculator(-4, 'a', 2);
    calculator('a', '?', 'b');

    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now
    return 0;
}
