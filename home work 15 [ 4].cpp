/* KINGSLEY OTTO
CSI 33
HOMEWORK 15 5
Write a C++ program that asks a user to enter the coefficients a, b, and c 
of a quadratic equation a * x2 + b * x + c = 0 and outputs the solution(s). 
The program should indicate if there are no real solutions.  */



 # include <iostream>
 # include <math.h>
 using namespace std;
 
 
 
 int main(){
 	cout << "This program computes the solutions to a quadratic equation\n";
 	float a, b, c , determinant, soLution1, soLution2;
 	cout << "\nThe quadratic is in the form  a* x^2 + b*x + c = 0";
	cout <<"\nPlease enter the coefficient a:  ";
	cin >> a;
	cout <<"\nPlease enter the coefficient b:  ";
	cin >> b;
	cout <<"\nPlease enter the coefficient c:  ";
	cin >> c;
	
	determinant  = b* b -4 * a *c;
	if (determinant>0){
		soLution1 = (-b+sqrt(determinant))/(2*a);
		soLution2 = (-b - sqrt(determinant))/(2*a);
		cout << "\nThe roots are " << soLution1 << " and "<< soLution2<< endl;
	 }
 	else if (determinant == 0){
 		soLution1 = soLution2 = -b/(2*a);
 		cout <<"\nThe roots are " << soLution1<< " and"<< soLution2<< endl;
	 }
 	else {
 		cout <<"\n There are no real soloutions to this quadratic equation" <<endl;
	 }
 	return 0;
 }


