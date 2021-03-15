#include "LongLong.h"
double LongLong::GetLong1() const { return Long1; }
double LongLong::GetLong2() const { return Long2; }

void LongLong::SetLong1(double value) { Long1 = value; }
void LongLong::SetLong2(double value) { Long2 = value; }

LongLong::LongLong() { Long1 = 0, Long2 = 0; }
LongLong::LongLong(long int Long1 = 0, long int Long2 = 0)
{
	this->Long1 = Long1;
	this->Long2 = Long2;
}
LongLong::LongLong(const LongLong& A)
{
	Long1 = A.GetLong1();
	Long2 = A.GetLong2();
}

LongLong& LongLong::operator = (const LongLong& A)
{
	Long1 = A.Long1;
	Long2 = A.Long2;

	return *this;
}
ostream& operator << (ostream& out, const LongLong& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong& A)
{
	cout << "Enter a first part of value(Long1): "; in >> A.Long1;
	cout << "Enter a second part of value(Long2): "; in >> A.Long2;
	return in;
}
LongLong::operator string() const
{
	stringstream ss;
	ss << "Long1 = " << Long1 << endl;
	ss << "Long2 = " << Long2 << endl;
	ss << "Value =" << Long1<< Long2 << endl;
	return ss.str();
}

LongLong& LongLong::operator ++ ()
{
	Long1++;
	return *this;
}
LongLong& LongLong::operator -- ()
{
	Long1--;
	return *this;
}
LongLong LongLong::operator ++ (int)
{
	LongLong t(*this);
	Long1++;
	return t;
}
LongLong LongLong::operator -- (int)
{
	LongLong t(*this);
	Long1--;
	return t;
}

LongLong operator -(LongLong& A, LongLong& B)
{
	LongLong t(A.Long1 - B.Long1, A.Long2 - B.Long2);
	return t;
}
bool operator == (const LongLong& A, const LongLong& B)
{
	if (A.Long1 == B.Long1 && A.Long2 == B.Long2)
		return 1;
	else
		return 0;
}
bool operator != (const LongLong& A, const LongLong& B)
{
	return !(A == B);
}