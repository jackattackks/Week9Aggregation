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
    void defaultTeam(string b, string c, string d, string e, string f, string g, string h){
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
//instantiate 7 player
    Player p1;
    Player p2;
    Player p3;
    Player p4;
    Player p5;
    Player p6;
    Player p7;
    
//use parm constructor on 4 players
    p1.parmCon("George");
    p2.parmCon("Ivan");
    p3.parmCon("Hang");
    p4.parmCon("Tuyet");
    
//use default constructor ad set names
    p5.defaultCon();
    p6.defaultCon();
    p7.defaultCon();
    p5.setName("Sue");
    p6.setName("Victoria");
    p7.setName("Tumbo");

//instantiate two teams
    Team basketball;
    Team soccer;

//STEP 3 STARTS HERE
//    basketball players
    Player * ptrP1 = new Player("GEORGE");
    Player * ptrP2 = new Player(p2);
    Player * ptrP3 = new Player(p3);
    Player * ptrP4 = new Player(p4);
    Player * ptrP5 = new Player(p5);
    
}

//teach is player dept is team
