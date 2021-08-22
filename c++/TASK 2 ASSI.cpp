//MUSTABSHIRA FATIMA
// BSEF20A009
#include<iostream>
using namespace std;
int main()
{
	int width, height;
	cout << "Enter number of rows and colums";

	cin >> width;
	cin >> height;
	for (int counter= 1; counter <= width; counter++)
	{
		for (int j = 1; j <= height; j++)
		{
			if (counter == 1 || counter == width || j == 1 || j == height)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}