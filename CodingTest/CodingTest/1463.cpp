//#include <iostream>
//#include <queue>
//#include <climits>
//
////������ ����Լ������� Ǯ����.
////����� ���� ����������, ����Լ��� ���ÿ����÷ο� �߻�Ȯ�� �ö�
////������ 5500���� �̻��� ���� ������, ��� ���ÿ����÷ο� �߻�.
////�޸𸮸� �Ƴ��� ����, �ݺ��� ���·� �ٲ��,
////��� - ž�ٿ�, �ݺ��� - ���Ҿ�
////ž�ٿ� -> �������� ������ ���� �� ������ ���ÿ����÷ο� ������ ����
////���Ҿ� -> ��� ����� ���� �� �����ؾ� ������, �޸𸮸� ȿ�������� �̿� ����
//
//int main()
//{
//	int Num = 0;
//	std::cin >> Num;
//
//	std::vector<int> DP;
//	DP.resize(Num + 1, INT_MAX);
//
//	DP[1] = 0;
//	DP[2] = 1;
//	DP[3] = 1;
//
//	int Index = 1;
//
//	while(Index <= Num)
//	{
//		if(Index * 2 <= Num)
//		{
//			DP[Index * 2] = std::min(DP[Index * 2], DP[Index] + 1);
//		}
//
//		if (Index * 3 <= Num)
//		{
//			DP[Index * 3] = std::min(DP[Index * 3], DP[Index] + 1);
//		}
//
//		if (Index + 1 <= Num)
//		{
//			DP[Index + 1] = std::min(DP[Index + 1], DP[Index] + 1);
//		}
//
//		Index++;
//	}
//
//	std::cout << DP[Num];
//
//	return 0;
//}