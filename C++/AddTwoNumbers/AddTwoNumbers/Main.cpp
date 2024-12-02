#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode 
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode head;
	bool run = true;

	while (run)
	{

	}
}

int main()
{
	ListNode l1{ 2 };
	ListNode l2{ 4 };
	ListNode l3{ 3 };

	ListNode r1{ 5 };
	ListNode r2{ 6 };
	ListNode r3{ 4 };

	l1.next = &l2;
	l2.next = &l3;

	r1.next = &r2;
	r2.next = &r3;

	ListNode* res;

	res = addTwoNumbers(&l1, &r1);

	return 0;
}