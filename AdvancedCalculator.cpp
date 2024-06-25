#include "Calculator.h"
#include <cmath>
#include <stdexcept>

AdvancedCalculator::AdvancedCalculator() {
    initializeOperations();
}

void AdvancedCalculator::initializeOperations() {
    operations["add"] = [](double a, double b) { return a + b; };
    operations["subtract"] = [](double a, double b) { return a - b; };
    operations["multiply"] = [](double a, double b) { return a * b; };
    operations["divide"] = [](double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return a / b;
    };
    operations["power"] = [](double a, double b) { return std::pow(a, b); };
    operations["sqrt"] = [](double a, double) { return std::sqrt(a); };
}

double AdvancedCalculator::calculate(const std::string& operation, double a, double b) {
    if (operations.find(operation) == operations.end()) {
        throw std::invalid_argument("Unsupported operation");
    }
    return operations[operation](a, b);
}
