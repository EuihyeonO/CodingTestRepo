//#include <map>
//#include <unordered_map>
//#include <chrono>
//#include <string>
//
///*
//* ���� ���� Ƚ��
//* :unordered_map �� �� ������ �ϴ�.)
//* 
//* ���� ���� Ƚ��
//* :map�� ���� unordered_map �� 10�� ������ ������. (map�� 1.3�ʰ��� �ҿ�, unordered_map�� 11�� �ҿ�)
//* 
//* ª�� ���ڿ� Ű
//* :unorderd_map �� �� ������ �ϴ�. (�̰� ���� 3~40%���� �� ������.)
//* 
//* �� ���ڿ� Ű
//* :map�� 2�谡���� ������. 
//* 
//* unordered_map �� ���ڿ��� �ƴ�key�� ������ �������� ��(Ȥ�� ����Ƚ��)�� ���� ���� �� �� ���� ������ ���δ�.
//(�� �� �����غ���, 4~50%���� �� ������.)
//*/
//int main()
//{
//	std::chrono::duration<float> Arr[10] = {  };
//
//	//������ Ű (10��ȸ)
//	{
//		std::map<int, int> Map;
//
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000; i++)
//		{
//			Map[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//
//		Arr[0] = Time;
//	}
//
//	{
//		std::unordered_map<int, int> UMap;
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000; i++)
//		{
//			UMap[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//
//		Arr[1] = Time;
//	}
//
//	//������ Ű (1000��ȸ)
//	{
//		std::map<int, int> Map;
//	
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000000; i++)
//		{
//			Map[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//	
//		Arr[2] = Time;
//	}
//	
//	{
//		std::unordered_map<int, int> UMap;
//	
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000000; i++)
//		{
//			UMap[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//	
//		Arr[3] = Time;
//	}
//
//	//ª�� ���ڿ� Ű
//	//{
//	//	std::map<std::string, int> Map;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		Map["A"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[4] = Time;
//	//}
//	//
//	//{
//	//	std::unordered_map<std::string, int> UMap;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		UMap["A"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[5] = Time;
//	//}
//	//
//	////�� ���ڿ� Ű
//	//{
//	//	std::map<std::string, int> Map;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		Map["ABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJ"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[6] = Time;
//	//}
//	//
//	//{
//	//	std::unordered_map<std::string, int> UMap;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		UMap["ABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJ"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[7] = Time;
//	//}
//
//
//	return 0;
//}