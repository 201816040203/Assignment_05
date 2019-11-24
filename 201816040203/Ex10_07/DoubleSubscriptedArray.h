#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include<iostream>

using namespace std;
class DoubleSubscriptedArray
{
    friend ostream& operator<<(ostream&, const DoubleSubscriptedArray&);
	friend istream& operator>>(istream&, DoubleSubscriptedArray&);

public:
	explicit DoubleSubscriptedArray(int,int);
	~DoubleSubscriptedArray();
	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&);
	int operator()(int, int);
	bool operator==(const DoubleSubscriptedArray& right) const;
	bool operator!=(const DoubleSubscriptedArray& right) const;

private:
	size_t rows;
	size_t columns;
	int* ptr;
};
#endif
