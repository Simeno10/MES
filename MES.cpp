// MES.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;
struct node {
    double x, y;
};
struct element {
    int ID[4];
};
struct Globaldata{
    int H, W, nH, nW, nE, nN;
};
int main()
{
	Globaldata x;
	ifstream odczyt("dane.txt");

    odczyt >> x.H>>x.W>>x.nH>>x.nW;

	element pierwszy;
	pierwszy.ID[0] = 1;
	pierwszy.ID[1] = pierwszy.ID[0]+x.nH;
	pierwszy.ID[2] = pierwszy.ID[1]+1;
	pierwszy.ID[3] = pierwszy.ID[0]+1;

	odczyt.close(); 

	cout << pierwszy.ID[2];


	return 0;
}


