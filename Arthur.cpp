#include"Arthur.h"
//#include"info.h"
using namespace std;

void Arthur::get()
{
	system("cls");
	ofstream out("Arthur.txt", ios::app | ios::binary);
	a1.get();
	out.write((char*)&a1, sizeof(info));
	out.close();
	cout << "yours entry has been saved";
	_getch();
	menu();
}
void Arthur::show()
{
	ifstream in("Arthur.txt");
	if (!in == NULL)
	{
		cout << "\n\nNo data in the file ";
		cout << "\n\n\t\tpress any key to continue:";
		_getch();
		menu();
	}
	else {
		while (!in.eof())
		{
			in.read((char*)&a1, sizeof(a1));
			a1.show();
		}
		in.close();
		_getch();
		menu();
	}
}