#include "userslist.h"

UsersList::UsersList()
{
    loadUsersEmails();

    for(auto& mail : emailVector)
    {
        std::string usersFirstName;
        std::string usersLastName;
        std::string usersEmail;
        double money;

     const std::string userInfoDirectory = "users/"+mail+"/info.csv";

     std::ifstream userInfoFile(userInfoDirectory);
     if(!userInfoFile.is_open())
     {
         //error handler
     }
     else
     {   std::string line;
         std::getline(userInfoFile, line);

         std::string moneyBufor;
         std::stringstream ss(line);
         std::getline(ss,usersFirstName,',');
         std::getline(ss,usersLastName, ',');
         std::getline(ss,usersEmail,',');
         std::getline(ss,moneyBufor);
         money = std::stod(moneyBufor);
     }
     userInfoFile.close();

    std::vector<std::shared_ptr<Transfer>> recTransfers;
    Wallet newWallet  (money, recTransfers);
    User newUser  (usersFirstName, usersLastName, usersEmail, newWallet);
    newUser.getWallet().loadUserGoods(newUser.getEmail());
    usersVector.push_back(newUser);
    }

    fulfillUsersReceivedTransfers();
}

void UsersList::fulfillUsersReceivedTransfers()
{
    for(auto &user: usersVector)
    {
        for(auto &sentTransfer: user.getWallet().getSentTransfers())
        {
            std::shared_ptr<Transfer> transferPointer =std::make_shared<Transfer> (sentTransfer);
            getUserByEmail(sentTransfer.getRecipient()).getWallet().pushReceivedTransfer(transferPointer);
        }
    }
}

void UsersList::loadUsersEmails()
{
    const std::string emailsFileName = "emails.txt";
    std::ifstream emailsFile(emailsFileName);

    if(!emailsFile.is_open())
    {
        //error handler
    }
    else{
        std::string mail;

        while(emailsFile>>mail)
        {
            if(mail=="")
                continue;

            emailVector.push_back(mail);
        }
        emailsFile.close();
    }
}

bool UsersList ::signIn(const std::string& emailToFind, const std::string& passwordToFind)
{
    if(!checkIfUserExists(emailToFind))
        return false;

   const std::string userPasswordDirectory = "users/"+emailToFind+"/passw.txt";

   std::ifstream passwordFile(userPasswordDirectory);
   std::string foundPasword;
   if(!passwordFile.is_open())
   {
       //error handler
       return false;
   }
   else
   {
      passwordFile>>foundPasword;
   }
   passwordFile.close();

   if(foundPasword ==passwordToFind)
       return true;
   else return false;
}

void UsersList:: signUp( User& newUser, const std::string & password)
{

    const std::string newUserDirectory = "users/"+newUser.getEmail();
    const char* path = newUserDirectory.c_str();
    _mkdir(path);

    std::ofstream newUserInfoFile(newUserDirectory+"/info.csv");

    if(!newUserInfoFile.is_open())
    {
        //error handlr
    }
    else
    {
        const std::string infoText = newUser.getFirstName()+ ","+newUser.getLastName()+","+newUser.getEmail()+",0";
        newUserInfoFile<<infoText;
    }
    newUserInfoFile.close();
    std::ofstream newUserPasswordFile(newUserDirectory+"/passw.txt");

    if(!newUserPasswordFile.is_open())
    {
        //error handler
    }
    else
    {
        newUserPasswordFile<<password;
    }

    newUserPasswordFile.close();

    std::ofstream newUserCryptoFile(newUserDirectory+"/cryptocurrency.csv");
    newUserCryptoFile.close();
    std::ofstream newUserOrdersFile(newUserDirectory+"/orders.csv");
    newUserOrdersFile.close();
    std::ofstream newUserCFDFile(newUserDirectory+"/CFD.csv");
    newUserCFDFile.close();
    std::ofstream dateFile (newUserDirectory+"/date.txt");

    dateFile<<"01.05.2018";
    dateFile.close();

    this->emailVector.push_back(newUser.getEmail());

    std::ofstream emailsFile("emails.txt");
    if(!emailsFile.is_open())
    {
        //error handler
    }
    else
    {
       for(auto& email : emailVector)
           emailsFile<<email<<std::endl;
    }
    emailsFile.close();
}

std::vector<User> UsersList:: getUsersVector()
{
   return usersVector;
}

std::vector<User>& UsersList:: getUsersVectorOriginal()
{
   return usersVector;
}


std::vector<std::string> UsersList:: getEmailVector()
{
    return emailVector;
}

User& UsersList::getUserByEmail(const std::string& email)
{
    for(auto & user: usersVector)
    {
        if(user.getEmail()==email)
            return user;
    }
}

void UsersList::addUserToList(User &newUser)
{
    this->usersVector.push_back(newUser);
}

bool UsersList::checkIfUserExists(const std::string& email)
{
    if(std::find(emailVector.begin(),emailVector.end(),email)!=emailVector.end())
        return true;
    else return false;
}

























