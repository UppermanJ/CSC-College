#pragma once
#ifndef bankAccount_hpp
#define bankAccount_hpp
#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std;

class bankAccount
{
    string accountHoldersName;
    int accountNumber;
    float accountBalance, interestRate;

public:
    ~bankAccount();
    bankAccount();
    bankAccount(string, int, float, float);
};

    bankAccount::~bankAccount(){

    };
    bankAccount::bankAccount(){

    };
    bankAccount::bankAccount(string name, int number, float bal, float rate){
        accountHoldersName = name;
        accountNumber = number;
        accountBalance = bal;
        interestRate = rate;
    };

#endif /* bankAccount_hpp */