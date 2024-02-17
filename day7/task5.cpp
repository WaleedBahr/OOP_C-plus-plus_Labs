/*Consider a bank account system. The bank account class could have
attributes such as account number, account holder name, balance, and
methods such as deposit, withdraw, and check balance. Each account
holder would be an object of this class. When a customer opens a new
account, an object is created with their account information.*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(int a,string n,double b)
       {
         accountNumber=a;
         accountHolderName=n;
         balance=b;
       }

    // Setter method for account number
    void setAccountNumber(int number)
     {
        accountNumber = number;
     }

    // Getter method for account number
    int getAccountNumber()
     {
        return accountNumber;
     }

    // Setter method for account holder name
    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }

    // Getter method for account holder name
    string getAccountHolderName()
     {
        return accountHolderName;
     }

    // Setter method for balance
    void setBalance(double newBalance)
    {
        balance = newBalance;
    }

    // Getter method for balance
    double getBalance()
    {
        return balance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance <<endl;
        } else {
            cout << "Invalid deposit amount." <<endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Method to check the account balance
    void checkBalance() const {
     cout << "Account Holder: " << accountHolderName << endl;
    cout << "Account Number: " << accountNumber <<endl;
    cout << "Current Balance: " << balance <<endl;
    }
};

int main() {
    // Creating a new account
    BankAccount myAccount(123456789, "WaleedBahr", 1000.0);

    // Getting user input for account details
    int newAccountNumber;
    string newAccountHolderName;
    double initialBalance;

    cout << "Enter new account number: ";
    cin >> newAccountNumber;
    myAccount.setAccountNumber(newAccountNumber);
    cout << "Enter new account holder name: ";
    cin >> newAccountHolderName;
    myAccount.setAccountHolderName(newAccountHolderName);

    cout << "Enter initial balance: ";
    cin >> initialBalance;
    myAccount.setBalance(initialBalance);

    // Performing operations on the account
    myAccount.deposit(500.0);
    myAccount.withdraw(500.0);
    myAccount.checkBalance();

    return 0;
}
