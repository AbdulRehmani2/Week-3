#include <iostream>

using namespace std;

main()
{
string name;
float matric;
float pmatric;
float ematric;
float inter;
float pinter;
float einter;
float ecat;
float pecat;
float eecat;
float aggregate;

cout << "Enter the name : ";
cin >> name;

cout << "Enter the matric marks : ";
cin >> matric;

cout << "Enter the inter marks : ";
cin >> inter;

cout << "Enter the ecat marks : ";
cin >> ecat;

pmatric = (matric/1100)*100; 
pinter = (inter/550)*100;
pecat = (ecat/400)*100;
ematric = (pmatric*10)/100;
einter = (pinter*40)/100;
eecat = (pecat*50)/100;

aggregate = ematric + einter + eecat;

cout << "The aggregate is : " << aggregate;
}