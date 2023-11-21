#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>
#include "user.h"


class userRegistration{
    public:
        void registerUser(User &user){
            std::string username, password;

            std::cout << "Enter username: ";
            std::cin >> username;
            user.setUsername(username);

            std::cout << "Enter password: ";
            std::cin >> password;
            user.setPassword(password);
        }
    



};


#endif