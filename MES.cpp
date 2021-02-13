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
    //int a;
	Globaldata x;
	ifstream odczyt("dane.txt");

	odczyt >> x.H;

	//odczyt.close(); 

	//node d{5,7};

	cout << x.H;


	return 0;
}


