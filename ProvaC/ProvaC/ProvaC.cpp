// ProvaC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	while (true) {
		c++;
		cout << c << " ";
		if (c == 10)
			break;
	}
	cout << endl;
	system("PAUSE");
    return 0;
}

