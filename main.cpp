//
//  main.cpp
//  Week9Aggregation
//
//  Created by Jackie on 3/21/21.
//

#include <iostream>
#include <string>
using namespace std;

//Player class created
class Player{
private:
    string name;

public:
    string getName(){
        return name;
    }
    
    void setName(string n){
        name = n;
    }
    
    void defaultCon(){
        name = "Unknown";
    }
    
    void parmCon(string list){
//        list = array name
    }
};

//Team class created
class Team{
private:
    Player * ptrPlayer1;
    Player * ptrPlayer2;
    Player * ptrPlayer3;
    Player * ptrPlayer4;
    Player * ptrPlayer5;
    Player * ptrPlayer6;
    Player * ptrPlayer7;
    
public:
    void defaultTeam(){
        ptrPlayer1 = NULL;
        ptrPlayer2 = NULL;
        ptrPlayer3 = NULL;
        ptrPlayer4 = NULL;
        ptrPlayer5 = NULL;
        ptrPlayer6 = NULL;
        ptrPlayer7 = NULL;
    }
    
    void printAllNames(){
        cout << ptrPlayer1 << endl;
        cout << ptrPlayer2<< endl;
        cout << ptrPlayer3<< endl;
        cout << ptrPlayer4<< endl;
        cout << ptrPlayer5<< endl;
        cout << ptrPlayer6<< endl;
        cout << ptrPlayer7<< endl;
    }
};

int main() {
    
}
