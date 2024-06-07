#include <bits/stdc++.h>
using namespace std;

// Structure to store account details
struct Account {
    int AccountNumber;
    int pin;
    float Balance;
};

// Vector containing all accounts
vector<Account> AllAccounts{
    {111111111, 1111, 11.00},
    {222222222, 2222, 22.00},
    {333333333, 3333, 33.00},
    {444444444, 4444, 44.00}
};

// Function to validate the account number
int AccountNumberValidator(int accountNumber) {
    for(int i = 0; i < AllAccounts.size(); i++) {
        if(AllAccounts[i].AccountNumber == accountNumber) 
            return i;
    }
    return -1;
}

// Function to validate the PIN
bool PinValidator(int accountIndex, int UserGivenPin) {
    return AllAccounts[accountIndex].pin == UserGivenPin;
}

// Function to check the balance
int CheckBalance(int accountIndex) {
    cout << "\nYour Bank Account Balance is: ";
    cout << AllAccounts[accountIndex].Balance << "\n\n";
    return 0;
}

// Function to deposit money
int Deposit(int accountIndex) {
    cout << "How much do you wish to deposit?\n";
    float amountToDeposit;
    cin >> amountToDeposit;
    AllAccounts[accountIndex].Balance += amountToDeposit;
    cout << "Deposition Successful!!\n";
    CheckBalance(accountIndex);
    return 0;
}

// Function to withdraw money
int Withdraw(int accountIndex) {
    CheckBalance(accountIndex);
    cout << "How much do you wish to withdraw?\n";
    float amountToWithdraw;
    cin >> amountToWithdraw;
    if (amountToWithdraw > AllAccounts[accountIndex].Balance) 
        cout << "Insufficient Funds!!\n";
    else {
        cout << "Here you go\n";
        AllAccounts[accountIndex].Balance -= amountToWithdraw;
        cout << "Withdrawal Successful!!\n";
        CheckBalance(accountIndex);
    } 
    return 0;
}

// Function to handle account actions
int AccountAction(int accountIndex) {
    while(1) {
        cout << "What do you wish to do?\n";
        cout << "1. Check your Bank Balance (C)\n";
        cout << "2. Deposit Money (D)\n";
        cout << "3. Withdraw Money (W)\n";
        cout << "4. Exit (E)\n";
        
        char UserChoiceOfAction;
        cin >> UserChoiceOfAction;

        switch(UserChoiceOfAction) {
            case 'c':
            case 'C':
                CheckBalance(accountIndex);
                break;
            case 'd':
            case 'D':
                Deposit(accountIndex);
                break;
            case 'w':
            case 'W':
                Withdraw(accountIndex);
                break;
            case 'e':
            case 'E':
                exit(0);
            default:
                cout << "Invalid Input!!\n";
                cout << "Choose from c/d/w/e/C/D/W/E next time\n";
        }
    }
    return 0;
}

int main() {
    while(1) {
        cout << "\n~~~~~Welcome to ATM of Bank XYZ!!~~~~~\n\n";
        cout << "Do you have an account (Y/N)?\n";
        
        char UserChoice;
        cin >> UserChoice;

        if (UserChoice == 'y' || UserChoice == 'Y') {
            cout << "What is your account number?\n";
            int UserGivenAccountNumber;
            cin >> UserGivenAccountNumber;
            cout << "Let me grab your information...\n";

            while(1) {
                if (AccountNumberValidator(UserGivenAccountNumber) == -1) {
                    cout << "Invalid Account Number\n";
                    cout << "Try again \n";
                    cout << "What is your account number?\n";
                    cin >> UserGivenAccountNumber;
                    cout << "Let me grab your information...\n";
                } else {
                    break;
                }
            }
            
            while(1) {
                cout << "What is the 4 digit pin?\n";
                int UserGivenPin;
                cin >> UserGivenPin;

                if (!PinValidator(AccountNumberValidator(UserGivenAccountNumber), UserGivenPin)) {
                    cout << "Wrong pin!!\n";
                    cout << "Try again!!\n";
                    continue;
                } else {
                    break;
                }
            }

            AccountAction(AccountNumberValidator(UserGivenAccountNumber));
        } 
        else if (UserChoice == 'n' || UserChoice == 'N') {
            cout << "Sorry, I cannot help you if you do not have an account!!\n";
            cout << "Contact us at +91 0000000000 to open an account!!\n";
            cout << "Thank you for visiting\n";
            cout << "Good Bye!!\n";
            exit(0);
        } 
        else {
            cout << "Incorrect choice.\n";
            cout << "Choose from y/n/Y/N next time!!\n";
        }
    }
    return 0;
}
