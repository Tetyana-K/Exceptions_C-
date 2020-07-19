#include <iostream>
#pragma warning (disable:4996)
using namespace std;
class Ex {

	enum {SIZE = 255};
	char errMessage[SIZE];

public:
	Ex(char* pc = "unknown error\n")
	{
		strcpy(errMessage, pc); 
		cout << "Ex ctor\n";	
	}
	void Print() const
	{
		cout << errMessage << endl;
	}
	Ex(const Ex & obj)
	{
		strcpy(errMessage, obj.errMessage);
		cout << "copy ctor Ex\n";
	}
	~Ex()
	{
		cout << "Ex destructor\n";	
	}
};
class DEx : public Ex{};
class StackObj {
	int no;
public:
	StackObj(int i = 0) : no (i) 
	{	
		cout << "StackObj "<< no << " ctor\n";	
	}
	~StackObj() 
	{
		cout << "StackObj " << no << " destructor\n";	
	}
};

void func2() {
	StackObj obj2(2);
	throw Ex("file not Exists\n");
}
void func1() {
	StackObj obj1(1);
	func2();
}
int mainRS() {
	
	try{
		StackObj obj0;
		try
		{
			func1();
		}
		catch (Ex & e)
		{
			e.Print();
			cout << "Inner catch\n";

		}
		/*catch(...) {
			cout << "...\n";
			}*/
	}
	catch (Ex e)
	{
		cout << "Otter catch\n";
	}
	return 0;
}