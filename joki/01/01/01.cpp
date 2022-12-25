#include <iostream>
using namespace std;
class account {
public:
	//static variable
	int deposit, withdrawal, acc_balance;
	string acc_name;
	int acc_number;

	//constructor
	account() {
		cout << "Constructor" << endl;
	}
	//overload
	account(string accname, int accbalance) {
		acc_name = accname;
		acc_balance = accbalance;
	}

	//getter & setter
	int getAccNumber() {
		return acc_number;
	}
	void setAccNumber(int x) {
		acc_number = x;
	}
	int getDeposit() {
		return deposit;
	}
	void setDeposit(int x) {
		deposit = x;
	}
	int getWithdrawal() {
		return withdrawal;
	}
	void setWithdrawal(int x) {
		withdrawal = x;
	}
	int getAccBalance() {
		return acc_balance;
	}
	void setAccBalance(int x) {
		acc_balance = x;
	}
	string getAccName() {
		return acc_name;
	}
	void setAccName(string x) {
		acc_name = x;
	}
	void addTransaction(int type) {

	}
};

//declaration struct transactions
struct transactions {
	account acc;
	int total_transaction;
};


//add account
void addAccount(transactions& trx) {
	string name;
	int balance;
	cout << "=== Add Account ===" << endl;
	cout << "Enter Name : "; cin >> name;
	cout << "Enter Balance :"; cin >> balance;
	trx.acc.setAccName(name);
	trx.acc.setAccBalance(balance);
}

void makeWithdrawal(transactions& trx) {
	int mybalance = trx.acc.getAccBalance();
	int wd;
	cout << "Enter Withdrawal amount : "; cin >> wd;
	if (mybalance - wd >= 0 && (wd % 50 == 0 || wd % 100 == 0)) {
		trx.acc.setWithdrawal(trx.acc.getWithdrawal() + wd);
		trx.acc.setAccBalance(mybalance - wd);
		trx.total_transaction += 1;
	}
	else if (mybalance - wd < 0) {
		cout << "the balance is not sufficient" << endl;
	}
	else {
		cout << "cannot withdraw this amount" << endl;
	}
}
