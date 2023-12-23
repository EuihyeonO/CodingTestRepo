#include <map>


template <typename T>
class MyMap
{

private:
	enum class NodeColor : char
	{
		Red,
		Black,
	};

	struct Node
	{
		T Data;

		NodeColor Color = NodeColor::Black;

		Node* Parent = nullptr;
		Node* LeftChild = nullptr;
		Node* RightChild = nullptr;
	};

public:
	MyMap() {}
	~MyMap() {}

public:

	void insert(const T& _Data)
	{
		Node* NewNode = nullptr;

		//����� 0�̸�, ��Ʈ���� ����
		if (Size == 0)
		{
			NewNode = new Node();
			NewNode->Data = _Data;

			RootNode = NewNode;
			RootNode->Color = NodeColor::Black;
			
			Size++;

			return;
		}
		
		else
		{
			Node* CurNode = RootNode;
			
			//����
			while (true)
			{
				//�����Ͱ� ���ٸ�, �����͸� �ٲٰ� ��.
				if (_Data == CurNode->Data)
				{
					CurNode->Data = _Data;
					return;
				}
				//�����Ͱ� �� �۴ٸ�, �ش� ����� ���ʳ�带 Ž��.
				else if (_Data < CurNode->Data)
				{
					//����� ���� ��尡 nullptr�̸�, ���� ���� ��带 ���� ���� ����.
					if (CurNode->LeftChild == nullptr)
					{
						NewNode = new Node();
						NewNode->Data = _Data;
						NewNode->Parent = CurNode;
						NewNode->Color = NodeColor::Red;
						
						CurNode->LeftChild = NewNode;

						Size++;

						break;
					}
					else
					{
						CurNode = CurNode->LeftChild;
						continue;
					}
				}
				else if (_Data > CurNode->Data)
				{
					//����� ������ ��尡 nullptr�̸�, ���� ���� ��带 ������ ���� ����.
					if (CurNode->RightChild == nullptr)
					{
						NewNode = new Node();

						NewNode->Data = _Data;
						NewNode->Parent = CurNode;
						NewNode->Color = NodeColor::Red;

						CurNode->RightChild = NewNode;

						Size++;

						break;
					}
					else
					{
						CurNode = CurNode->RightChild;
						continue;
					}
				}
			}

			//����
			NodeSort(NewNode);
		}
	}
	
private:
	void NodeSort(Node& _NewNode)
	{
		Node* CurNode = _NewNode;
		Node* ParentNode = _NewNode->Parent;
		Node* UncleNode = ParentNode->RightChild;

		//Restructing
		if (UncleNode->Color == NodeColor::Black)
		{

		}

		//Recoloring
		else if(UncleNode->Color == NodeColor::Red)
		{

		}

	}

private:
	Node* RootNode = nullptr;
	size_t Size = 0;
};


int main()
{

	MyMap<int> NewMap;
	return 0;
}