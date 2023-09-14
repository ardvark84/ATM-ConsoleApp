
#include <iostream>
using namespace std;

void mainMenu()
{
	cout << "\n**Welcome to Bank of Riley**\n" << endl;
	cout << "**********MAIN MENU**********" << endl;
	cout << "1. CHECK BALANCE" << endl;
	cout << "2. DEPOSIT" << endl;
	cout << "3. WITHDRAW" << endl;
	cout << "4. TRANSFER FUNDS" << endl;
	cout << "5. EXIT" << endl;
	cout << "************************" << endl;
}
int main()
{
	//An ATM program which has the features to withdraw, deposit, check balance, and exit.
	int option;
	int CoS; //checking or saving
	int CoS2; //checking or savings
	int CoS3; //checking or savings
	double balanceChecking = 1000;
	double depositAmount;
	double withdrawAmount{};
	double balanceSaving = 500;
	double depositSaving;
	double transferAmount;

	do
	{
		mainMenu();
		cout << "Choose an option 1-5" << endl;
		cin >> option;
			system("cls");
			if (static_cast<double>(static_cast<int>(option)) != option)
			{
				"please try again";
					break;
		}
			else
		switch (option)

		{
			// Check Balance
		case 1:
			cout << "Checking Account balance is: " << "$" << balanceChecking << endl;
			cout << "Saving Account balance is: " << "$" << balanceSaving << endl;
			break;
			// Deposit
		case 2:
			cout << " enter 1 to deposit in savings, or enter 2 to deposit in checking: ";
			cin >> CoS;
			if (CoS == 2) {
				cout << "Enter amount you would like to deposit in your Checking Account: $";
				cin >> depositAmount;
				balanceChecking += depositAmount;
				cout << "Checking Account balance is: " << "$" << balanceChecking << endl;
			}
			else {
				cout << "enter amount you would like to deposit in your savings account: $";
				cin >> depositSaving;
				balanceSaving += depositSaving;
				cout << "Saving account balance is: " << "$" << balanceSaving << endl;

			}
			break;
			// Withdraw
		case 3:
			cout << "Enter 1 to withdraw from savings, or enter 2 to withdraw from checking: ";
			cin >> CoS2;
			if (CoS2 == 2) {
				cout << "enter amount you would like to withdraw. $";
				cin >> withdrawAmount;
				if (withdrawAmount <= balanceChecking) {
					balanceChecking -= withdrawAmount;
					cout << "Checking Account balance is: " << "$" << balanceChecking << endl;
				}
				else cout << "you dont have enough funds in your checking account" << endl;
			}
			else if (CoS2 == 1) {
				cout << "enter amount you would like to withdraw. $";
				cin >> withdrawAmount;

				if (withdrawAmount <= balanceSaving) {

					balanceSaving -= withdrawAmount;
					cout << "Savings account balance is: " << "$" << balanceSaving << endl;
				}
				else  cout << "You don't have enough funds in your saving Account" << endl;
			}
			break;
		case 4:
			cout << "Enter 1 to transfer from savings to checking, or enter 2 to transfer from checking to savings: ";
			cin >> CoS3;
			if (CoS3 == 2) {
				cout << "enter amount you would like to transfer from checking. $";
				cin >> transferAmount;
				if (transferAmount <= balanceChecking) {
					balanceChecking -= transferAmount;
					balanceSaving += transferAmount;
					cout << "Checking Account balance is: " << "$" << balanceChecking << endl;
					cout << "Savings account balance is now: " << "$" << balanceSaving << endl;
				}
				else cout << "you dont have enough funds in your checking account" << endl;
			}
			else if (CoS3 == 1) {
				cout << "enter amount you would like to transfer from savings. $";
				cin >> transferAmount;
				if (transferAmount <= balanceSaving) {
					balanceChecking += transferAmount;
					balanceSaving -= transferAmount;
					cout << "Savings account balance is now: " << "$" << balanceSaving << endl;
					cout << "Checking account balance is now: " << "$" << balanceChecking << endl;
				}
				else  cout << "You don't have enough funds in your savings Account" << endl;
			}
			break;
		}
	
		} while (option != 5);
		cout << "Thank you for banking with us!";
		system("Pause>0");	
}