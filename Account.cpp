#include <iostream>
#include <fstream>
#include <string>
#include "Account.h"

using namespace std;

Account::Account()
: AccountName("Test"), AccountPassword("test")
{

}

Account::~Account(){

}

void Account::CreateAccount(){
    string PassowrdCompare;

    cout << "Geben Sie einen Benutzernamen ein: ";
    getName();

    cout << "Geben Sie ein Passwort ein: ";
    getPassword();

    cout << "Wiederholen Sie das Passwort: ";
    cin >> PassowrdCompare;
    while (PasswordCompare(AccountPassword,PassowrdCompare) != 0)
    {
        cout << "Sie haben kein identisches Passwort eingegeben" << endl << "Wiederholen Sie das Passwort: ";
        cin >> PassowrdCompare;
    }
    
    SavePassword();

}

void Account::getName(){
    cin >> AccountName;
}

void Account::getPassword(){
    cin >> AccountPassword;
}

int Account::PasswordCompare(string Password, string PasswordCompare){
    return Password.compare(PasswordCompare);
}

void Account::SavePassword(){

    ofstream AccountDataStream;
    AccountDataStream.open("AccountData.txt", ios::app);
    if (!AccountDataStream.is_open()) {
        cout << "failed to open " << '\n';
    } else {
        AccountDataStream.write(AccountName.data(), AccountName.size());
        AccountDataStream.write(AccountPassword.data(), AccountPassword.size());
        cout << "Done Writing!" << endl;
    }
    AccountDataStream.close();

}