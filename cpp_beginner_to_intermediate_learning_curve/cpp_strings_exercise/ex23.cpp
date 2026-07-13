/*
Exercise 23: Combine First/Last Characters
Practice Problem: Write a program that accepts a list of strings (e.g., a vector of names) and generates a new string by taking the first character of the first string and the last character of the last string, then the first character of the second string and the last character of the second-to-last string, and so on, until the middle is reached.

Given:

std::vector<std::string> names = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};
Expected Output:

Names: Alpha, Beta, Gamma, Delta, Epsilon
Combined String: AnBaG
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){

    vector<string> names = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};
    int l = 0;
    int r = names.size()-1;
    string out = "";
    //cout<<l<<","<<r<<"\n";
    if(names.size()==0){
        cout<<"Empty array detected.";
        return 0;
    }
    //bool right = true;
    while(l<=r){
        //cout<<names[l];
        out+=names[l][0];
        //cout<<out<<"\n";
        l++;
        if(l<=r){
        
            out+=names[r].back();
           // cout<<out<<"\n";
            r--;
        }
    }
    cout<<"Names: ";
    for(int i =0;i<names.size();i++){
    if(i<names.size()-1){
        cout<<names[i]<<", ";
    }else{
        cout<<names[i]<<"\n";
    }
    }

    cout<<"Combined string: "<<out;
    return 0;
}