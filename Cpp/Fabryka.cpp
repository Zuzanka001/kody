/*
 * Fabryka.cpp

 */


#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
	int sw;
	float p; 
	float so;
	sw = 0;
	p = 0;
	so = (sw = (p * sw)/100);
	cout << "Podaj sw: " << endl;
	cin >> sw;
	cout << "Podaj p: ";
	cin >> p;
	cout << "so: " << (p * sw)/100 << endl;
	
	
	return 0;
}

