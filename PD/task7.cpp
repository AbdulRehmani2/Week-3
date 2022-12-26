#include <iostream>

using namespace std;

main()
{
string mName;
int aTicket;
int cTicket;
int noATicket;
int noCTicket;
float donate;
float total;
float afterDonation;
int aMoney;
int cMoney;
cout << "Enter the name of the movie : ";
cin >> mName;
cout << "Enter the price of ticket for adults : ";
cin >> aTicket;
cout << "Enter the price of ticket for children : ";
cin >> cTicket;
cout << "Enter the number of adult tickets sold : ";
cin >> noATicket;
cout << "Enter the number of children tickets sold : ";
cin >> noCTicket;
cout << "Enter the percentage to donate : ";
cin >> donate;
aMoney = aTicket * noATicket;
cMoney = cTicket * noCTicket;
total = aMoney + cMoney;
afterDonation = total - (donate * total * 0.01);
cout << "Total amount generated : " << total << endl;
cout << "Amount after donation : " << afterDonation;

}