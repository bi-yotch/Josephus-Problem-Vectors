// JosephusProblemVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;

	return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	int n = 9; //Number of people

	//for (int n = 2; n <= 50; n++)
		for (int i = n; i > 1; i--)
			if (isPowerOfTwo(i))
			{
				cout << "Safe position for " << n << ": " << 2 * (n % i) + 1 << endl << endl;
				break;
			}

	//for (int n = 2; n <= 20; n++)
	{
		vector<int> v;
		for (int i = 1; i <= n; i++)
			v.push_back(i);

		auto i = v.begin();
		while (v.size() > 1)
		{
			if (i == v.end() - 1)
			{
				cout << *i << " points to " << *v.begin() << "    ";
				v.erase(v.begin());
				i = v.begin();
			}
			else
			{
				cout << *i << " points to " << *(i + 1) << "    ";
				v.erase(i + 1);

				//Incrementing
				if (i + 1 == v.end())
					i = v.begin();
				else
					i += 1;
			}

			//Displaying the remaining elements
			for (int k = 0; k < v.size(); k++)
				cout << v.at(k) << " ";
			cout << endl;
		}

		cout << "\nSafe position: " << v.at(0) << endl << endl;
	}
	
}