#include <string>
#include <vector>
using namespace std;

#define AFTERX(x) X_##x
#define XAFTERX(x) AFTERX(x)
#define UNIQ_ID XAFTERX(__LINE__)

int main()
{
	int UNIQ_ID = 0;
	string UNIQ_ID = "hello";
	vector<string> UNIQ_ID = { "hello", "world" };
	vector<int> UNIQ_ID = { 1, 2, 3, 4 };
}
