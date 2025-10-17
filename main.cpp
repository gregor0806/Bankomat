#include <iostream>
#include <vector>
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double amount = 0;
    int x;
    while (true){
        cout << "\nMake a Choice: "
                    "\nWithdraw: "<<1<<
                    "\nDeposit: " <<2<<
                    "\nShow Balance: " <<3<<
                    "\n Exit: " <<4<< endl;
        cin >> x;

        if (x == 1) {
            double  withdraw;
            cout << "How much would you like to withdraw? ";
            cin >> withdraw;
            if (withdraw > amount) {
                withdraw = amount;
                cout << "It was just possible to withdraw: " << withdraw << endl;
            }
            if ( withdraw <= 0) {
                cout << "It was not possible to withdraw money"<< endl;
            }
            amount -= withdraw;
            cout << "Your current Balance is: "<< amount << endl;
        }

        if (x== 2) {
            double  deposit;
            cout << "How much would you like to deposit?: ";
            cin >> deposit;
            if (deposit <= 0) {
                cout << "It was not possible to deposit" << endl;
            }
            amount += deposit;
            cout << "Your current Balance is: "<< amount << endl;
        }

        if (x==3) {
            cout << "Your Balance is: "<< amount << endl;
        }
        if (x==4) {
            break;
        }

        // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
    }
}