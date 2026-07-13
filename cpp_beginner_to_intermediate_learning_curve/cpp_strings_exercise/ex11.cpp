/*
Exercise 11: Word Count
Practice Problem: Write a C++ program that calculates the total number of words present 
in the string. Assume words are separated by one or more whitespace characters.

Given:

std::string str = "PYnative c++ Exercises";
Expected Output:

sentence: PYnative c++ Exercises
Total word count: 3
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "PYnative c+ + Exercis es";
    cout<<"Sentense: "<<str;
    bool word = false;
    int wc=0;

    for(char c:str){
        if (!word && !isspace(c)){
            wc+=1;
            word=true;

        }else if(word && isspace(c)){
            {word=false;
        }
    }
        else
        {
            continue;
        }
    }
    cout<<"Totral word cout: "<<wc;
    return 0;
}