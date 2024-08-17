#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Base class
class ScientificCalculator {
public:
    virtual void performCalculation() = 0;
};

// Child class 1: SimpleFunctions use to perform simple calculations
class SimpleFunctions : public ScientificCalculator {   
public:
    void performCalculation() {
        int choice;
        int numValues;
        vector<double> values;
        double result;

        cout << "---------- Simple Functions ----------" << endl;
        cout << "Enter the number of values you want to perform calculations on: ";
        cin >> numValues;

        for (int i = 0; i < numValues; i++) {
            double value;
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values.push_back(value);
        }

        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Percentage\n";
        cout << "0. Back to main menu\n";
        cout << "Enter your choice (0-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < numValues; i++) {
                    result += values[i];
                }
                cout << "Result: " << result << endl;
                break;
            case 2:
                if (numValues > 1) {
                    result = values[0];
                    for (int i = 1; i < numValues; i++) {
                        result -= values[i];
                    }
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Insufficient values for subtraction!" << endl;
                }
                break;
            case 3:
                for (int i = 0; i < numValues; i++) {
                    result *= values[i];
                }
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (numValues > 1) {
                    result = values[0];
                    for (int i = 1; i < numValues; i++) {
                        if (values[i] != 0) {
                            result /= values[i];
                        } else {
                            cout << "Error: Division by zero!" << endl;
                            break;
                        }
                    }
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Insufficient values for division!" << endl;
                }
                break;
            case 5:
                if (numValues > 1) {
                    result = pow(values[0], values[1]);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Insufficient values for power operation!" << endl;
                }
                break;
            case 6:
                if (numValues > 1) {
                    result = (values[0] / 100) * values[1];
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Insufficient values for percentage calculation!" << endl;
                }
                break;
            case 0:
                cout << "Going back to the main menu..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }
};

// Child class 2: SquaresAndRoots use to perform trignomatic operations
class SquaresAndRoots : public ScientificCalculator {
public:
    void performCalculation() {
        int choice;
        int numValues;
        vector<double> values;
        double result;

        cout << "---------- Squares and Roots ----------" << endl;
        cout << "Enter the number of values you want to perform calculations on: ";
        cin >> numValues;

        for (int i = 0; i < numValues; i++) {
            double value;
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values.push_back(value);
        }

        cout << "1. Square\n";
        cout << "2. Cube\n";
        cout << "3. Square Root\n";
        cout << "4. Cube Root\n";
        cout << "0. Back to main menu\n";
        cout << "Enter your choice (0-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < numValues; i++) {
                    result = pow(values[i], 2);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 2:
                for (int i = 0; i < numValues; i++) {
                    result = pow(values[i], 3);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 3:
                for (int i = 0; i < numValues; i++) {
                    if (values[i] >= 0) {
                        result = sqrt(values[i]);
                        cout << "Result for " << values[i] << ": " << result << endl;
                    } else {
                        cout << "Error: Invalid input! Cannot calculate square root of a negative number." << endl;
                    }
                }
                break;
            case 4:
                for (int i = 0; i < numValues; i++) {
                    result = cbrt(values[i]);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 0:
                cout << "Going back to the main menu..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }
};

// Child class 3: TrigonometricFunctions
class TrigonometricFunctions : public ScientificCalculator {
public:
    void performCalculation() {
        int choice;
        int numValues;
        vector<double> values;
        double result;

        cout << "---------- Trigonometric Functions ----------" << endl;
        cout << "Enter the number of values you want to perform calculations on: ";
        cin >> numValues;

        for (int i = 0; i < numValues; i++) {
            double value;
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values.push_back(value);
        }

        cout << "1. Sine\n";
        cout << "2. Cosine\n";
        cout << "3. Tangent\n";
        cout << "4. Cotangent\n";
        cout << "5. Secant\n";
        cout << "6. Cosecant\n";
        cout << "0. Back to main menu\n";
        cout << "Enter your choice (0-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < numValues; i++) {
                    result = sin(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 2:
                for (int i = 0; i < numValues; i++) {
                    result = cos(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 3:
                for (int i = 0; i < numValues; i++) {
                    result = tan(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 4:
                for (int i = 0; i < numValues; i++) {
                    result = 1 / tan(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 5:
                for (int i = 0; i < numValues; i++) {
                    result = 1 / cos(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 6:
                for (int i = 0; i < numValues; i++) {
                    result = 1 / sin(values[i] * M_PI / 180);
                    cout << "Result for " << values[i] << ": " << result << endl;
                }
                break;
            case 0:
                cout << "Going back to the main menu..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }
};

// Child class 4: LogarithmicFunctions
class LogarithmicFunctions : public ScientificCalculator {
public:
    void performCalculation() {
        int choice;
        int numValues;
        vector<double> values;
        double result;

        cout << "---------- Logarithmic Functions ----------" << endl;
        cout << "Enter the number of values you want to perform calculations on: ";
        cin >> numValues;

        for (int i = 0; i < numValues; i++) {
            double value;
            cout << "Enter value " << i + 1 << ": ";
            cin >> value;
            values.push_back(value);
        }

        cout << "1. Natural Logarithm (base e)\n";
        cout << "2. Common Logarithm (base 10)\n";
        cout << "0. Back to main menu\n";
        cout << "Enter your choice (0-2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < numValues; i++) {
                    if (values[i] > 0) {
                        result = log(values[i]);
                        cout << "Result for " << values[i] << ": " << result << endl;
                    } else {
                        cout << "Error: Invalid input! Cannot calculate logarithm of a non-positive number." << endl;
                    }
                }
                break;
            case 2:
                for (int i = 0; i < numValues; i++) {
                    if (values[i] > 0) {
                        result = log10(values[i]);
                        cout << "Result for " << values[i] << ": " << result << endl;
                    } else {
                        cout << "Error: Invalid input! Cannot calculate logarithm of a non-positive number." << endl;
                    }
                }
                break;
            case 0:
                cout << "Going back to the main menu..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }
};

// Main function
int main() {
    int choice;

    while (true) {
        cout << "---------- Scientific Calculator ----------" << endl;
        cout << "1. Simple Functions\n";
        cout << "2. Squares and Roots\n";
        cout << "3. Trigonometric Functions\n";
        cout << "4. Logarithmic Functions\n";
        cout << "0. Exit\n";
        cout << "Enter your choice (0-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                SimpleFunctions simpleFunctions;
                simpleFunctions.performCalculation();
                break;
            }
            case 2: {
                SquaresAndRoots squaresAndRoots;
                squaresAndRoots.performCalculation();
                break;
            }
            case 3: {
                TrigonometricFunctions trigonometricFunctions;
                trigonometricFunctions.performCalculation();
                break;
            }
            case 4: {
                LogarithmicFunctions logarithmicFunctions;
                logarithmicFunctions.performCalculation();
                break;
            }
            case 0:
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }

    return 0;
}

