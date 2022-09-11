/*----------------------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------------------------------------------------------------*/
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"
inline void set_io()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen(INPUT_FILE, "r", stdin);
	freopen(OUTPUT_FILE, "w", stdout);
#endif
#ifdef EXTENSION
#include "extension.cpp"
#endif
}
#define get_bit(a, n) ((a) >> (n)&1)
int count_test_case = 0;
#define print_case(result) cout << "Case #" << count_test_case++ << ": " << result << endl;
template <class T>
std::istream &operator>>(std::istream &in_stream, vector<T> &data)
{
	for (T &i : data)
		in_stream >> i;
	return in_stream;
}
/*----------------------------------------------------------------------------------------*/
inline void solve()
{
	vector<int> a{1, 2, 3, 4, 5};
}
int main()
{
	set_io();
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
