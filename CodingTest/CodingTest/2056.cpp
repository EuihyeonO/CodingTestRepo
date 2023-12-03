//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//struct Task
//{
//	int Order = 0; //���� �ε���
//	int Time = 0; // �ҿ� �ð�
//	int EntryNum = 0; //���� ����
//	std::vector<int> PriorTasks; //�����۾���
//
//	//���ĵ� ���� �迭�� ���� �� ���� �迭�� ���������� �̿��� �ʿ䰡 �ֱ� ������, ���ĵ� ���� �迭 �ε����� ���� ���� �迭�� �����صα� ����.
//	int SortedOrder = 0;
//};
//
//int main()
//{
//	int NumOfTask = 0;
//	std::cin >> NumOfTask;
//
//	std::vector<Task> Tasks(NumOfTask);
//	std::queue<Task> Queue;
//
//	for (int i = 0; i < NumOfTask; i++)
//	{
//		Task NewTask;
//		NewTask.Order = i + 1;
//
//		std::cin >> NewTask.Time >> NewTask.EntryNum;
//		NewTask.PriorTasks.resize(NewTask.EntryNum);
//
//		for (int i = 0; i < NewTask.EntryNum; i++)
//		{
//			std::cin >> NewTask.PriorTasks[i];
//		}
//		
//		Tasks[i] = NewTask;
//		Queue.push(NewTask);
//	}
//
//	std::vector<Task> SortedTasks;
//
//	//��������
//	while (Queue.size() > 0)
//	{
//		Task CurTask = Queue.front();
//		Queue.pop();
//		
//		for (size_t i = 0; i < SortedTasks.size(); i++)
//		{
//			int CurOrder = SortedTasks[i].Order;
//
//			std::vector<int>::iterator FindIter = std::find(CurTask.PriorTasks.begin(), CurTask.PriorTasks.end(), CurOrder);
//			if (CurTask.PriorTasks.end() != FindIter)
//			{
//				*FindIter = -1;
//				CurTask.EntryNum--;
//			}
//		}
//
//		if (CurTask.EntryNum <= 0)
//		{
//			CurTask.EntryNum = Tasks[CurTask.Order - 1].EntryNum;
//			Tasks[CurTask.Order - 1].SortedOrder = static_cast<int>(SortedTasks.size());
//			SortedTasks.push_back(CurTask);
//			continue;
//		}
//
//		Queue.push(CurTask);
//	}
//
//	/*
//		���� �۾����� ���� �����ɸ��� �ð��� �������� ���̳��� ���α׷��� ����.
//		�����۾��� �����ϱ� ������,
//		�����۾��� 10�����, ���� ���� �����ɸ� �۾��� �ҿ� �ð���, ���� �۾��� ���۵� �ð�.
//
//		EX)
//		�����۾� A, B, C
//		A�� ��������� 5�� �ҿ�.
//		B�� ��������� 7�� �ҿ�.
//		C�� ��������� 3�� �ҿ�.
//		
//		��� �۾��� �������̱� ������, A,B,C �� ��� �����µ��� 7���� �ҿ�. (�ҿ� �ð��� �ִ밪)
//
//		��, ���� ������ �۾��� ������ �ð��� �����۾��� �ҿ�ð��� �ִ밪 + ���� �۾��� �ҿ�ð�.
//	*/
//
//
//	//DP
//	std::vector<int> TimeStack(NumOfTask, 0);
//	
//	for (size_t i = 0; i < TimeStack.size(); i++)
//	{
//		if (SortedTasks[i].EntryNum == 0)
//		{
//			TimeStack[i] = SortedTasks[i].Time;
//			continue;
//		}
//
//		Task CurTask = Tasks[SortedTasks[i].Order - 1];
//
//		int MaxTime = 0;
//
//		for(size_t j = 0; j < CurTask.PriorTasks.size(); j++)
//		{
//			int Index = CurTask.PriorTasks[j];
//			int SortedIndex = Tasks[Index - 1].SortedOrder;
//
//			MaxTime = std::max(MaxTime,TimeStack[SortedIndex]);
//		}
//
//		TimeStack[i] = MaxTime + CurTask.Time;
//	}
//
//	std::cout << *std::max_element(TimeStack.begin(), TimeStack.end());
//	return 0;
//}