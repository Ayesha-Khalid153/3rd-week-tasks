#include <iostream>
using namespace std;
main()
{ 
int sizeOfFerBagInPounds;
int AreaPerFeet;
int costOfBag;
int costOfBagPerPound;
int AreaPerSquareFeet;
cout <<"enter bag size in pounds = ";
cin >>sizeOfFerBagInPounds;
cout <<"enter cost of bad = " ;
cin >>costOfBag;
cout <<" enter area covered by each bag in square feet = ";
cin >>AreaPerFeet;
AreaPerSquareFeet = costOfBag/AreaPerFeet;
costOfBagPerPound = costOfBag/sizeOfFerBagInPounds;
cout <<"Cost of fertilizer per pound= "<<costOfBagPerPound<<endl;
cout <<"cost of fertilizing the area per square feet= "<<AreaPerSquareFeet<<endl;
}