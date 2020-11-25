#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int no_of_cols = 5;
	int no_of_rows = 10;
	int initial_value = 0;

	vector<vector<int>> matrix;
	matrix.resize(no_of_rows, vector<int>(no_of_cols, initial_value));

	// Save to matrix.
	matrix[9][2] = 5;

	for(int i=0; i<no_of_rows; i++)
	{
		for(int j=0; j<no_of_cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}