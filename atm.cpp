#include <iostream>
#include <string.h>
#include <string>

using namespace std;

void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

string username, password, savedUser, savedPass;
char menuInput;
double balance, withdraw, deposit;

int main() {
    cout << "Hi! Welcome to my ATM Machine." << endl;
    start();
    do {
        cin >> menuInput;
    
        switch(menuInput) {
            case 'l' :
                login();
                continue;
            case 'c' :
                createAccount();
                continue;
            case 'q' :
                cout << "\nGoodbye.\n" << endl;
                break;
            case default:
                cout << "Invalid input.";
        }
    } while (menuInput != 'q');
}

void printIntroMenu() {
    cout << "Please select an option from the menu below: \n\nl -> Login \nc -> Create New Account \nq -> Quit" << endl;
}

void printMainMenu() {
    cout << "d -> Deposit Money \nw -> Withdraw Money \nr -> Request Balance \nq -> Quit" << endl;
    cin >> menuInput;
    cout << endl;
    do
    {
       switch(menuInput):
        case 'd':
            cout << "Enter the amount you wish to deposit: $";
            cin >> deposit;
            balance += deposit;
            continue;
        case 'w':
            cout << "Enter the amount you wish to withdraw: $";
            cin >> withdraw;
            if (balance < withdraw)
            {
                cout << "Insuffienct funds!";
                break;
            }
            balance -= withdraw;
        case 'r':
            cout << "Current balance: $" << balance << endl;
            continue;
        case 'q':
            cout << "Goodbye!";
            break;
        case default:
            cout << "Invalid input." 
    } while (menuInput != "q");
}

void start() {
    printIntroMenu();
}

void login() {
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    cout << username << "\t" << password << endl;
    if (username.compare(savedUser)!=0 && savedPass.compare(savedPass)!=0)
    {
        cout << "\nAccess Granted!\n" << endl;
        printMainMenu();
    }
    else{
        cout << "\nInvalid Login\n" << endl;   
        printIntroMenu();
    }
}

void createAccount() {
    string savedUser, savedPass;
    cout << "Enter your username: ";
    cin >> savedUser;
    cout << endl;
    cout << "Enter your password: ";
    cin >> savedPass;
    cout << endl;
    cout << "\nThank you, your account has been created!\n" << endl;
    cout << savedUser << "\t" << savedPass << endl;
    printIntroMenu();
}
