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
	//�ж����ڵ������Ƿ���һ����
	for (auto itr = myMap.begin(); itr != myMap.end(); ++itr)
	{
		if ((itr->first-1)/ 2 == (itr->second-1) / 2)
		{
			cout << "no" << endl;
			return 0;
		}
	}
	//˳�������ȥ
	cout << "yes" << endl;
	return 0;

}