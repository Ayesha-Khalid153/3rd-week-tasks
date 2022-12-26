#include <iostream>
using namespace std;
main()
{
 float charge;
 int time;
 int current;
 cout << "enter the charge = ";
 cin >> charge;
 cout << "enter the time = " ;
 cin >> time;
 current = charge / time;
 cout << "The current is = " << current;
}