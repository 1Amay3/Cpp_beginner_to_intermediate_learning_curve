/*
Exercise 15: Comparing Arrays
Practice Problem: Write a function named compare_arrays that takes two integer arrays 
and their size as input. The function should use pointers to check if the two arrays 
are identical (i.e., they have the same size and the same elements in the same order). 
Return true if they are identical, and false otherwise.

Given:

int a1[] = {1, 2, 3, 4};
int a2[] = {1, 2, 3, 4};
int a3[] = {1, 2, 9, 4};
Expected Output:

Array a1 and a2 are identical.
Array a1 and a3 are NOT identical.
*/

#include <iostream>
using namespace std;
bool compare_arrays(int arr1[],int arr2[],int size){
    int* runner = arr1;
    int* chaser = arr2;    
    
    for (int i=0;i<size;i++){
        if (*runner!=*chaser){
            //cout<<*runner<<"+"<<*chaser<<endl;
            return false;
        }
        runner++;
        chaser++;
    }

    return true;
}

int main(){

    int a1[] = {1, 2, 3, 4};
    int a2[] = {1, 2, 3, 4};
    int a3[] = {1, 2, 9, 4};

    if(compare_arrays(a1,a2,sizeof(a1)/sizeof(a1[0]))){
        cout<<"Array a1 and a2 are identical"<<endl;
    }else{
        cout<<"Array a1 and a2 are not identical"<<endl;
    }
    if(compare_arrays(a1,a3,sizeof(a1)/sizeof(a1[0]))){
        cout<<"Array a1 and a3 are identical"<<endl;
    }else{
        cout<<"Array a1 and a3 are not identical"<<endl;
    }

    return 0;
}
