#include <iostream>
using namespace std;
main()
{
 int MB;
 int bites;
 int conversion;
 cout <<"enter megabites = " ;
 cin >> MB;
 conversion = MB *1024 *1024 *8;
 cout << " Megabites into Bites are = "<< conversion;
 }