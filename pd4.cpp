#include <iostream>
using namespace std;
main()
{
string name;
int sub1marks;
int sub2marks;
int sub3marks;
int sub4marks;
int sub5marks;
int obtainedMarks;
int totalPercentage;
int totalMarks;
cout <<"enter your name= ";
cin>> name; 
cout  <<"enter subject 1 marks= " ;
cin >> sub1marks;
cout <<"enter subject 2 marks= ";
cin >> sub2marks;
cout << "enter sub 3 marks= ";
cin >> sub3marks;
cout <<"enter sub4marks= ";
cin >> sub4marks;
cout <<"enter sub 5 marks= ";
cin >> sub5marks;
totalMarks = sub1marks +sub2marks+sub3marks+sub4marks+sub5marks;
totalPercentage= (totalMarks*100)/500;
cout <<"your totatl percentage is= "<<totalPercentage;
}