#include <iostream>

using namespace std;

main()
{
int weight;
int days;
cout << "Weight that you want to lose : ";
cin >> weight;
days = weight * 15;
cout << "It will take you "<< days <<" days to lose " << weight << " KGs";
}