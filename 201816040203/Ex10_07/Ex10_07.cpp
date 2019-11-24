#include<iostream>
#include"DoubleSubscriptedArray.h"
#include<stdexcept>
#include<iomanip>
using namespace std;

int main()
{
	DoubleSubscriptedArray chessBorard(3,5);
	cout << "请输入3*5个数据\n";
	cin>>chessBorard;
	cout<<chessBorard<<endl;
	cout<<"第1行第3列为:";
	cout<<chessBorard(1,3);
}
