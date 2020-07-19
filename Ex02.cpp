//#include <iostream>
//using namespace std;
//class Exp
//{};
//class ExpA : public Exp
//{};
//
//int main() {
//
//	char ui;
//	do {
//		cout << "\t\tchar              c\n"
//			 << "\t\tint               i\n"
//			 << "\t\tdouble            d\n"
//			 << "\t\tfloat             f\n"
//			 << "\t\tvoid *            v\n"
//			 << "\t\tint *             p\n"
//			 << "\t\tExp object        o\n"
//			 << "\t\tExpA object       O\n"
//			 << "\t\t-------------------\n"
//			 << "\t\texit              x\n"
//			 << "\t\t-> ";
//		cin  >> ui;
//		try {
//			switch(ui) {
//			case 'c':
//				char c;
//				cout << "Enter char: ";
//				cin  >> c;
//				throw c;
//				break;
//			case 'i':
//				int i;
//				cout << "Enter integer: ";
//				cin  >> i;
//				throw i;
//				break;
//			case 'd':
//				double d;
//				cout << "Enter double: ";
//				cin  >> d;
//				throw d;
//				break;
//			case 'f':
//				float f;
//				cout << "Enter float: ";
//				cin  >> f;
//				throw f;
//				break;
//			case 'p':
//				int b;
//				int * p;
//				p = &b;
//				throw(p);
//				break;
//
//			case 'v': 
//				int a;
//				void * v;
//				v = &a;
//				throw(v);
//				break;
//			case'O':
//				throw ExpA();
//				break;
//			case 'o':
//				throw Exp();
//				break;
//			case 'x': case 'X':
//				cout << "Bye!\n";
//				break;
//			default:
//				short s = 10;
//				throw s;
//				break;
//			}
//		}
//		catch(char c) {
//			cout << "CHAR exception caught! Parameter = " << c << endl;
//		}
//		catch(int i) {
//			cout << "INTEGER exception caught! Parameter = " << i << endl;
//		}
//		catch(float f) {
//			cout << "FLOAT exception caught! Parameter = " << f << endl;
//		}
//		catch(double d) {
//			cout << "DOUBLE exception caught! Parameter = " << d << endl;
//		}
//		catch(int * p)
//		{
//			cout << "INT * exception caught! Parameter = " << p << endl;
//
//		}
//		catch (void * v)
//		{
//			cout << "VOID * exception caught! Parameter = " << v << endl;
//
//		}
//		catch(Exp &)
//		{
//			cout << "Object of class Exp caught!" << endl;
//		}
//		catch(ExpA &)
//		{
//			cout << "Object of class ExpA caught!" << endl;
//		}
//		catch(...) {
//			cout << "Unknown exception caught! No parameter! Exit - x? ";
//			cin  >> ui;
//		}
//	}while(ui != 'x' && ui != 'X');
//
//
//
//	return 0;
//}