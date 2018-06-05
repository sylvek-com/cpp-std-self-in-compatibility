#include <stdio.h>
#include <string>
using namespace std;
extern string greet(string,string);
int main(int ac,char **av)
{
	string h("Hello");
	string w("world");
	string hw(greet(h,w));
	puts(hw.c_str());
	return 0;
}
