/*
Task:

Create a Calculator Program that allows the user to choose 1 of 5 arithmetic operations:

1. Add

2. Subtract

3. Multiplication

4. Division

5. Power

The user should enter the number of the operation and then

be prompted for the necessary input and display the result.

You do NOT need to make the program allow for more than 1 operation

during the run of the program. However you will receive 5 additional points

if you make the calculator repeatable so that the user doesn't have restart the program

when they want to perform another operation.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    string yesOrNo;

    do {
        double num1;
        double num2;

        cout << "Your first number: ";
        cin >> num1;
        cout << "Your second number: ";
        cin >> num2;

        char userChoice;
        string result = "Your answer is: ";
        


        cout << "Choose your operation: " << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division " << endl;
        cout << "5. Power " << endl;

        cin >> userChoice;


        if (userChoice == '1')
            cout << result << num1 + num2;
        else if (userChoice == '2')
            cout << result << num1 - num2;
        else if (userChoice == '3')
            cout << result << num1 * num2;
        else if (userChoice == '4')
            cout << result << num1 / num2;
        else
            cout << pow(num1, num2);

        cout << "\n Enter the calculator again? Enter [YES] or [NO]: ";
        cin >> yesOrNo;

    } while (yesOrNo == "YES");
    

    


}


