#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include "Calculator.h" 

class AdvancedCalculatorApp {
private:
    AdvancedCalculator calc;
    std::map<std::string, std::function<double(double, double)>> operations;

    void initOperations() {
        operations["add"] = [this](double a, double b) { return calc.calculate("add", a, b); };
        operations["subtract"] = [this](double a, double b) { return calc.calculate("subtract", a, b); };
        operations["multiply"] = [this](double a, double b) { return calc.calculate("multiply", a, b); };
        operations["divide"] = [this](double a, double b) { return calc.calculate("divide", a, b); };
        operations["power"] = [this](double a, double b) { return calc.calculate("power", a, b); };
        operations["sqrt"] = [this](double a, double) { return calc.calculate("sqrt", a, 0); }; 
    }

    void displayMenu() {
        std::cout << "Available operations:\n";
        for (const auto& op : operations) {
            std::cout << op.first << '\n';
        }
    }

    std::string getOperation() {
        std::string operation;
        std::cout << "Enter operation: ";
        std::cin >> operation;
        return operation;
    }

    double getNumber(const std::string& prompt) {
        double num;
        std::cout << prompt;
        std::cin >> num;
        return num;
    }

public:
    AdvancedCalculatorApp() {
        initOperations();
    }

    void run() {
        std::string operation;
        double num1, num2;

        displayMenu();
        operation = getOperation();

        num1 = getNumber("Enter first number: ");

        if (operation != "sqrt") {
            num2 = getNumber("Enter second number: ");
        } else {
            num2 = 0; 
        }

        try {
            if (operations.find(operation) != operations.end()) {
                double result = operations[operation](num1, num2);
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cerr << "Invalid operation" << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
};

int main() {
    AdvancedCalculatorApp app;
    app.run();
    return 0;
}