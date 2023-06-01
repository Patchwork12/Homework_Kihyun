// List.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
#include <vector>
#include <assert.h>

// 1. Push_front를 만들어보세요.
// 2. leck 잡으세요


using DataType = int;


class HList
{
private:
	class ListNode
	{
	public:
		DataType Value;
		ListNode* Prev = nullptr;
		ListNode* Next = nullptr;
	};


public:
	class iterator
	{
		friend HList;

	private:
		ListNode* CurNode = nullptr;

	public:
		iterator()
		{

		}

		iterator(ListNode* _Node)
			: CurNode(_Node)
		{

		}

		bool operator !=(const iterator& _Other)
		{
			return CurNode != _Other.CurNode;
		}

		iterator& operator ++()
		{
			CurNode = CurNode->Next;
			return *this;
		}

		DataType& operator*()
		{
			return CurNode->Value;
		}
	};

	HList()
	{
		StartNode = new ListNode();
		EndNode = new ListNode();

		// 이게 더미 노드 방식
		StartNode->Next = EndNode;
		EndNode->Prev = StartNode;
	}


	// void Push_front를 만들어보세요.
	void push_front(const DataType& _Data)
	{
		ListNode* NewNode = new ListNode();
		NewNode->Value = _Data;

		ListNode* NextNode = StartNode->Next;

		StartNode->Next = NewNode;
		NextNode->Prev = NewNode;

		NewNode->Next = NextNode;
		NewNode->Prev = StartNode;


	}

	void push_back(const DataType& _Data)
	{
		ListNode* NewNode = new ListNode();
		NewNode->Value = _Data;

		ListNode* PrevNode = EndNode->Prev;

		PrevNode->Next = NewNode;
		EndNode->Prev = NewNode;

		NewNode->Next = EndNode;
		NewNode->Prev = PrevNode;


	}

	iterator erase(const iterator& _Iter)
	{
		ListNode* Node = _Iter.CurNode;

		if (StartNode == Node
			|| EndNode == Node)
		{
			assert(false);
			return iterator(EndNode);
		}


		ListNode* NextNode = Node->Next;
		ListNode* PrevNode = Node->Prev;

		PrevNode->Next = NextNode;
		NextNode->Prev = PrevNode;

		if (nullptr != Node)
		{
			delete Node;
		}

		return iterator(NextNode);
	}

	iterator begin()
	{
		return iterator(StartNode->Next);
	}

	iterator end()
	{
		return iterator(EndNode);
	}


	void clr()
	{
		HList::iterator StartIter = begin();
		HList::iterator EndIter = end();

		for (; StartIter != EndIter;)
		{
			StartIter = erase(StartIter);
		}
	}

	~HList()
	{
		clr();
		delete StartNode;
		delete EndNode;
	}


private:
	ListNode* StartNode;
	ListNode* EndNode;
};

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	{

		// 노드형 시퀀스 자료구조
		std::list<int> NewList;


		for (size_t i = 0; i < 10; i++)
		{
			NewList.push_front(i);
		}


		// NewList.erase()

		std::list<int>::iterator StartIter = NewList.begin();
		std::list<int>::iterator EndIter = NewList.end();

		StartIter = NewList.erase(StartIter);

		for (; StartIter.operator!=(EndIter); ++StartIter)
		{
			 std::cout << (*StartIter) << std::endl;
		}

		int a = 0;
	}

	{
		HList NewList;

		for (int i = 0; i < 10; i++)
		{
			NewList.push_back(i);
		}


		HList::iterator StartIter = NewList.begin();
		HList::iterator EndIter = NewList.end();

		HList::iterator EraseIter = NewList.begin();

		++EraseIter;
		++EraseIter;
		++EraseIter;
		++EraseIter;
		++EraseIter;

		EraseIter = NewList.erase(EraseIter);


		int a = 0;

		for (; StartIter != EndIter; ++StartIter)
		{
			// 순회를 하면서 모든 인자를 도는 와중에 삭제를 합니다.
			std::cout << (*StartIter) << std::endl;
		}
	}

}
