#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	int next;

	while(1)
	{
		cin >> next;
		if(next < 0)
			break;

		v.push_back(next);
		cout << "size of v : " << v.size() << endl;
	}

	for(int item : v)
	{
		cout << item << endl;
	}


	return 0;
}