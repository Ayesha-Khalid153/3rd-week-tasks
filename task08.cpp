#include <iostream>
using namespace std;
main()
{
 string name;
 float matricMarks;
 float matricPer;
 float interMarks;
 float interPer;
 float ecatMarks;
 float ecatPer;
 float result;
 float matricagg;
 float interagg;
 float ecatagg;
 cout << "enter your name = ";
 cin >> name;
 cout << "enter your matricMarks = " ;
 cin >> matricMarks;
 cout << "enter your interMarks = ";
 cin >> interMarks;
 cout << "enter your ecatMarks = " ;
 cin >> ecatMarks;
 matricPer = matricMarks / 1100 * 100;
 interPer = interMarks / 550 * 100;
 ecatPer = ecatMarks / 400 * 100;
 matricagg = matricPer * 0.1;
 interagg = interPer * 40 / 100;
 ecatagg = ecatPer * 0.5;
 
 result = matricagg + interagg + ecatagg ;
 cout << " your result is = " <<result;
}