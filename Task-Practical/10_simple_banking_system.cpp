#include <iostream>
using namespace std;

class Bank {
private:
    float balance;

public:
    Bank() {
        balance = 1000;
    }
    
    void deposit(float amount) {
        balance += amount;
    }
    
    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }
    
    void showBalance() {
        cout << "Current Balance = " << balance << endl;
    }
};

int main() {
    Bank b;
    b.showBalance();
    b.deposit(500);
    b.showBalance();
    b.withdraw(300);
    b.showBalance();
    
    return 0;
}
