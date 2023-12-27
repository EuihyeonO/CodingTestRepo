//#include <map>
//#include <cassert>
//#include <iostream>
//
////typedef int T;
//
//
//template <typename KeyType, typename DataType>
//class MyMap
//{
//
//private:
//	enum class NodeColor : char
//	{
//		Red,
//		Black,
//	};
//
//	struct Node
//	{
//		KeyType Key;
//		DataType Data;
//
//		NodeColor Color = NodeColor::Black;
//
//		Node* Parent = nullptr;
//		Node* LeftChild = NilNode;
//		Node* RightChild = NilNode;
//	};
//
//	static Node* NilNode;
//
//public:
//	MyMap() 
//	{
//		CreateNilNode();
//	}
//
//	~MyMap() {}
//
//	class Iterator
//	{
//	public:
//		Iterator(Node* InitNode)
//		{
//			CurNode = InitNode;
//		}
//		
//		Node* operator*() const
//		{
//			return CurNode;
//		}
//
//		Node* operator->() const
//		{
//			return CurNode;
//		}
//
//		void operator=(const DataType& _Data)
//		{
//			CurNode->Data = _Data;
//		}
//
//		bool operator==(const Node* _Ptr) const
//		{
//			if (_Ptr == CurNode)
//			{
//				return true;
//			}
//			
//			return false;
//		}
//
//	private:
//		Node* CurNode;
//	};
//
//public:
//
//	DataType& operator[](const KeyType _Key) const
//	{
//		Iterator FindIter = Find(_Key);
//		
//		assert(FindIter != nullptr);
//		std::cout << "�ʿ� ��ȿ���� ���� �ε����� �����Ϸ� �Ͽ����ϴ�. [�������� �ʴ� Ű]";
//
//		return FindIter->Data;
//	}
//
//	Iterator Find(const KeyType& _Key) const
//	{
//		Node* CurNode = RootNode;
//
//		while (CurNode != NilNode)
//		{
//			if (CurNode->Key == _Key)
//			{
//				break;
//			}
//			else if (CurNode->Key > _Key)
//			{
//				CurNode = CurNode->LeftChild;
//			}
//			else
//			{
//				CurNode = CurNode->RightChild;
//			}
//		}
//
//		if (CurNode == NilNode)
//		{
//			return Iterator(nullptr);
//		}
//		else
//		{
//			return Iterator(CurNode);
//		}
//	}
//
//	void insert(const KeyType& _Key, const DataType& _Data)
//	{
//		Node* NewNode = nullptr;
//
//		//����� 0�̸�, ��Ʈ���� ����
//		if (Size == 0)
//		{
//			NewNode = new Node();
//			NewNode->Key = _Key;
//			NewNode->Data = _Data;
//
//			RootNode = NewNode;
//			RootNode->Color = NodeColor::Black;
//
//			Size++;
//
//			return;
//		}
//		
//		else
//		{
//			Node* CurNode = RootNode;
//			
//			//����
//			while (true)
//			{
//				//Ű�� ���ٸ�, �����͸� �ٲٰ� ��.
//				if (_Key == CurNode->Key)
//				{
//					CurNode->Data = _Data;
//					return;
//				}
//				//�����Ͱ� �� �۴ٸ�, �ش� ����� ���ʳ�带 Ž��.
//				else if (_Key < CurNode->Key)
//				{
//					//����� ���� ��尡 nullptr�̸�, ���� ���� ��带 ���� ���� ����.
//					if (CurNode->LeftChild == NilNode)
//					{
//						NewNode = new Node();
//
//						NewNode->Key = _Key;
//						NewNode->Data = _Data;
//
//						NewNode->Parent = CurNode;
//						NewNode->Color = NodeColor::Red;
//						
//						CurNode->LeftChild = NewNode;
//
//						Size++;
//
//						break;
//					}
//					else
//					{
//						CurNode = CurNode->LeftChild;
//						continue;
//					}
//				}
//				else if (_Key > CurNode->Key)
//				{
//					//����� ������ ��尡 nullptr�̸�, ���� ���� ��带 ������ ���� ����.
//					if (CurNode->RightChild == NilNode)
//					{
//						NewNode = new Node();
//
//						NewNode->Key = _Key;
//						NewNode->Data = _Data;
//
//						NewNode->Parent = CurNode;
//						NewNode->Color = NodeColor::Red;
//
//						CurNode->RightChild = NewNode;
//
//						Size++;
//
//						break;
//					}
//					else
//					{
//						CurNode = CurNode->RightChild;
//						continue;
//					}
//				}
//			}
//
//			//����
//			if (NewNode->Parent == nullptr)
//			{
//				return;
//			}
//
//			assert(NewNode->Parent != NilNode);
//			ReBuilding(NewNode);
//		}
//	}
//
//	//Debug �뵵, int������ ����.
//	void PrintBySort(Node* _Node)
//	{
//		if (_Node == NilNode)
//		{
//			return;
//		}
//
//		PrintBySort(_Node->LeftChild);
//		std::cout << "Key : " << _Node->Key << " Data : " << _Node->Data << " Color : " << static_cast<int>(_Node->Color);
//		std::cout << std::endl;
//		PrintBySort(_Node->RightChild);
//	}
//
//private:
//	void LeftRotate(Node* _ParentNode)
//	{
//		Node* LeftChild = _ParentNode->LeftChild;
//		Node* RightChild = _ParentNode->RightChild;
//
//		if (RightChild != NilNode) 
//		{
//			_ParentNode->RightChild = RightChild->LeftChild;
//			
//			if(RightChild->LeftChild != NilNode)
//			{
//				RightChild->LeftChild->Parent = _ParentNode;
//			}
//
//			RightChild->Parent = _ParentNode->Parent;
//
//			if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->LeftChild)
//			{
//				_ParentNode->Parent->LeftChild = RightChild;
//			}
//			else if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->RightChild)
//			{
//				_ParentNode->Parent->RightChild = RightChild;
//			}
//
//			_ParentNode->Parent = RightChild;
//			RightChild->LeftChild = _ParentNode;
//
//			if (RightChild->Parent == nullptr)
//			{
//				RootNode = RightChild;
//			}
//		}
//	}
//
//	void RightRotate(Node* _ParentNode)
//	{
//		Node* LeftChild = _ParentNode->LeftChild;
//		Node* RightChild = _ParentNode->RightChild;
//
//		if (LeftChild != NilNode)
//		{
//			_ParentNode->LeftChild = LeftChild->RightChild;
//
//			if (LeftChild->RightChild != NilNode)
//			{
//				LeftChild->RightChild->Parent = _ParentNode;
//			}
//
//			LeftChild->Parent = _ParentNode->Parent;
//
//			if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->LeftChild)
//			{
//				_ParentNode->Parent->LeftChild = LeftChild;
//			}
//			else if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->RightChild)
//			{
//				_ParentNode->Parent->RightChild = LeftChild;
//			}
//
//			_ParentNode->Parent = LeftChild;
//			LeftChild->RightChild = _ParentNode;
//
//			if (LeftChild->Parent == nullptr)
//			{
//				RootNode = LeftChild;
//			}
//		}
//	}
//
//	void ReBuilding(Node* _CurNode)
//	{
//		Node* ParentNode = nullptr;
//		Node* AncestorNode = nullptr;
//		Node* UncleNode = nullptr;
//
//		Node* CurNode = _CurNode;
//
//		while(true)
//		{
//			if (CurNode == RootNode)
//			{
//				RootNode->Color = NodeColor::Black;
//				break;
//			}
//
//			if (CurNode->Parent == RootNode)
//			{
//				break;
//			}
//
//			ParentNode = CurNode->Parent;
//			AncestorNode = ParentNode->Parent;
//
//			if (!(CurNode->Color == NodeColor::Red && ParentNode->Color == NodeColor::Red))
//			{
//				break;
//			}
//
//			if (ParentNode == AncestorNode->LeftChild)
//			{
//				UncleNode = AncestorNode->RightChild;
//			}
//			else if (ParentNode == AncestorNode->RightChild)
//			{
//				UncleNode = AncestorNode->LeftChild;
//			}
//			else
//			{
//				return;
//			}
//
//			if (UncleNode->Color == NodeColor::Black)
//			{
//				ReStructing(CurNode, ParentNode, AncestorNode);
//			}
//			else if (UncleNode->Color == NodeColor::Red)
//			{
//				ReColoring(CurNode);
//
//				CurNode = AncestorNode;
//			}
//		}
//	}
//
//	void ReStructing(Node* _CurNode, Node* _ParentNode, Node* _AncestorNode)
//	{
//		if (_ParentNode == nullptr)
//		{
//			return;
//		}
//
//		if (_AncestorNode == nullptr)
//		{
//			return;
//		}
//
//		if (_ParentNode == _AncestorNode->LeftChild)
//		{
//			if (_CurNode == _ParentNode->RightChild)
//			{
//				LeftRotate(_ParentNode);
//
//				//����ȸ�� �����ϸ鼭, �θ���� �������� ���谡 �ٲ�.
//				Node* Temp = _CurNode;
//				_CurNode = _ParentNode;
//				_ParentNode = Temp;
//
//			}
//
//			_ParentNode->Color = NodeColor::Black;
//			_AncestorNode->Color = NodeColor::Red;
//
//			RightRotate(_AncestorNode);
//		}
//
//		else if (_ParentNode == _AncestorNode->RightChild)
//		{
//			if (_CurNode == _ParentNode->LeftChild)
//			{
//				RightRotate(_ParentNode);
//
//				//����ȸ�� �����ϸ鼭, �θ���� �������� ���谡 �ٲ�.
//				Node* Temp = _CurNode;
//				_CurNode = _ParentNode;
//				_ParentNode = Temp;
//
//			}
//
//			_ParentNode->Color = NodeColor::Black;
//			_AncestorNode->Color = NodeColor::Red;
//
//			LeftRotate(_AncestorNode);
//		}
//	}
//
//	void ReColoring(Node* _CurNode)
//	{
//		Node* ParentNode = _CurNode->Parent;
//		Node* AncestorNode = ParentNode->Parent;
//		Node* UncleNode = nullptr;
//		//�������� ��Ȳ�̶��, ��������� nullptr�� �� ����.
//		//��Ʈ ���� �׻� �������̶�, 2~3�� ���ĺ��͸� ���� ���� �浹�� �߻��ϱ� ����.
//		if (ParentNode == nullptr || AncestorNode == nullptr)
//		{
//			return;
//		}
//
//		//��Ʈ��尡 ������ �׳� ���� �ٲٰ� ����.
//		if (_CurNode == RootNode)
//		{
//			_CurNode->Color = NodeColor::Black;
//			return;
//		}
//
//		ParentNode->Color = NodeColor::Black;
//		AncestorNode->Color = NodeColor::Red;
//
//		if (ParentNode == AncestorNode->LeftChild)
//		{
//			UncleNode = AncestorNode->RightChild;
//		}
//		else if (ParentNode == AncestorNode->RightChild)
//		{
//			UncleNode = AncestorNode->LeftChild;
//		}
//		else
//		{
//			return;
//		}
//
//		if (UncleNode != NilNode)
//		{
//			UncleNode->Color = NodeColor::Black;
//		}
//
//		_CurNode = AncestorNode;
//	}
//
//	void CreateNilNode()
//	{
//		NilNode = new Node();
//		NilNode->Color = NodeColor::Black;
//	}
//
//	void SetBegin()
//	{
//		Node* CurNode = RootNode;
//
//		while (CurNode->LeftChild != nullptr)
//		{
//			CurNode = CurNode->LeftChild;
//		}
//		
//		BeginNode = CurNode;
//	}
//
//public:
//	Node* RootNode = nullptr;
//
//private:
//	Node* BeginNode = nullptr;
//	size_t Size = 0;
//};
//
//template <typename KeyType, typename DataType>
//MyMap<KeyType, DataType>::Node* MyMap<KeyType, DataType>::NilNode = nullptr;
//
//int main()
//{
//
//	MyMap<int, int> NewMap;
//
//
//	for (int i = 0; i < 100; i++)
//	{
//		NewMap.insert(i, i);
//	}
//
//	NewMap.PrintBySort(NewMap.RootNode);
//
//	return 0;
//}