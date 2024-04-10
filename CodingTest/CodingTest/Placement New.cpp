//#include <cstdlib>
//#include <new>
//#include <crtdbg.h>
//#include <iostream>
//
//class Point
//{
//public:
//	Point() {};
//
//	Point(int _X, int _Y) : X(_X), Y(_Y)
//	{
//
//	}
//	~Point() 
//	{
//		std::cout << "Delete" << "\n"; 
//	};
//
//	int GetX()
//	{
//		return X;
//	}
//
//	int GetY()
//	{
//		return Y;
//	}
//
//private:
//	int X = 0;
//	int Y = 0;
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//	
//	//���ÿ��� �ǳ�
//	{
//		char Address[100] = { 0, };
//		Point* P = new(Address) Point;
//	}
//
//	// ���� �Ҵ��� �� operator new?
//	{
//		void* Address = operator new(sizeof(Point));
//		Point* P = new(Address) Point;
//
//		//�޸𸮸� �����ϱ� ����, �ش� �޸𸮿� ��ġ�� ��ü�� �Ҹ��ڸ� ��������� ȣ�����ִ� ���� ����.
//		//�� �ڵ忡�� Address�� delete�� �ϰ� �ִµ�, Address�� voidŸ���̱� ������, ���� �� ��ġ�� �ִ� Ư�� ��ü�� �Ҹ��ڰ� ����� ȣ����� ���� �� �ֱ� �����̴�.
//		P->~Point();
//		delete(Address);
//	}
//
//	// ���� �Ҵ��� �� operator new?
//	{
//		void* Address = operator new(sizeof(Point) + sizeof(int));
//		Point* P = new(Address) Point;
//		
//		//�������� ������ �� ��, � �ڷ������� ĳ���� �ϳĿ� ���� �ٸ��� �ؾ��Ѵٴ� ���� �����ؾ��Ѵ�.		
//		//int* I = new((Point*)Address + 1) int(15);
//		int* I = new((char*)Address + sizeof(Point)) int(19);
//
//		std::cout << P->GetX() << " " << P->GetY() << " " << *I << "\n";
//
//		P->~Point();
//		delete(Address);
//	}
//}
