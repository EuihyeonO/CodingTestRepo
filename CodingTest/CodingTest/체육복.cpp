//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//�������� ��Ȳ�̶�� ��� �л��� 1������ ������ ���� ���̴�.
//-> ���ʿ� ��� �迭�� ���Ҹ� 1�� �ʱ�ȭ.
//
//���ϸ´°� 1����. ���� �¾Ҵٸ� ü������ ������ 1�� �پ��.
//-> (���ϸ��� �л��� ü���� ��)--;
//
//������ ü������ ������ �ֵ��̶�� ü������ ������ 1���� �� ���� ���̴�.
//-> (������ ������ �л��� ü���� ��)++;
//
//����, ++, --�� �ƴ϶� 0, 1, 2 ������ �������ѳ��� �����ϰ� �Ǹ�
//������ ������ ���ÿ� ���ϸ��� �л��� ó���� �ȵȴ�.
//
//���� �ݺ����� ���鼭, ü������ ���� 0�� �л��� �� �� ��ȣ�� ������ ü������ ���� �л��� �ֳ� Ž�� �Ŀ�,
//ü���� 1���� �����ش�.
//n
//
//*/
//
//int solution(int n, vector<int> lost, vector<int> reserve) 
//{
//	std::vector<int> Students;
//	Students.resize(n, 1);
//
//	for (int i = 0; i < lost.size(); i++)
//	{
//		Students[lost[i] - 1]--;
//	}
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		Students[reserve[i] - 1]++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] == 0)
//		{
//			if (i != 0 && Students[i - 1] == 2)
//			{
//				Students[i - 1] = 1;
//				Students[i] = 1;
//			}
//			else if(i != n - 1 && Students[i + 1] == 2)
//			{
//				Students[i + 1] = 1;
//				Students[i] = 1;
//			}
//		}
//	}
//
//	int Count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] >= 1)
//		{
//			Count++;
//		}
//	}
//
//	return Count;
//}
//
////int main()
////{
////	return 0;
////}