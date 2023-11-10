#include <iostream>
#include <fstream>
#include "registration.h"
#include "user.h"
using namespace std;

void menu(){
    
}


int calorieCounter(){   
    ;
}

int main(){
    menu();
    ofstream calorieFile;
    calorieFile.open("caloriecount.txt");
    calorieFile << "Hello. Writing to this file.\n";

    if (calorieFile.is_open()){
        calorieFile << "File successfully opened!\n";
        calorieFile << "Now ready to read in data.\n";
        calorieFile.close();
    } else{
        cout << "Enter opening file";
    }
    
    return 0;
}