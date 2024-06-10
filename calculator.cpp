#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

float Addition(float num1, float num2) {
    return (num1 + num2);
}

float Subtraction(float num1, float num2) {
    return (num1 - num2);
}

float Multiplication(float num1, float num2) {
    return (num1 * num2);
}

float Division(float num1, float num2) {
    if(num2 != 0) {
        return (num1 / num2);
    } else {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

void clearScreen()
{
        system("cls");
}

char mainpage() {
    char operation;
    cout << "\t\t\t" << "-----------------------------------"<<endl;
    cout << "\t\t\t" << "|=================================|" << endl;
    cout << "\t\t\t" << "|******** Simple Calculator ******|" << endl;
    cout << "\t\t\t" << "|=================================|" << endl;
    cout << "\t\t\t" << "-----------------------------------"<<endl;
    cout<<"\t\t\t"<<" ----------------------"<<endl;
    cout << "\t\t\t" << " |Choose an operation:|" << endl;
    cout << "\t\t\t" << " |+ : Addition        |" << endl;
    cout << "\t\t\t" << " |- : Subtraction     |" << endl;
    cout << "\t\t\t" << " |*: Multiplication   |" << endl;
    cout << "\t\t\t" << " |/ : Division        |" << endl;
    cout << "\t\t\t" << " |Enter your choice:  |"<<endl;
    cout<<"\t\t\t"<<" ----------------------"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cin>> operation;
    return operation;
}

int main() {
    float num1, num2;
    char operation;
    char choice;

    do {
        clearScreen();
        operation = mainpage();

        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "Result= " << Addition(num1, num2) << endl;
                break;
            case '-':
                cout << "Result= " << Subtraction(num1, num2) << endl;
                break;
            case '*':
                cout << "Result= " << Multiplication(num1, num2) << endl;
                break;
            case '/':
                cout << "Result= " << Division(num1, num2) << endl;
                break;
            default:
                cout << "Error: Invalid operator" << endl;
        }


        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout<<"\n"<< "Thank you for using my calculator!" << endl;
    cout<<"------------------------------------------------------"<<endl;
    return 0;
}
