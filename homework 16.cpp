//KINGSLEY OTTO
// HOMEWORK 16
//Write a C++ program that inputs an annual investment amount , the interest
//rate earned every year, and the number of years. The program outputs the
//final value of the investment assuming the same amount is invested at the
//beginning of each year and the interest is compounded annually.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float princiPal, interestR, yearS, investV;
    cout<< " This program calculates final investment value " << endl;
    cout <<" \n Please enter an annual investment amount : " << endl;
    cin >> princiPal;
    cout << " \n Please enter your investment rate : " << endl;
    cin >> interestR;
    cout << " \n Please enter the number of years : " << endl;
    cin >> yearS;
    interestR = interestR/ 100;
    cout<< interestR <<endl;
    
    investV = princiPal*( 1 + interestR * yearS);
    
    cout << " \n Your final investment value is " << investV << endl; 
    
}
     
