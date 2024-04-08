//6.Define a class to represent a bank account. Include the following members:*//

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& accNum, const std::string& accHolderName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

  
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
        } else {
            balance -= amount;
        }
    }

    void display() {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
  
    BankAccount myAccount("123456789", "pink rhea", 1000.0);
    myAccount.display();

    myAccount.deposit(500.0);
    myAccount.display();

    myAccount.withdraw(200.0);
    myAccount.display();

    myAccount.withdraw(2000.0); 
    myAccount.display();

    return 0;
}

