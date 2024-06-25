#ifndef ADVANCEDCALCULATOR_H
#define ADVANCEDCALCULATOR_H

#include <string>
#include <map>
#include <functional>

class AdvancedCalculator {
public:
    AdvancedCalculator();

    double calculate(const std::string& operation, double a, double b = 0);

private:
    void initializeOperations();

    std::map<std::string, std::function<double(double, double)>> operations;
};

#endif 
