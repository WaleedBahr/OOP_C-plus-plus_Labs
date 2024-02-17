/*A C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }


    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }


    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    cout << "Enter account number: ";
    int accountNumber;
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    double initialBalance;
    cin >> initialBalance;
    BankAccount account(accountNumber, initialBalance);

    double depositAmount;
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    double withdrawAmount;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    int retrievedAccountNumber = account.getAccountNumber();
    double retrievedBalance = account.getBalance();
    cout << "Account number: " << retrievedAccountNumber << endl;
    cout << "New Balance: " << retrievedBalance << endl;

    return 0;
}
