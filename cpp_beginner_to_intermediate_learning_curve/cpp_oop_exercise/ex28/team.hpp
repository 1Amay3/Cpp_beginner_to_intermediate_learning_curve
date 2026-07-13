/*
Exercise 28: One-to-Many Relationship (Composition Choice)
Practice Problem: Implement a Team class that holds multiple Player objects (using composition). The Player class should be simple (name, number). Use a std::vector<Player> inside the Team class. Implement a Team constructor that initializes a list of players.

Expected Output:

Player Mike created.
Player Sara created.
Player Sara destroyed.
Player Mike destroyed.

Team The Mavericks formed.

--- The Mavericks Roster ---
Mike (#10)
Sara (#7)

Team The Mavericks disbanded.
Player Mike destroyed.
Player Sara destroyed.
Player Mike destroyed.
Player Sara destroyed.
*/

#include <iostream>
#include <string>
using namespace std;
#include "player.hpp"
#include <vector>

class Team{
    private:
        vector<Player> roster;
        string name;
    public:
        Team(string a,vector<Player> xyz):name(a),roster(xyz){
            cout<<"Team "<<name<<" formed.\n";
            for(auto& x:roster){
                x.show_player();
            }
        }
        ~Team(){
            cout<<"Team "<<name<<" disbanded.\n";
        }

};

