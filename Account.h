#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account;

class Account {
    public:
       // Account();
       // ~Account();
        void CreateAccount();
        void getName();
        void getPassword();
        int PasswordCompare(string, string);
        void SavePassword();
    
    private:
        string AccountName;
        string AccountPassword;
};

#endif