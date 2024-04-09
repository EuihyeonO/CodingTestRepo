//#include <cmath>
//#include <iostream>
//#include <vector>
//
//int NumOfNode = 0;
//int MaxExponent = 0;
//
//std::vector<int> Depth;
//std::vector<std::vector<int>> Links;
//std::vector<std::vector<int>> Ancestor;
//
//void Tree(int _CurNode, int _Parent)
//{
//    Depth[_CurNode] = Depth[_Parent] + 1;
//    Ancestor[_CurNode][0] = _Parent;
//
//    for (int i = 1; i <= MaxExponent; i++)
//    {
//        //2^(i - 1) ��° ����
//        int IndexAncestor = Ancestor[_CurNode][i - 1];
//        Ancestor[_CurNode][i] = Ancestor[IndexAncestor][i - 1];
//    }
//
//    int LinkSize = Links[_CurNode].size();
//
//    for (int i = 0; i < LinkSize; i++)
//    {
//        int NextNode = Links[_CurNode][i];
//        if (NextNode != _Parent)
//        {
//            Tree(NextNode, _CurNode);
//        }
//    }
//}
//
//int main()
//{
//	std::cin >> NumOfNode;
//	MaxExponent = (int)floor(log2(NumOfNode));
//
//	for (int i = 1; i < NumOfNode; i++)
//	{
//		int Start = 0;
//		int End = 0;
//
//		std::cin >> Start >> End;
//
//		Links[Start].push_back(End);
//		Links[End].push_back(Start);
//	}
//
//	Depth.resize(NumOfNode + 1);
//	Ancestor.resize(NumOfNode + 1, std::vector<int>(MaxExponent + 1, 0));
//
//	Depth[0] = -1;
//
//	Tree(1, 0);
// 
//	int First = 0;
//	int Second = 0;
//	std::cin >> First >> Second;
//
//	if (Depth[First] != Depth[Second])
//	{
//		//�� ���̰� ���� ���� First�� �����ֱ�.
//		if (Depth[First] < Depth[Second])
//		{
//			std::swap(First, Second);
//		}
//
//		for (int j = MaxExponent; j >= 0; j--)
//		{
//			if (Depth[Second] <= Depth[Ancestor[First][j]])
//			{
//				First = Ancestor[First][j];
//			}
//		}
//	}
//
//	int LCA = 0;
//
//	if (First == Second)
//	{
//		LCA = First;
//	}
//	else
//	{
//		for (int j = MaxExponent; j >= 0; j--)
//		{
//			if (Ancestor[First][j] != Ancestor[Second][j])
//			{
//				First = Ancestor[First][j];
//				Second = Ancestor[Second][j];
//			}
//
//			LCA = Ancestor[First][j];
//		}
//	}
//}