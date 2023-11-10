#include <string>
#include <vector>
#include <queue>

/*
�� ������ ���� �׸���θ� �ذ��ϸ� �ذ��� �ȵǴ� �ݷʰ� ����.

�׸��� �˰������θ� �ذ��Ѵٸ�, ���� �������� �̵��ϴ� Ƚ���� 2��, �������� 3���̶��
�������� �̵��Ѱɷ� �������� ��, ������ ������ �ذ� ���;� �ϴµ�, �׷��� ���� �ݷ� ����.

�� ���� �̵��� ������ �̵��� Ƚ���� ��� ���� �� �� ���ؾ� �ϱ� ������ BFS�� Ǯ��.

���Ʒ��̵��� �׸���, ���� �������� BFS. 

*/
using namespace std;

struct Node
{
    std::string Name;
    int Count;
    int Index;
};

int solution(string name)
{
    std::queue<Node> Nodes;

    std::string MyName;
    MyName.resize(name.size(), 'A');

    Node NewNode;
    NewNode.Name = MyName;
    NewNode.Count = 0;
    NewNode.Index = 0;

    Nodes.push(NewNode);

    int MinCount = -1;

    while (Nodes.size() > 0)
    {
        Node CurNode = Nodes.front();
        Nodes.pop();

        if (CurNode.Name == name)
        {
            if (MinCount == -1)
            {
                MinCount = CurNode.Count;
            }
            else
            {
                MinCount = min(MinCount, CurNode.Count);
            }

            continue;
        }

        //���� �ε����� ���ڰ� �ٸ��ٸ�?
        if (CurNode.Name[CurNode.Index] != name[CurNode.Index])
        {
            int AsciiGap = abs(CurNode.Name[CurNode.Index] - name[CurNode.Index]);
            //���� ����Ű�� �Ǝm�� ����Ű�� Ƚ���� �� ���� ��.            
            int Count = min(AsciiGap, 26 - AsciiGap);
            //���� Ƚ����ŭ ������.            
            CurNode.Count += Count;
            //���ڸ� �ٲٰ� , �ε����� ��ȭx
            CurNode.Name[CurNode.Index] = name[CurNode.Index];

            Nodes.push(CurNode);

            continue;
        }
        else
        {
            int NameSize = name.size();

            //���������� Ű�� �����δٸ�?
            int Index = CurNode.Index;
            int Count = 0;

            while (CurNode.Name[Index] == name[Index])
            {
                Index++;
                Count++;

                if (Index >= NameSize)
                {
                    Index -= NameSize;
                }
            }

            Node NewRightNode;
            NewRightNode.Name = CurNode.Name;
            NewRightNode.Index = Index;
            NewRightNode.Count = CurNode.Count + Count;

            Nodes.push(NewRightNode);

            //�������� ���ٸ�?
            Index = CurNode.Index;
            Count = 0;

            while (CurNode.Name[Index] == name[Index])
            {
                Index--;
                Count++;

                if (Index < 0)
                {
                    Index += NameSize;
                }
            }

            Node NewLeftNode;
            NewLeftNode.Name = CurNode.Name;
            NewLeftNode.Index = Index;
            NewLeftNode.Count = CurNode.Count + Count;

            Nodes.push(NewLeftNode);
        }
    }

    return MinCount;
}

//int main()
//{
//    return 0;
//}