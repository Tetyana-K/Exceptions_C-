//#include <iostream>
//using namespace std;
//// ����������� �������, ������� true, ���� ��������� ������ ���������(� res ), ������ - ���� ������  �� 0
//bool Div(double a, double b, double & res)
//{
//	if (b == 0 )
//	{   cout << "Error: Division by zero\n";
//		return false;
//	}
//	cout<< a << "/" << b << "=";
//	res = a / b;
//	return true;
//}
//
//double DivT(double a, double b)
//{
//	if (b ==0 )
//	{  
//		throw  "Error: division by 0\n"; //������� ������ ���������� ���� const char *   
//		
//	}
//	return  a / b;
//}
//#define Line cout<< "\n..............................................\n\n";
//int main()
//{
//	double res =0;
//	
//	if  ( Div(5, 3, res)) 
//		cout<< res  << endl;
//
//	
//	if  ( Div(7, 0, res)) 
//		cout<< res  << endl;
//	Line
//
//	double a, b;
//	cout << "Enter 2 float numbers(stop with symbol):\n";
//	while(cin >> a>> b) // ������� ���� �����, ���� ��� ��������� � ���������� ������
//	{
//		try //��������� ����
//		{
//			cout << "Result = " << DivT(a,b) << endl;
//		}
//				
//		catch (const char*  mes) // �������� ���������� ���� char*
//		{
//			cout << mes << endl;
//			continue;
//		}
//	}
//
//
//}