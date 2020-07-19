//#include <iostream>
//using namespace std;
//class Rect {
//	int width, height;
//public:
//	Rect(int w = 1, int h = 1)
//	{
//		try{
//			SetWidth(w);
//			SetHeight(h);
//		}
//		catch (const NegSize &e)
//		{
//	//		this->~Rect();
//		}
//	}
//	void SetWidth(int w)
//	{
//		if (w < 0)
//			throw NegSize(w);
//		width = w;
//	}
//	void SetHeight(int h)
//	{
//		if (h < 0)
//			throw NegSize(h);
//		height = h;
//	}
//	~Rect()
//	{
//		cout << "dtor Rect done\n";
//	}
//	class NegSize
//	{
//		int side;
//	public:
//		NegSize(int s): side(s)
//		{}
//		void  What() const
//		{
//			cout <<  "Negative size " << side << endl;;
//		}
//	};
//	
//};
//
//int main() {
//	
//	
//	try
//	{
//		Rect rect(-2, 10); // (2, -10)
//		//rect.SetWidth(-1);
//	}
//	catch(Rect:: NegSize & ex) 
//	{	
//		ex.What();
//	}
//	catch(...)
//	{
//		cout << "Unexpected error\n";	
//	}
//	return 0;
//}