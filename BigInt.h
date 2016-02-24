#include <vector>
#include <string>

using namespace std;

class BigInt {
private:
	vector<int> a;
	int sign;

public:
	BigInt();
	BigInt(long long v);
	BigInt(const string &s);
	void operator = (const BigInt &v);
	void operator = (long long v);
	BigInt operator + (const BigInt &v) const;
	BigInt operator - (const BigInt &v) const;
	void operator *= (int v);
	//BigInt operator *= (int v);
	BigInt operator * (int v) const;
	BigInt operator / (const BigInt &v) const;
	BigInt operator / (int v) const;
	BigInt operator % (const BigInt &v) const;
	void operator /= (int v);
	int operator % (int v) const;
	void operator += (const BigInt &v);
	void operator -= (const BigInt &v);
	void operator *= (const BigInt &v);
	void operator /= (const BigInt &v);
	bool operator < (const BigInt &v) const;
	bool operator > (const BigInt &v) const;
	bool operator <= (const BigInt &v) const;
	bool operator >= (const BigInt &v) const;
	bool operator == (const BigInt &v) const;
	bool operator != (const BigInt &v) const;
	void trim();
	bool isZero() const;
	BigInt operator - () const;
	BigInt abs() const;
	long long longValue() const;
	void read(const string &s);
	friend istream& operator >> (istream &stream, BigInt &v);
	friend ostream& operator << (ostream &stream, const BigInt &v);
	static vector<int> convert_base(const vector<int> &a, int old_digits, int new_digits);
	typedef vector<long long> vll;
	static vll karatsubaMultiply(const vll & a, const vll & b);
	BigInt operator * (const BigInt &v) const;
	friend pair<BigInt, BigInt> divmod(const BigInt &a1, const BigInt &b1);
	//static BigInt BigIntPow(const BigInt &v, long long a);
};

BigInt BigPow(const BigInt &v, long long a);
BigInt BigFactorial(const BigInt &v);
BigInt BigFlooredSqrt(const BigInt &v);
bool BigIsPrime(BigInt &v);
