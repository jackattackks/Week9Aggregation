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
    void setName(string N){name = N;}
    string getName(){return name;}
    Player(){name = "None";}
    Player(string N){name = N;}
};

//Team class created
class Team{
private:
    int player = 7;
    Player * ptrPlayer = new Player [player];
public:
    Team(){
        ptrPlayer[0].setName(" ");
        ptrPlayer[1].setName(" ");
        ptrPlayer[2].setName(" ");
        ptrPlayer[3].setName(" ");
        ptrPlayer[4].setName(" ");
        ptrPlayer[5].setName(" ");
        ptrPlayer[6].setName(" ");
    }
    
    void printAllNames(){
        for(int i=0; i <7; i++){
            cout << ptrPlayer[i].getName() << " ";
        }
    }
    
    void basketball(Player Name1, Player Name2, Player Name3, Player Name4, Player Name5){
        
        ptrPlayer[0].setName(Name1.getName());
        ptrPlayer[1].setName(Name2.getName());
        ptrPlayer[2].setName(Name3.getName());
        ptrPlayer[3].setName(Name4.getName());
        ptrPlayer[4].setName(Name5.getName());
        
    }
    
    void soccer(Player Name1, Player Name2, Player Name3, Player Name4, Player Name5, Player Name6, Player Name7){
        
        ptrPlayer[0].setName(Name1.getName());
        ptrPlayer[1].setName(Name2.getName());
        ptrPlayer[2].setName(Name3.getName());
        ptrPlayer[3].setName(Name4.getName());
        ptrPlayer[4].setName(Name5.getName());
        ptrPlayer[5].setName(Name6.getName());
        ptrPlayer[6].setName(Name7.getName());
        
    }
};

int main() {
    
    cout << "Name: Jackie Ocaña - Program week 9 - Date: March 28" << endl;
    cout << endl;
    
    //instantiate 7 player
    Player P1("George");
    Player * ptr1;
    ptr1 = &P1;
    cout << "Player 1: " << ptr1->getName() << endl;
    
    Player P2("Ivan");
    Player * ptr2;
    ptr2 = &P2;
    cout << "Player 2: " << ptr2->getName() << endl;
    
    Player P3("Hang");
    Player * ptr3;
    ptr3 = &P3;
    cout << "Player 3: " << ptr3->getName() << endl;
    
    Player P4("Tuyet");
    Player * ptr4;
    ptr4 = &P4;
    cout << "Player 4: " << ptr4->getName() << endl;
    
    Player P5;
    Player * ptr5;
    ptr5 = &P5;
    ptr5->setName("Sue");
    cout << "Player 5: " << ptr5->getName() << endl;
    
    Player P6;
    Player * ptr6;
    ptr6 = &P6;
    ptr6->setName("Victoria");
    cout << "Player 6: " << ptr6->getName() << endl;
    
    Player P7;
    Player * ptr7;
    ptr7 = &P7;
    ptr7->setName("Tumbo");
    cout << "Player 7: " << ptr7->getName() << endl;
    
    cout << endl;
    
    //PRINT NAMES OF TEAM MEMBERS, ADD ALL 7 TO THE SOCCER TEAM, ADD 5 TO BBALL
    cout<< "Members of the soccer team: " << endl;
    Team soccer;
    Team * ptrSoccer;
    ptrSoccer = &soccer;
    ptrSoccer->soccer(P1, P2, P3, P4, P5, P6, P7);
    ptrSoccer->printAllNames();
    cout << endl;
    
    cout << endl;
    cout<< "Members of the basketball team: " << endl;
    Team basketball;
    Team * ptrBasket;
    ptrBasket = &basketball;
    ptrBasket->basketball(P1, P2, P3, P4, P5);
    ptrBasket->printAllNames();
    cout << endl;
    
    ptrBasket = new Team;
    delete ptrBasket;
    
    cout << endl;
    cout<< "Current members of the basketball team: " << endl;
    ptrBasket->printAllNames();
    cout << endl;
    
    ptrSoccer = new Team;
    delete ptrSoccer;
    
    cout << endl;
    cout<< "Current members of the soccer team: " << endl;
    ptrSoccer->printAllNames();
    cout << endl;
    

    ptr1 = new Player;
    ptr2 = new Player;
    ptr3 = new Player;
    ptr4 = new Player;
    ptr5 = new Player;
    ptr6 = new Player;
    ptr7 = new Player;
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete ptr4;
    delete ptr5;
    delete ptr6;
    delete ptr7;
    
//    cout << "End program" << endl;
    return 0;

}


