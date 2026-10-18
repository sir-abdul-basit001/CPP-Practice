#include <iostream>
using namespace std;
// 21. ATM withdrawal validation (balance + PIN check).

int main()
{
    int pin, amount, balance = 1000;
    char choice;
    cout << "Enter you PIN: ";
    cin >> pin;
    if (pin == 1234)
    {
        cout << "Loged in successfully" << endl;
    }
    else
    {
        cout << "Pin you entered is incorrect ";
        exit(0);
    }
    while (true)
    {

        cout << "=======================" << endl;
        cout << "_______ATM-Menu________" << endl;
        cout << "=======================" << endl;
        cout << "1.check Balanace\n2.Widraw amount\n3.Deposite Amount\n4.Exit\n";
        cout << "Enter you choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            cout << "Here is your balance: " << balance << "$" << endl;
            break;
        case '2':
            cout << "Enter your amont to widrew: ";
            cin >> amount;
            balance += amount;
            cout << "Take your Cash" << endl;
            break;
        case '3':
            cout << "Enter your amout to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Your amount is deposited successfully" << endl;
            break;
        case '4':
            cout << "Thanks for using ABAnjum's ATM ";
            exit(0);
            break;
        }
    }
}