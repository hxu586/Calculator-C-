#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        float num1, num2;
        char op;

        cout << "Enter an expression (e.g., 23 + 36): ";
        cin >> num1 >> op >> num2;

        switch (op)
        {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
        }
    }
    return 0;
}
