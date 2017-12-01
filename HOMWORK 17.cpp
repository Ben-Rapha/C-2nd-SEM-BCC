// KINGSLEY OTTO
// HOMEWORK 17
//Write a C++ function named l inear search that accepts an integer value to
//search for, an array of integers, and the number of integers in the array. Using
//the linear search algorithm, the function must return the position of the first
//parameter in the array. If the first parameter is not in the array, the function
//returns - 1 .

#include<iostream>
using namespace std;

int main() {
	
cout<<"Enter The Size Of Array:  ";
int size;
cin>>size;

int array[size], key,i;

// Taking Input In Array
 for(int j=0;j<size;j++){
 	
 cout<<"Enter "<<j<<" Element: ";
 cin>>array[j];
}

//Your Entered Array Is
 for(int a=0;a<size;a++){
   cout<<"array[ "<<a<<" ]  =  ";
   cout<<array[a]<<endl;
 }
   cout <<"The first position of the array is: " <<array[0]<<endl;

   return -1;
}
