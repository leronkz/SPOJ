#include <iostream>
using namespace std;

int main() {
	char dwa = (int)'Z' - (int)'(';
	char zero = (int)'X' - (int)'(';
	char jeden = (int)'Z' - (int)')';
	char cztery = (int)'a' - (int)'-';
	cout<<"Mundial "<<dwa<<zero<<jeden<<cztery<<endl;
}
