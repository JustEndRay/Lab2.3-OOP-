#pragma once
#include <iostream>
#include <sstream>
#include <string>

#pragma pack(1)

using namespace std;

class LongLong
{
	long int Long1, Long2;
public:
	double GetLong1() const;
	double GetLong2() const;

	void SetLong1(double value);
	void SetLong2(double value);

	LongLong();
	LongLong(long int, long int);
	LongLong(const LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	friend LongLong operator - (LongLong&, LongLong&);
	friend bool operator == (const LongLong&, const LongLong&);
	friend bool operator != (const LongLong&, const LongLong&);
};

