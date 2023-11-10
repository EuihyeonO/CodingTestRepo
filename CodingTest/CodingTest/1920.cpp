//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(0);
//	std::cout.tie(0);
//
//	int NumberSetSize = 0;
//	std::vector<int> NumberSet;
//
//	std::cin >> NumberSetSize;
//	NumberSet.resize(NumberSetSize);
//
//	for (int i = 0; i < NumberSetSize; i++)
//	{
//		std::cin >> NumberSet[i];
//	}
//
//	//����Ž���� ������ �ؾ����� ����
//	sort(NumberSet.begin(), NumberSet.end());
//
//	int TargetSize = 0;
//	std::vector<int> TargetSet;
//	
//	std::cin >> TargetSize;
//	TargetSet.resize(TargetSize);
//
//	for (int i = 0; i < TargetSize; i++)
//	{
//		std::cin >> TargetSet[i];
//	}
//	//�Է� ��
//
//	//��ȯ���� ������ �ڷᱸ��
//	std::vector<int> Answer;
//	Answer.reserve(TargetSize);
//
//	//�˻�
//	for (int i = 0; i < TargetSize; i++)
//	{
//		int CurTarget = TargetSet[i];
//
//		int Start = 0;
//		int End = NumberSetSize - 1;
//		int Mid = (Start + End) / 2;
//
//		bool isFind = false;
//
//		while (Start <= End)
//		{
//			if (CurTarget == NumberSet[Mid])
//			{
//				Answer.push_back(1);
//				isFind = true;
//				break;
//			}
//
//			if (CurTarget > NumberSet[Mid])
//			{
//				Start = Mid + 1;
//			}
//			else
//			{
//				End = Mid - 1;
//			}
//
//			Mid = (Start + End) / 2;
//		}
//
//		if (isFind == false)
//		{
//			Answer.push_back(0);
//		}
//	}
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}