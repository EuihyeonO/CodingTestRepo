//#include <memory>
//#include <chrono>
//class A
//{
//public:
//	A(){}
//	~A(){}
//
//	//���������
//	A(const A& _A) 
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			Arr[i] = _A.Arr[i];
//		}
//	}
//
//	//�̵�������
//	A(A&& _A) noexcept
//	{
//		*Arr = *_A.Arr;
//	}
//
//	//���������
//	void operator=(const A& _A) 
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			Arr[i] = _A.Arr[i];
//		}
//	}
//
//	//�̵�������
//	void operator=(A&& _A) noexcept
//	{
//		*Arr = *_A.Arr;
//	}
//
//	int Arr[100] = {0,};
//};
//
////int main()
////{
////	A a;
////	A b;
////
////	std::chrono::duration<float> Time1;
////	{
////		std::chrono::system_clock::time_point Dura = std::chrono::system_clock::time_point();
////		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
////		for (int i = 0; i < 100000; i++)
////		{
////			A temp(b);
////			b = a;
////			a = b;
////
////		}
////		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
////		Time1 = EndTime - StartTime;
////	}
////	
////	std::chrono::duration<float> Time2;
////	{
////		std::chrono::system_clock::time_point Dura = std::chrono::system_clock::time_point();
////		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
////		for (int i = 0; i < 100000; i++)
////		{
////			A temp(std::move(b));
////			b = std::move(a);
////			a = std::move(temp);
////		}
////		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
////		Time2 = EndTime - StartTime;
////	}
////
////	return  0;
////}