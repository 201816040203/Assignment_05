#include<iostream>
#include"DoubleSubscriptedArray.h"
#include<stdexcept>
#include<iomanip>
using namespace std;


DoubleSubscriptedArray::DoubleSubscriptedArray(int row ,int column)
	:rows(row>0? row:throw invalid_argument("Row must be greater than 0")),
	columns(column>0?column:throw invalid_argument("Column must be greater than 0")),
	ptr(new int[rows*columns])
{
	for (size_t i = 0; i < rows * columns; ++i)
		ptr[i] = 0;
 }
 DoubleSubscriptedArray::~DoubleSubscriptedArray()
 {
     delete []ptr;
 }
int DoubleSubscriptedArray::operator()(int row, int column) const
{
	if(row >= rows)
		throw out_of_range("Row out of range");
	if(column >= columns)
		throw out_of_range("Column out of range");
	return ptr[row  * columns ];
}

const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right)
{
	if (&right != this)
	{
		if (rows * columns != right.rows*right.columns)
		{
			delete[] ptr;
			rows = right.rows;
			columns = right.columns;
			ptr = new int[rows * columns];
		}

		for (size_t i = 0; i < rows * columns; ++i)
			ptr[i] = right.ptr[i];
	}

	return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) 
{
	if (rows != right.rows)
		return false;
	if (columns != right.columns)
		return false;
	for (size_t i = 0; i < rows*columns;++i)
		if (ptr[i] != right.ptr[i])
			return false;

			return true;
}
ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a)
{
	for (size_t i = 0; i < a.columns * a.rows; ++i)
	{
		output << "   " << a.ptr[i];
		if ((i + 1) % 5 == 0)
			output << endl;
	}
	if (a.columns * a.rows % 5   != 0)
		output << endl;
	return output;
}

istream &operator>>(istream &input, DoubleSubscriptedArray& a)
{
	for (size_t i = 0; i < a.columns*a.rows; ++i)
		input >> a.ptr[i];
	return input;
}
