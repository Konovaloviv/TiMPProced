// Структура.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;
namespace simple_shapes {
	void Init(container &c);
	void Clear(container &c);
	plane* InPlane(plane &p, ifstream &ifst);
	traine* InTraine(traine &t, ifstream &ifst);
	Node* In(ifstream &ifst);
	void In(container &c, ifstream &ifst);
	void OutPlane(plane *p, ofstream &ofst);
	void Out(container &c, ofstream &ofst);
	void Out(Node *s, ofstream &ofst);
	int addlist(container &c, ifstream &ifst);
	void OutTraine(traine *t, ofstream &ofst);
	void Sort(container &c);

}
using namespace simple_shapes;
int main(int argc, char* argv[])
{
	int a;
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		system("pause");
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);	cout << "Start" << endl;
	setlocale(LC_ALL, "Russian");
	container c;
	Init(c);
	In(c, ifst);
	ofst << "Filled container. " << endl;

	Sort(c);

	Out(c, ofst);
	Clear(c);
	ofst << "Empty container. " << endl;
	Out(c, ofst);
	cout << "Stop" << endl;
	system("pause");
	cin >> a;
	return 0;
}
