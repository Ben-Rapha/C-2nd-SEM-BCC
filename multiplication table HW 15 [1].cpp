/* KINGSLEY OTTO
CSI 33 
HOMEWORK 15
Write a C++ program that prints the multiplication table for all possible
products of the numbers 0 through 9 */

# include <iostream>
using namespace std;

int main(){
	cout<<"\nThis program tabulates a multiplication table of products";
	cout <<"of numbers from 0 through 9";
	int outCome = 0;
	
	for (int a = 0; a < 10; ++a){
		
		for (int b = 0; b < 10; ++b){
			
			outCome = a * b;
			cout<< a <<" * "<< b << " = " << outCome <<"\n";
		}
	cout<< endl;
	}
	
}


