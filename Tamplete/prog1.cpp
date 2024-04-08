/*31.Write a program of to swap the two values using templates*/
#include <iostream>
using namespace std;
//template create
template <class T>
//function create
T swap(T a,T b )
{
	cout<<"before swap:"<<a<<" "<<b;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"After swap: "<<a<<" "<<b;
} 

int main()
{
//	function call
	swap(7,8);
	
	
}
