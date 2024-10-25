#include <iostream>
#include <cmath>

class Calculator {
private:
    double result;

public:
    Calculator() : result(0) {}

    void add(double num) {
        result += num;
    }

    void subtract(double num) {
        result -= num;
    }

    void multiply(double num) {
        result *= num;
    }

    void divide(double num) {
        if (num != 0) {
            result /= num;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    }

    void power(double exponent) {
        result = std::pow(result, exponent);
    }

    void clear() {
        result = 0;
    }

    double getResult() const {
        return result;
    }
};

int main() {
    Calculator calc;
    
    calc.add(5);
    calc.multiply(3);
    calc.subtract(2);
    calc.divide(2);
    calc.power(2);

    std::cout << "Result: " << calc.getResult() << std::endl;

    return 0;
}
