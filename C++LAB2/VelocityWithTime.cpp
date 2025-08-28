//@author: Jacob Overton
//@date: 8/27/2025
//@purpose: This program prints the velocity with the quotient of distance/time

#include <iostream> // required for inputs and outputs
using namespace std; //std library for cin/cout functions


int main ()
{

int x= 400; // distance
int t= 4; // time

int v= x/t ; // distance formula (flipped to give velocity)

cout<< " The velocity is " << v << " miles per hour (mph)" << endl; 

}