#include <map>
#include <iostream>
using namespace std;


int main()
{
	std::multimap<int, int> myMap;
	int n, m;
	int first, second;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> first;
		cin.ignore();
		cin >> second;
		if (first <= second)
			myMap.insert({ first,second });
		else
			myMap.insert({ second,first });
	}
	//判断相邻的两个是否不能一起上
	for (auto itr = myMap.begin(); itr != myMap.end(); ++itr)
	{
		if ((itr->first-1)/ 2 == (itr->second-1) / 2)
		{
			cout << "no" << endl;
			return 0;
		}
	}
	//顺序查找下去
	cout << "yes" << endl;
	return 0;

}