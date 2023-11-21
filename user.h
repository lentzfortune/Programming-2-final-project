#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

// This class takes in the user's username and password

class User{
    
    public: 
        void setUsername(std::string username){
            this->username = username;
        }
        void setPassword(std::string password){
            this->password = password;
        }

        std::string getUsername(){
            return username;
        }

        std::string getPassword(){
            return password;
        }
    
    private:
        std::string password;
        std::string username;

};


#endif