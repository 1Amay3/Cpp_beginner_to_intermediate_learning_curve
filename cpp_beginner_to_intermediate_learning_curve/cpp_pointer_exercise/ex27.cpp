/*
Exercise 27: Finding a Substring
Practice Problem: Write a function named find_first_occurrence that mimics a simplified strstr.
It takes two char pointers: a source string and a target string (substring). 
It should search for the first occurrence of the target substring within the source string. 
If found, the function must return a pointer to the starting character of the match within 
the source string. If not found, return nullptr.


Given:

const char* main_str = "programming in c++ is fun";
const char* sub_str = "c++";
Expected Output:

Substring found starting at: c++ is fun
Source string starting from match: c++ is fun
*/

#include <iostream>
using namespace std;

const char* find_first_occurrence(const char big[],const char small[]){
    int len = 0;

    const char* check=small;
    while(*check != '\0'){   
        len++;
        check++;
    }
    //cout<<len;
    const char* runner = big;
    bool found=true;
    while(*runner!= '\0'){
        const char* j=runner;
        for(const char* i = small;i<small+len;i++){
            if (*i!=*j){
                found=false;
                break;
            }
            found=true;
            j++;

        }
        if(found){
        return runner;}

        runner++;
        
    }
        
    
    
    return nullptr;

}

int main(){
    const char* main_str = "programming in c++ is fun";
    const char* sub_str = "rog";
    cout<<find_first_occurrence(main_str,sub_str);
    return 0;
}