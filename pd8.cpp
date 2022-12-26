#include<iostream>
using namespace std;
main ()
{
float vegPricePerKg;
float fruitPricePerKg;
int totalKgOfVeg;
int totalKgOfFruit;
int totalEarning;
int exchangeRate;
cout <<"enter veg price per kg = ";
cin >>  vegPricePerKg;
cout <<"enter fruit price per kg = ";
cin >>fruitPricePerKg;
cout <<"enter total kgs of veg = ";
cin >>totalKgOfVeg;
cout <<"enter total kg of fruits = ";
cin >>totalKgOfFruit;
totalEarning =vegPricePerKg+fruitPricePerKg+totalKgOfVeg+totalKgOfFruit;
exchangeRate =totalEarning * 0.515;
cout <<"earning of all fruits in RS is = " << exchangeRate;
}