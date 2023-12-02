//#include <iostream>
//#include <queue>
//#include <map>
//
//int main()
//{
//	
//	int NumTestCase = 0;
//	std::cin >> NumTestCase;
//
//	std::vector<int> Answers;
//	Answers.reserve(NumTestCase);
//
//	for(int i = 0; i < NumTestCase; i++)
//	{
//		int NumDoc = 0; //������ ��
//		int QueueIndex = 0; //�˰��� �ϴ� ������ ť�� ���°�� �ִ°�
//
//		std::cin >> NumDoc >> QueueIndex;
//
//		std::map<int, int> PriorityMap;
//		std::queue<std::pair<int, int>> Queue;
//
//		for (int j = 0; j < NumDoc; j++)
//		{
//			int Priority = 0;
//			std::cin >> Priority;
//
//			PriorityMap[Priority]++;
//			Queue.push({ Priority, j });
//		}
//
//		int Answer = 0;
//
//		while (Queue.size() > 0)
//		{
//			std::pair<int, int> CurDoc = Queue.front();
//			Queue.pop();
//
//			int CurPriority = CurDoc.first;
//			int CurIndex = CurDoc.second;
//
//			std::map<int, int>::iterator MaxPriority = PriorityMap.end(); //������ Map�� Sizeüũ�� �ؾ��� (�����˻�)
//			MaxPriority--; //end()�� ������ ���� ������ ����ŲŰ�Ƿ�, ���ҿ� �����Ϸ��� --�� �ؾ���.
//
//			if (MaxPriority->first > CurPriority) //�켱������ �� ���� ������ �ִٸ�.
//			{
//				Queue.push(CurDoc);
//				continue;
//			}
//			else
//			{
//				if (CurIndex == QueueIndex) //ã���� �ϴ� �������
//				{
//					Answer++;
//					break;
//				}
//				else //�ٸ� �������
//				{
//					PriorityMap[CurPriority]--;
//
//					if (PriorityMap[CurPriority] <= 0)
//					{
//						PriorityMap.erase(PriorityMap.find(CurPriority));
//					}
//
//					Answer++;
//					continue;
//				}
//			}
//		}
//
//		Answers.push_back(Answer);
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}