//#include <iostream>
//#include <exception>
//using namespace std;
//int main()
//{
//	int * arr = nullptr;
//	try
//	{
//		arr = new int [10000];
//		throw "Something happened\n";
//		delete [] arr;
//	}
//	catch(const char* str)
//	{
//		cout << "Exception: " << str << endl;
//		if(arr)
//			delete [] arr;
//	}
//	catch(...)
//	{
//		if(arr)
//			delete [] arr;
//	}
//
//	int size  = 100000, i;
//	
//	double  ** D =  nullptr;
//	try
//	{
//		D = new double * [size];//{};
//		for( i = 0; i < size; ++i)
//		{
//			D[i] = new double [12345600];
//			cout << i << " block was allocated\n";
//		}
//	}
//	catch(bad_alloc & ex)
//	{
//		for(int j = 0; j < i; ++j)
//		{
//			delete D[j];
//			cout << "was deleted block # " << j << endl;
//		}
//		cout<< "ex.what() : " <<  ex.what() << endl;
//	}
//}