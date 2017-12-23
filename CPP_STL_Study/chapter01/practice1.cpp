#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main() {
	string data[]{ "one", "two", "three", "four" };

	for (auto iter = begin(data); iter != end(data); ++iter)
		cout << *iter << endl;

	return 0;
}