//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	int West = 0;
//	int East = 0;
//
//	std::vector<int> Answers;
//
//	for(int i = 0; i < NumOfTestCase; i++)
//	{
//		std::cin >> West >> East;
//
//		int CopyEast = East;
//		int Count = std::min(West, East - West); //���տ��� nCr �� nCn-r �� ����. (���� �� ���� �����ϴ� ���� �̵�)
//
//		//���ڰ� �ʹ� Ŀ�� �����鼭 ���.
//		int Answer = 1;
//		for (int j = 0; j < Count; j++)
//		{
//			Answer *= CopyEast;
//			Answer /= East - CopyEast + 1;
//
//			CopyEast--;
//		}
//
//		Answers.push_back(Answer);
//	}
//
//	for (int Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}