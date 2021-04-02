#include "userslist.h"

UsersList::UsersList() //pobieranie wszystkich informacji z plików dla users, a dzięki mailowi pobieram info o portfelu
{
    const std::string emailsFileName = "emails.txt";
    std::ifstream emailsFile(emailsFileName);

    if(!emailsFile.is_open())
    {
        //TODO zrobić mechanizm niepowodzenia!
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

    for(auto& mail : emailVector)
    {
        std::string usersFirstName;
        std::string usersLastName;
        std::string usersEmail;
        float money;

        std::vector<Cryptocurrency> usersCrypto;

     const std::string userInfoDirectory = "users/"+mail+"/info.csv";

     std::ifstream userInfoFile(userInfoDirectory);
     if(!userInfoFile.is_open())
     {
         //TODO zrobić mechanizm niepowodzenia!
     }
     else
     {  std::string line;
         std::getline(userInfoFile, line);

         std::string moneyBufor;
         std::stringstream ss(line);
         std::getline(ss,usersFirstName,',');
         std::getline(ss,usersLastName, ',');
         std::getline(ss,usersEmail,',');
         std::getline(ss,moneyBufor);
         money = std::stof(moneyBufor);

     }
     userInfoFile.close();
     const std::string userCryptoFileName = "users/"+mail+"/cryptocurrency.csv";

     std::ifstream userCryptoFile(userCryptoFileName);

     if(!userCryptoFile.is_open())
     {
         //TODO zrobić mechanizm niepowodzenia!
     }
     else
     {  std::string line;
         while(std::getline(userCryptoFile, line))
         {
             if(line=="")
                 continue;

             float amount;
             cryptoType whatCrypto;
             std::stringstream ss(line);
             getline(ss,line,',');
             whatCrypto = intToCryptoType(std::stoi(line));

             getline(ss,line);
             amount = std::stof(line);
             Cryptocurrency newCrypto (whatCrypto, amount);

             usersCrypto.push_back(newCrypto);
         }
     }
     userCryptoFile.close();
     Wallet newWallet  (money, usersCrypto);
    User newUser  (usersFirstName, usersLastName, usersEmail, newWallet);
    usersVector.push_back(newUser);
    }
}

bool UsersList ::signIn(const std::string& emailToFind, const std::string& passwordToFind)
{
   if(std::find(emailVector.begin(), emailVector.end(), emailToFind)==emailVector.end())
       return false;

   const std::string userPasswordDirectory = "users/"+emailToFind+"/passw.txt";

   std::ifstream passwordFile(userPasswordDirectory);
   std::string foundPasword;
   if(!passwordFile.is_open())
   {
       //walidacja
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

bool UsersList:: signUp(std::string& firstName, std::string& lastName, std::string& email, std::string& password)
{
    if(std::find(emailVector.begin(), emailVector.end(), email)!=emailVector.end())
        return false;

    const std::string newUserDirectory = "users/"+email;
    const char* path = newUserDirectory.c_str();
    _mkdir(path);

    std::ofstream newUserInfoFile(newUserDirectory+"/info.csv");

    if(!newUserInfoFile.is_open())
    {
        //walidacja
    }
    else
    {
        const std::string infoText = firstName+","+lastName+","+email+",0";
        newUserInfoFile<<infoText;
    }
    newUserInfoFile.close();
    std::ofstream newUserPasswordFile(newUserDirectory+"/passw.txt");

    if(!newUserPasswordFile.is_open())
    {
        //walidacja
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

    emailVector.push_back(email);

    std::ofstream emailsFile("emails.txt");
    if(!emailsFile.is_open())
    {
        //walidacja
    }
    else
    {
       for(auto& email : emailVector)
           emailsFile<<email<<std::endl;
    }
    emailsFile.close();

    Wallet newWallet;
    User newUser(firstName, lastName, email, newWallet);
    usersVector.push_back(newUser);
    return true;
}

std::vector<User> UsersList:: getUsersVector()
{
   return usersVector;
}

std::vector<std::string> UsersList:: getEmailVector()
{
    return emailVector;
}



























