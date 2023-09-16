#include <iostream>
#include <fstream>

using namespace std;

int PasswordCompare(string Password, string PasswordCompare){
    return Password.compare(PasswordCompare);
}

void AccountCreate(){
    string AccountName;
    string AccountPassword;
    string AccountPasswordCompare;

    cout << "Account Name: ";
    cin >> AccountName;

    cout << "Geben Sie das Passwort ein: ";
    cin >> AccountPassword;
    cout << "Wiederholen Sie das Passwort: ";
    cin >> AccountPasswordCompare;
    while(PasswordCompare!=0){
        cout << "Das Passwort stimmt nicht überein" << endl << "bitte geben Sie das Passwort erneut ein: ";
        cin >> AccountPasswordCompare;
    }

    fstream AccountDataStream;
    AccountDataStream.open("AccountData.txt", ios::app);

}

int main(){

    cout << "Bitte legen Sie einen Account an:" << endl;


    return 0;
}