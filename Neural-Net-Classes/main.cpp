#include <iostream>
#include <vector>
#include <typeinfo>
 

using  namespace std;

int main()
{
	vector<int> b;
	char k;

	cout << typeid(k).name() << endl;
	system("pause");
	return 0;
}