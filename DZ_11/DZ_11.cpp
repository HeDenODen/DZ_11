#include <iostream>
using namespace std;

int main()
{
    string userChoice;
    cout << "Enter letter A-K: ";
    cin >> userChoice;
    const int N = 10;
	if (userChoice == "A" || userChoice == "a") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "B" || userChoice == "b") {
		for (int i = 0;
			i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "C" || userChoice == "c") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j && j + i <= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "D" || userChoice == "d") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j && j + i >= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "E" || userChoice == "e") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j && j + i >= N - 1)
					cout << "*";
				else
					cout << " ";
				if (i <= j && j + i <= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "F" || userChoice == "f") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j && j + i <= N - 1)
					cout << "*";
				else
					cout << " ";
				if (i <= j && j + i >= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "G" || userChoice == "g") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j && j + i <= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "H" || userChoice == "h") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j && j + i >= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "I" || userChoice == "i") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (j + i <= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "J" || userChoice == "j") {
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (j + i >= N - 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (userChoice == "K" || userChoice == "k") {
		cout << "See you soon!" << "\n\n";
	}
}

