#include<iostream>
using namespace std;
main()
{
 float pound;
 float standard=0.45;
 int kilogram;
 int conversion;
 cout << "enter pounds: " ;
 cin >> pound;
 conversion = pound / standard;
 cout << "in kilograms: " << conversion;
}