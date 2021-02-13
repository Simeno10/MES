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
    int H=0, W=0, nH=0, nW=0, nN=0;
	const int nE=15;
};
int main()
{
	Globaldata x;
	ifstream odczyt("dane.txt");

    odczyt >> x.H>>x.W>>x.nH>>x.nW;
	//cout << x.nE << endl;

	const int a = 15;

	element Elem[a];
	//int licznik=0;
	
	for (int i = 0; i < a; i++) {
		if(i==0)
		{
			Elem[i].ID[0] = 1;
		}
		else if(i%5==0)
		{
			Elem[i].ID[0] = Elem[i - 1].ID[0] + 2;
		}
		else
		{
			Elem[i].ID[0] = Elem[i-1].ID[0]+1;
		}
		Elem[i].ID[1] = Elem[i].ID[0] + x.nH;
		Elem[i].ID[2] = Elem[i].ID[1] + 1;
		Elem[i].ID[3] = Elem[i].ID[0] + 1;
	}

	odczyt.close(); 

	cout << Elem[6].ID[2];


	return 0;
}


