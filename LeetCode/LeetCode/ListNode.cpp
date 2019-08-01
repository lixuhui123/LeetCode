//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//typedef int SLTDataType;
//typedef struct SListNode
//{
//	SLTDataType _data;
//	struct SListNode* _next;
//}SListNode;
//typedef struct SList
//{
//	SListNode* _head;
//}SList;
//void SListInit(SList* plist)
//{
//	plist->_head = NULL;
//
//}
//void SListPushFront(SList* plist, SLTDataType x)
//{
//	//链表头压，得到指向链表头结点的指针；
//	SListNode *cur = (SListNode *)malloc(sizeof(SListNode));//给链表结点（结构体）开辟空间
//	cur->_data = x;//赋值
//	cur->_next = plist->_head;//将这个结点的指针指向NULL
//	plist->_head = cur;//将结点此时的地址复制个头指针，让它记住
//	//所以先进入的会后移，和进栈一样，先进后出
//}
//void SListPrint(SList* plist)
//{
//	assert(plist);
//
//	SListNode* cur;
//	for (cur = plist->_head; cur; cur = cur->_next)
//	{
//		printf("%d->", cur->_data);
//	}
//	printf("NULL\n");
//}
//void SListreverse(SList* plist)
//{
//
//	SListNode* tmp = plist->_head->_next;
//	SListNode* cur = plist->_head;
//	while (tmp)
//	{
//		cur->_next = tmp->_next;
//		tmp->_next = plist->_head;
//		plist->_head = tmp;
//		tmp = cur->_next;
//
//	}
//	 
//}
//int main2()
//{
//	/*输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//		输出：7 -> 0 -> 8
//		原因：342 + 465 = 807*/
//	SList  plist;
//	SListInit(&plist);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPushFront(&plist, 2);
//	SListreverse(&plist);
//	SListPrint(&plist);
//	 
//	 
//		 
//	SList plist1;
//	SListInit(&plist1);
//	SListPushFront(&plist1, 4);
//	SListPushFront(&plist1, 6);
//	SListPushFront(&plist1, 5);
//	SListreverse(&plist1);
//	SListPrint(&plist1); 
//	
//	SListNode *tmp = (&plist)->_head;
//	SListNode *tmp1 = (&plist1)->_head;
//		
//	int bai = (tmp->_data) * 100;
//	int bai1 = (tmp1->_data) * 100;
//	int shi = (tmp->_next->_data) * 10;
//	int shi1 = (tmp1->_next->_data) * 10;
//	int ge = (tmp->_next->_next->_data) * 1;
//	int ge1 = (tmp1->_next->_next->_data) * 1;
//	int shu = bai + shi + ge;
//	int shu1 = bai1 + shi1 + ge1;
//	//printf("%d  %d\n", shu, shu1);
//	int add = shu + shu1;
//
//	SList plist2;
//	SListInit(&plist2);
//	SListPushFront(&plist2, add/100);
//	SListPushFront(&plist2, add/10%10);
//	SListPushFront(&plist2, add%10);
//	SListPrint(&plist2);
//
//    system("pause");
//    return 0;
//}