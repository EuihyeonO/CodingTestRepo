//#include <iostream>
//
//class A
//{
//public:
//	int a = 0;
//};
//
//class B : public A
//{
//public:
//	int b = 0;
//};
//
//void Func(A _A)
//{
//	if (_A.a == 0) throw _A;
//	std::cout << "����" << std::endl;
//}
//
//void Func1(B _B)
//{
//	if (_B.a == 0) throw _B;
//	std::cout << "����" << std::endl;
//}
//
////int main()
////{
////	A NewA;
////	B NewB;
////
////	try 
////	{
////		Func1(NewB);
////	}
////
////	//��Ӱ��迡���� �ڽ�Ŭ������ �θ�Ŭ������ ĳ���õ� �� �ֱ� ������, �ڽ�Ŭ������ Catch�� �� �տ� �ۼ��ؾ��Ѵ�.
////	catch (B& _B)
////	{
////		std::cout << "�ڽ� ����ó��";
////	}
////	catch (A& _A)
////	{
////		std::cout << "�θ� ����ó��";
////	}
////
////	return 0;
////}