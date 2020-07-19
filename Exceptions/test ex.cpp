//#include <iostream>
//using namespace std;
//
//class DivZero : public runtime_error
//{
//public :
//	DivZero(char * mes) : runtime_error(mes)
//	{}
//};
//
//double Div(double a, double b) // throw(runtime_error, DivZero) // noexcept(false)
//{
//	try
//	{
//		if (b == 0)
//			throw  DivZero("Error! Div by 0!\n");
//		return a / b;
//	}
//	catch (exception  & e)
//	{
//		cout << "In function Div() caught and rethrow: " << typeid(e).name() << endl;
//		throw; 
//	}
//		
//
//}
//int main()
//{
//	
//	try
//	{
//		
//		cout << Div(2, 0) << endl;
//	}
//	catch (DivZero & e)
//	{
//		cout << "In function main() caught : " << typeid(e).name() << endl;
//
//		cout << e.what() << endl;
//	}
//
//}
//
