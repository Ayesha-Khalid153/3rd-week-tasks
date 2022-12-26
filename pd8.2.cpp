#include<iostream>
using namespace std;
main ()
{ 
int fourDigits;
int remain1;
int remain2;
int remain3;
int remain4;
int total;
int q1;
int q2;
int q3;
cout <<"enter 4 digits number =";
cin  >>fourDigits;
remain1=fourDigits % 10;
q1= fourDigits / 10;
remain2 =q1 % 10;
q2= q1 / 10;
remain3= q2  % 10;
q3= q2 / 10;
remain4 =q3;
total=remain1 + remain2 + remain3 +remain4;
cout <<"sum of 4 digits is = "<< total;
}