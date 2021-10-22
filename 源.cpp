#include<iostream>
#include<vector>
using namespace std;
int main() {
	//char array[5];
	//cin >> array;
	///*for (int i = 0; i < 5; i++)
	//{
	//	cin >> array[i];
	//}
	//for (int i = 0; i < 5; i++)
	//{*/
	//	cout << array << endl;
	///*}*/
	int length;
	cout << "输入数组长度";
	cin >> length;
	vector<int>array(length);
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}
