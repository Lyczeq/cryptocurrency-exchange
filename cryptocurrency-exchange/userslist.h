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

    void loadEverything();

    std::vector<std::string> getEmailVector();

    std::vector<User> getUsersVector();

    bool signIn(const std::string& emailToFind, const std::string& passwordToFind);

    void signUp (User& newUser, const std::string & password );

    User &getUserByEmail(const std::string& email);

    void addUserToList (User& newUser);

    void printAllUsers();

    void printAllEmails();

    bool checkIfUserExists(const std::string& email);

    void loadUsersEmails();

    void fulfillUsersReceivedTransfers();

};

#endif // USERSLIST_H
