//#include <utility>
//#include <iostream>
//
//class A
//{
//
//};
//
//void Func(A& _A)
//{
//	std::cout << "L-Value ���� " << std::endl;
//}
//
//void Func(A&& _A)
//{
//	std::cout << "R-Value ���� " << std::endl;
//}
//
//template <typename T>
//void FuncTemplate(T&& _T)
//{
//	Func(std::forward<T>(_T));
//}
//
//int main()
//{
//	A NewA;
//
//	FuncTemplate(NewA);
//	FuncTemplate(A());
//}