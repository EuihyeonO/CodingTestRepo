//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//
//struct Node
//{
//	int X = 0;
//	int Y = 0;
//	int Count = 0;
//};
//
//int main()
//{
//	int Horizon = 0;
//	int Vertical = 0;
//
//	std::cin >> Vertical;
//	std::cin >> Horizon;
//
//	std::vector<std::vector<int>> Maze;
//	Maze.resize(Vertical);
//
//	for (int i = 0; i < Vertical; i++)
//	{
//		Maze[i].resize(Horizon);
//	}
//
//	//�Է�
//	for (int i = 0; i < Vertical; i++)
//	{
//		std::string Num;
//
//		std::cin >> Num;
//
//		for (int j = 0; j < Horizon; j++)
//		{
//			Maze[i][j] = Num[j] - '0';
//		}
//	}
//
//	//�湮�˻� ����
//	std::vector<std::vector<bool>> isVisit;
//	isVisit.resize(Vertical);
//
//	for (int i = 0; i < Vertical; i++)
//	{
//		isVisit[i].resize(Horizon, false);
//	}
//
//	//�̵��Ÿ��� ����
//	std::set<int> Counts;
//
//	//�ʺ�켱Ž���� ť
//	std::queue<Node> BFS;
//	Node NewNode;
//	NewNode.X = 0;
//	NewNode.Y = 0;
//	NewNode.Count = 1;
//
//	isVisit[0][0] = true;
//
//	BFS.push(NewNode);
//
//	//�ʺ�켱Ž�� ����
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		if (CurNode.X == Horizon - 1 && CurNode.Y == Vertical - 1)
//		{
//			Counts.insert(CurNode.Count);
//			continue;
//		}
//
//		//����
//		if (CurNode.X < Horizon - 1 && Maze[CurNode.Y][CurNode.X + 1] == 1 && isVisit[CurNode.Y][CurNode.X + 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X + 1;
//			NewNode.Y = CurNode.Y;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y][CurNode.X + 1] = true;
//			BFS.push(NewNode);
//		}
//
//		//����
//		if (CurNode.X >= 1 && Maze[CurNode.Y][CurNode.X - 1] == 1 && isVisit[CurNode.Y][CurNode.X - 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X - 1;
//			NewNode.Y = CurNode.Y;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y][CurNode.X - 1] = true;
//			BFS.push(NewNode);
//		}
//
//		//����
//		if (CurNode.Y >= 1 && Maze[CurNode.Y - 1][CurNode.X] == 1 && isVisit[CurNode.Y - 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y - 1;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y - 1][CurNode.X] = true;
//			BFS.push(NewNode);
//		}
//
//		//�Ʒ���
//		if (CurNode.Y < Vertical - 1 && Maze[CurNode.Y + 1][CurNode.X] == 1 && isVisit[CurNode.Y + 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y + 1;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y + 1][CurNode.X] = true;
//			BFS.push(NewNode);
//		}
//	}
//
//	if(Counts.size() > 0)
//	{
//		std::cout << *Counts.begin() << std::endl;
//	}
//
//	return 0; 
//}