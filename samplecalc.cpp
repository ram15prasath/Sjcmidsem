#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Vector to store history strings
    vector<string> history;
    char op;
    double num1, num2, result;
    int choice;

    while (true) {
        cout << "\n1. Calculate\n2. Show History\n3. Exit\nChoose: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter expression (e.g., 5 + 3): ";
            cin >> num1 >> op >> num2;

            if (op == '+') result = num1 + num2;
            else if (op == '-') result = num1 - num2;
            else if (op == '*') result = num1 * num2;
            else if (op == '/') result = num1 / num2;

            cout << "Result: " << result << endl;

            // Save the math equation as a string to our history list
            string equation = to_string(num1) + " " + op + " " + to_string(num2) + " = " + to_string(result);
            history.push_back(equation);
        }
        else if (choice == 2) {
            cout << "\n--- Calculation History ---" << endl;
            if (history.empty()) {
                cout << "No history yet!" << endl;
            } else {
                for (const string& record : history) {
                    cout << record << endl;
                }
            }
        }
        else {
            break;
        }
    }
    return 0;
}
