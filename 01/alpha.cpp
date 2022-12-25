#include <bits/stdc++.h>
using namespace std;

class account{
	public:
		int deposit,withdrawal,acc_balance;
		string acc_name;
		static int acc_number;
		int total_transaction;

		//constructor
		account(){
		//	cout << "constructor" << endl;
			deposit = 0;
			withdrawal = 0;
			acc_balance =0;
			total_transaction = 0;
		}
		

		//overload
		account(string accname,int accbalance){
			acc_name = accname;
			acc_balance = accbalance;
		}

		void newAccount(){
			deposit = 0;
			withdrawal = 0;
			total_transaction = 0;
		}

		//getter & setter
		int getAccNumber(){
			return acc_number;
		}	
		int getDeposit(){
			return deposit;
		}
		void setDeposit(int x){
			deposit = x;
		}
		int getWithdrawal(){
			return withdrawal;
		}
		void setWithdrawal(int x){
			withdrawal = x;
		}
		int getAccBalance(){
			return acc_balance;
		}
		void setAccBalance(int x){
			acc_balance = x;
		}
		string getAccName(){
			return acc_name;
		}
		void setAccName(string x){
			acc_name = x;
		}
		int getTotalTransaction(){
			return total_transaction;
		}
		void addTransaction(){
			total_transaction++;
		}
		//destructor
		~account(){
			addTransaction();
		}
};
//endclass


int account::acc_number = rand();
//declaration struct transactions
struct transactions{
	account acc;
};


void makeDeposit(transactions &trx);

//add account
void addAccount(transactions &trx){
	string name;
	int balance;
	cout << "=== Add Account ===" << endl;
	cout << "Enter Name : "; cin >> name;
	cout << "Enter Balance :"; cin >> balance;
	if(balance < 100){
		cout << "Minimum Balance is 100" << endl;
	}else{
		trx.acc.setAccName(name);
		trx.acc.setAccBalance(balance);
		trx.acc.newAccount();
	}
}

void makeWithdrawal(transactions &trx){
	int mybalance = trx.acc.getAccBalance();
	int wd;
	cout << "Enter Withdrawal amount : "; cin >> wd;
	if(mybalance - wd >= 100 && (wd%50==0 || wd%100==0)){
		trx.acc.setWithdrawal(trx.acc.getWithdrawal()+wd);
		trx.acc.setAccBalance(mybalance-wd);
		trx.acc.total_transaction += 1;
	}else if(mybalance - wd < 0){
		cout << "the balance is not sufficient" << endl;
	}else{
		cout << "cannot withdraw this amount" << endl;
	}
}

void makeDeposit(transactions &trx){
	int depo;
	cout << "Enter deposit amount : "; cin >> depo;
	trx.acc.setDeposit(trx.acc.getDeposit()+depo);
	trx.acc.setAccBalance(trx.acc.getAccBalance()+depo);
	trx.acc.total_transaction += 1;
}

void print(transactions trx){	
	cout << "=== Bank Statement ==="<< endl;
	cout << "Account Number : " << trx.acc.getAccNumber() << endl;
	cout << "Account Name : " << trx.acc.getAccName() << endl;
	cout << "Deposit : " << trx.acc.getDeposit() << endl;
	cout << "Withdrawal : " << trx.acc.getWithdrawal() << endl;
	cout << "Account Balance : "<<trx.acc.getAccBalance() <<endl;
	cout << "Total Transaction : " << trx.acc.getTotalTransaction() << endl;
}

int main(){
	int x = 1;
	transactions trx;
	while(x!=0){
		cout << "=== ATM Machine ===" << endl;
		cout << "1.Create new account"<<endl;
		cout << "2.Make withdrawal (multiples of 50 and 100)" <<endl;
		cout << "3.Make deposit" << endl;
		cout << "4.Print Statement" << endl;
		cout << "0.Exit" << endl;
		cout << "Your option >>>> ";cin >> x;
		if(x == 1){
			addAccount(trx);
		}else if(x==2){
			makeWithdrawal(trx);
		}else if (x==3) {
			makeDeposit(trx);
		}else if(x==4){
			print(trx);
		}else if(x==0){
			cout << "Thank You :)" << endl;
		}
	}
}



