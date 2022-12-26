#include<iostream>
using namespace std;
main()
{
int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout <<"enter the initial velocity: ";
cin >> initialVelocity;
cout <<"enter the time: ";
cin>>time;
cout <<" enter the accaleration:= ";
cin >> acceleration;
finalVelocity = (acceleration * time) + initialVelocity;
cout <<"your final velocity is = " << finalVelocity;
}