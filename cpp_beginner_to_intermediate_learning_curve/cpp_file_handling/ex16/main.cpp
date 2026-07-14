/*
Exercise 16: Log File Creator
Practice Problem: Write a function named write_log(const std::string& message) 
that takes a string message and appends it to a file named system.log. 
The function must prepend the message with the current time and date in a simple format before writing it to the file.

Expected Output:

Log entries written to system.log

system.log Content:
[2025-11-01 06:54:41] Application started successfully.
[2025-11-01 06:54:41] User accessed database.
[2025-11-01 06:54:41] Error: Invalid login attempt detected.

. Specifically, use std::time(), std::localtime(), and std::put_time() (or std::strftime()
*/

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void write_log(const string& message){
    ofstream logger("system.log",ios::app);
    if(!logger){
        cerr<<"Error opening file. Unable to log status.\n";
        return;
    }
    time_t now = time(nullptr);
    tm* local = localtime(&now);
    char buffer[20];
    strftime(buffer,sizeof(buffer),"%Y-%m-%d %H:%M:%S",local);


    logger<<"[" <<buffer<<"]" <<message<<"\n";
    logger.close();
    return;
}

int main(){
    write_log("Application successfully started.");
    write_log("User accessed database.");
    write_log("Error: invalid login attempt.");
    cout<<"system.log content: \n";
    ifstream read_f("system.log");
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    string line;
    while(getline(read_f,line)){
        cout<<line<<"\n";
    }
    read_f.close();
    return 0;
}