/*
Exercise 17: Count Specific Word
Practice Problem: Write a program that takes a sentence and a specific target word (substring) 
as input. The program should count how many times that exact whole word appears in the sentence. 
The search should be case-sensitive.

Given:

std::string sentence = "The cat sat on the mat. Cat, cat.";
Expected Output:

The word 'cat' appears 2 times.
*/
#include <iostream>
#include <string>
using namespace std;

int count(string big, string small){
    size_t check=0;    
    int c=0;
    while(check != string::npos){
        check=big.find(small,check+1);
        //cout<<"big";
        if(check!=string::npos && !isalpha(big[check-1]) && !isalpha(big[check+small.size()])){
            c++;
        }
    }
    return c;
}

int main(){

    string sentence = "The cat sat on the mat. Cat, cat.";
    string small = "cat";
    cout<<"The word "<<small<<" appears "<<count(sentence,small)<<" times"<<endl;
    return 0;
}