#ifndef USERSLIST_H
#define USERSLIST_H
#include<iostream>
#include<vector>
#include<user.h>
#include<fstream>
#include<sstream>
#include<string>
#include<cryptoType.h>
#include<cryptocurrency.h>
#include<wallet.h>
#include<QMessageBox>
#include<QTextStream>
#include<QDebug>
#include<direct.h>
#include<filesystem>
class UsersList
{
private:
    std::vector<User> usersVector;
    std::vector<std::string> emailVector;

public:
    UsersList();

    std::vector<std::string> getEmailVector();

    std::vector<User> getUsersVector();

    void addUserToList(User newUser);

    bool signIn(const std::string& emailToFind, const std::string& passwordToFind);

    bool signUp (std::string& firstName, std::string& lastName, std::string& email, std::string& password );

    void getEmailsFromFile();

};

#endif // USERSLIST_H
