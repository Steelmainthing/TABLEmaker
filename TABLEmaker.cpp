#include <iostream>

using namespace std;

int main()
{
	int N;
	

	cout << "Enter a number = ";
	cin >> N;

	for (int i = 0; i <= 10; i++)
	{
		cout << N << " X " << i << " = " << N*i << endl;
	}

	return 0;
}