#include <iostream>

using namespace std;

main()
{
float vPrice;
float fPrice;
int vKilo;
int fKilo;
float tCoins;
float Rps;
cout << "Enter the price per kg of vegetables : ";
cin >> vPrice;
cout << "Enter the price per kg of fruits : ";
cin >> fPrice;
cout << "Enter the no. of kilogram of vegetables sold : ";
cin >> vKilo;
cout << "Enter the no. of kilogram of friuts sold : ";
cin >>fKilo;
tCoins = (vPrice * vKilo) + (fPrice * fKilo);
Rps = tCoins / 1.94;
cout << "The total amount is : " << Rps; 

}