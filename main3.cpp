#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int array1[10];int array2[10];int array3[20];
    string str1;string str2;
    bool all;bool dec;
    getline(cin, str1);
	istringstream stream(str1);
	for (int i = 0; i < 10; i++)
	{
		if (stream >> array1[i])
		{
			if (i > 0 && (array1[i] <= array1[i+1]))
			{
				dec = true;
			}
		}
		else
		{
			all = true;
			break;
		}
	}
	getline(cin, str2);
	istringstream stream(str2);
	for (int i = 0; i < 10; i++)
	{
		if (stream >> array2[i])
		{
			if (i > 0 && (array2[i] <= array2[i+1]))
			{
				dec = true;
			}
		}
		else
		{
			all = true;
			break;
		}
		if (all)
	{
		cout << "An error has occurred while reading the input sequence.";
		return-1;
	}
	if (dec)
	{
		cout << "The input sequence must be non-decreasing.";
		return-1;
	}

	for (int j = 0; j < 20; j++)
	{
		if (j < 10) array3[j] = array1[j];
		else array3[j] = array2[j - 10];
	}
	for (int i = 0; i < 19 ; i++) 
	{
		for (int j = 0; j < 19-i ; j++)
		{
			if (array3[j] > array3[j + 1])
			{
				int x = array3[j];
				array3[j] = array3[j + 1];
				array3[j + 1] = x;
			}
		}
	}
	for (int j = 0; j < 20; j++)
	{
		cout << array3[j]<< " ";
	}
	return 0;
    }
}

