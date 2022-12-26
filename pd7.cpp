#include<iostream>
using namespace std;
main ()
{
string movieName;
int adultTicketPrice;
int childTicketPrice;
int noOfAdultTicketsSold;
int noOfchildTicketsSold;
int PerOfDonation;
int totalSoldTickets;
int donation;
int remainingAmount;
cout <<"enter movie name= ";
cin >>movieName;
cout <<"enter adult ticket price= ";
cin>>adultTicketPrice;
cout <<"enter child ticket price= ";
cin >>childTicketPrice;
cout <<"enter no of adult tickets sold= ";
cin >>noOfAdultTicketsSold;
cout <<"enter no of child tickets sold= ";
cin >>noOfchildTicketsSold;
cout <<"enter percentage to be donated= ";
cin >>PerOfDonation;
totalSoldTickets=(adultTicketPrice* noOfAdultTicketsSold)+(childTicketPrice*noOfchildTicketsSold);
donation =(totalSoldTickets/100)*10 ;
remainingAmount=totalSoldTickets - donation ;
cout <<"total amount generated = " <<totalSoldTickets<<endl;
cout <<"amount after donation = " <<remainingAmount;
}
