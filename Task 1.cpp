#include <iostream>
using namespace std;
class BankAccount {
private:
    static double interestRate;

public:
    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    static double calculateInterest(double balance) {
        return balance * (interestRate / 100.0);
    }
};

double BankAccount::interestRate = 0.0;

int main() {

    BankAccount::setInterestRate(7.0);
	 double initialBalance = 1000.0;
     double interestEarned = BankAccount::calculateInterest(initialBalance);

    cout << "Interest earned: $" << interestEarned << endl;

    return 0;
}
