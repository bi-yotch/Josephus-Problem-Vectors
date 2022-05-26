// JosephusProblemVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

//Finds the largest 2^k value less than n. 
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;

	return (ceil(log2(n)) == floor(log2(n)));
	//Returns true when log2(n) is an integer

	//floor gives the smaller integer value
	//ceil gives the larger integer value
}

int main()
{
	int n = 9; //Number of people

	//for (int n = 2; n <= 50; n++)
	for (int i = n; i > 1; i--)
		if (isPowerOfTwo(i))
		{
			cout << "Safe position for a circle of " << n << " people: " << 2 * (n % i) + 1 << endl << endl;
			break;
		}

	//for (int n = 2; n <= 20; n++)
	{
		vector<int> v;
		
		//Filling the vector with positions 1 to n
		for (int i = 1; i <= n; i++)
			v.push_back(i);

		auto i = v.begin();
		while (v.size() > 1)
		{
			if (i == v.end() - 1)
			{
				cout << *i << " points to " << *v.begin() << "    ";
				//The person at the end of the vector will point to the person at the start of the vector
				
				v.erase(v.begin());
				i = v.begin(); //Next round

			}
			else
			{
				cout << *i << " points to " << *(i + 1) << "    ";
				v.erase(i + 1);

				if (i + 1 == v.end())
					i = v.begin();	//Next round
				else
					i += 1;
			}

			//Displaying the remaining people
			for (int k = 0; k < v.size(); k++)
				cout << v.at(k) << " ";
			cout << endl;

		}//while loop

		cout << "\nSafe position: " << v.at(0) << endl << endl;
	}

}
