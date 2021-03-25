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
    Player(string inName) : name(inName){}
    
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
        list = name;
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
    Team(Player * ptrPlayer=NULL): ptrPlayer1 (ptrPlayer){}
    void defaultTeam(Player *Person ){
        
        ptrPlayer1 = Person;
//        ptrPlayer2 = Person2;
//        ptrPlayer3 = Person3;
//        ptrPlayer4 = Person4;
//        ptrPlayer5 = Person5;
//        ptrPlayer6 = Person6;
//        ptrPlayer7 = Person7;

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
    Player *p1 = new Player(NULL);
    Player *p2 = new Player(NULL);
    Player *p3 = new Player(NULL);
    Player *p4 = new Player(NULL);
    Player *p5 = new Player(NULL);
    Player *p6 = new Player(NULL);
    Player *p7 = new Player(NULL);
    
//use parm constructor on 4 players
    p1->parmCon("George");
    p2->parmCon("Ivan");
    p3->parmCon("Hang");
    p4->parmCon("Tuyet");
    
//use default constructor ad set names
    p5->defaultCon();
    p6->defaultCon();
    p7->defaultCon();
    p5->setName("Sue");
    p6->setName("Victoria");
    p7->setName("Tumbo");

//create two teams
    Team basketball;
    Team soccer;
    
    p5->setName("Sue");
    p6->setName("Victoria");
    p7->setName("Tumbo");

//ADD 5PLAYERS TO BASKETBALL TEAM
    basketball.defaultTeam(p1);
    basketball.defaultTeam(p2);
    basketball.defaultTeam(p3);
    basketball.defaultTeam(p4);
    basketball.defaultTeam(p5);
    
//ADD ALL 7 TO THE SOCCER TEAM
    
    soccer.defaultTeam(p1);
    soccer.defaultTeam(p2);
    soccer.defaultTeam(p3);
    soccer.defaultTeam(p4);
    soccer.defaultTeam(p5);
    soccer.defaultTeam(p6);
    soccer.defaultTeam(p7);
    
//PRINT NAMES OF TEAM MEMBERS
    basketball.printAllNames();
    soccer.printAllNames();
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    basketball.printAllNames();

    delete p6;
    delete p7;
    soccer.printAllNames();

    return 0;

}


