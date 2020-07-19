//#include<fstream>
//#include<iostream>
//#include<conio.h>
//
//
//using namespace std;
//// int main()
////{
////cout<<errno<<endl;
////ifstream ofs("c:\\dos\\sss.dat");
////cout<<errno<<endl;
////char buf[80];
////cout << strerror_s(buf, errno) << endl;
////cout << buf << endl;
//////текстове пояснення помилки
////return 0;
////} 
//class IndexOutOfRangeException : public exception
//{
//public:
//	IndexOutOfRangeException(const char * message): exception(message){} 
//
//};
//class BigNumberException : public exception
//{
//public:
//	BigNumberException(const char * message): exception(message){ }
//
//
//};
//class ZeroException : public exception
//{
//public:
//	ZeroException(const char * message): exception(message){ }
//};
//
//double Div(double a, double b);// throw();
//
//
//
//int main()
//{
//	//cout << Div(2, 0) << endl;
//
//	double a, b, res;
//
//
//	while(cout << "\t\tEnter 2 numbers :\n", cin >> a >> b)
//	{
//		try
//		{
//			res = Div(a, b);
//			cout << "result is " << res << "\n\n";
//
//		}
//		catch(BigNumberException& e)
//		{
//			cout << "Ups.. Something happend!\nMessage: " << e.what() << endl;
//		}
//		catch(ZeroException& e)
//		{
//			cout << "Ups.. Something happend!\nMessage: " << e.what() << endl;
//		}
//		catch(...)
//		{
//			cout << "Unexpected event!\n";
//		}
//		cout << "\n";
//	/*	_getch();*/
//	}
//	return 0;
//}
//
//double Div(double a, double b) //throw()
//{
//
//	if(!b)
//	{
//		throw ZeroException("Divisor == 0\n");
//	}
//
//	if(b >= 1234567)
//	{
//		throw BigNumberException("Divisor >= 1234567\n");
//	}
//	if(b == 1000)
//		throw b;
//
//	return a / b;
//}
