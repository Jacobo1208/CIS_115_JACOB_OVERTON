//@author: Jacob Overton
//@date: 8/27/2025
//@purpose: This program prints force output of the function

#include <iostream> // required for inputs and outputs
using namespace std; //std library for cin/cout functions


int main()
{

int m= 10;         
double a= 9.81;      //double is used to store a result in a double variable 

double F= m * a ; // Force calculation  

cout << "The force output is " << F << " Newtons (N)"  << endl;

}