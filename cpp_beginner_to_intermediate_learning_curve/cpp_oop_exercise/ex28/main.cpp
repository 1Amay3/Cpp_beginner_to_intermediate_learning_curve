#include "team.hpp"
#include <string>
using namespace std;

int main(){
    vector<Player> barca = {Player("Pedri",8), Player("Lamine",10),Player("Raphinha",11),Player("Garcia",1)};
    Team t1("Barcelona",barca);
    return 0;
}