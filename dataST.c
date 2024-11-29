//
//
//
//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//
//
//
//
//// inesert Node
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	int next;
//}SCORE;
//
//#define MAX_ST	20
//
//SCORE exam[MAX_ST] = { {-1, 0, "", 0} };
//
//SCORE test[22] = { {10, 50, "kim", 0}, {2, 80, "lew", 0}, {8, 50, "lew", 0}, {4, 45, "lee", 0}, {1, 90, "song", 0},\
//				   {3, 45, "kim", 0}, {5, 50, "song", 0 }, {9, 100, "lee", 0}, {7, 75, "moon", 0}, {6, 90, "park", 0},\
//				   {22, 0, "choi", 0}, {12, 28, "mo", 0 }, {18, 51, "lee", 0}, {14, 43, "lee", 0}, {11, 91, "min", 0},\
//				   {13, 41, "kim", 0}, {15, 15, "kong", 0}, {19, 100, "park", 0}, {17, 72, "seo", 0}, {16, 99, "lim", 0},\
//				   {20, 98, "do", 0}, {21, 100, "kong", 0} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//int Create_Data(SCORE * p)
//{
//	printf("\n사번을 입력하시오 => ");
//	scanf(" %d", &p->id);
//	printf("이름을 입력하시오 => ");
//	scanf(" %s", p->name);
//	printf("점수를 입력하시오 => ");
//	scanf("%d", &p->jumsu);
//	p->next = 0;
//
//	return 1;
//}
//
//int Print_All_Data(void)   //배열인쇄 코드
//{
//	int i, cnt = 0;
//
//	printf("Head.next = %d\n", exam[0].next);
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", i, exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next);
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", no, exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next);
//	return 1;
//}
//
//int Count_Data(void)     
//{
//	int i, cnt = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Insert_Data(SCORE * p)      //활용 
//{
//	int i, empty = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (empty == 0 && exam[i].id == 0)
//		{
//			empty = i;      //추가된 방의 인덱스를 넘겨줌
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;    //만약데이터가 있으면 
//		}
//	}
//
//	if (empty != 0)
//	{
//		exam[empty] = *p;
//		return empty;
//	}
//
//	return -1;  //자리가 엇으면 -1 
//}
//
//int Insert_Node(SCORE * d)
//{
//	// 코드 작성
//	int r = Insert_Data(d);
//	if (r < 0)                         //중복된데이터 걸러줌 insert에서  
//	{
//
//		return r;
//
//
//
//	}
//
//	int perv = 0;                 //현재 인덱스의 값
//	int next = exam[0].next;
//
//	for (;;) {
//
//
//		if ((next == 0) ||(exam[next].id > d ->id) ){  //앞에께 참이면 뒤를 안봄 
//
//
//
//			exam[r].next = next;
//			exam[perv].next = r;
//			return 1;
//
//		}
//
//			perv = next;
//			next = exam[perv].next;
//
//	}
//
//
//}
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Data Count = %d\n", Count_Data());
//	}
//}



//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	int next;
//}SCORE;
//
//#define MAX_ST	20
//
//SCORE exam[MAX_ST] = { {-1, 0, "", 0} };
//
//SCORE test[22] = { {10, 50, "kim", 0}, {2, 80, "lew", 0}, {8, 50, "lew", 0}, {4, 45, "lee", 0}, {1, 90, "song", 0},\
//				   {3, 45, "kim", 0}, {5, 50, "song", 0 }, {9, 100, "lee", 0}, {7, 75, "moon", 0}, {6, 90, "park", 0},\
//				   {22, 0, "choi", 0}, {12, 28, "mo", 0 }, {18, 51, "lee", 0}, {14, 43, "lee", 0}, {11, 91, "min", 0},\
//				   {13, 41, "kim", 0}, {15, 15, "kong", 0}, {19, 100, "park", 0}, {17, 72, "seo", 0}, {16, 99, "lim", 0},\
//				   {20, 98, "do", 0}, {21, 100, "kong", 0} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//int Create_Data(SCORE * p)
//{
//	printf("\n사번을 입력하시오 => ");
//	scanf(" %d", &p->id);
//	printf("이름을 입력하시오 => ");
//	scanf(" %s", p->name);
//	printf("점수를 입력하시오 => ");
//	scanf("%d", &p->jumsu);
//	p->next = 0;
//
//	return 1;
//}
//
//int Print_All_Data(void)
//{
//	int i, cnt = 0;
//
//	printf("Head.next = %d\n", exam[0].next);
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", i, exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next);
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", no, exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next);
//	return 1;
//}
//
//int Count_Data(void)
//{
//	int i, cnt = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Insert_Data(SCORE * p)
//{
//	int i, empty = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (empty == 0 && exam[i].id == 0)
//		{
//			empty = i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	if (empty != 0)
//	{
//		exam[empty] = *p;
//		return empty;
//	}
//
//	return -1;
//}
//
//int Insert_Node(SCORE * d)
//{
//	int prev = 0;
//	int next = exam[0].next;
//	int pos = Insert_Data(d);
//
//	if (pos < 0)
//	{
//		return pos;
//	}
//
//	for (;;)
//	{
//		if ((next == 0) || (d->id < exam[next].id))
//		{
//			exam[pos].next = next;
//			exam[prev].next = pos;
//			return 1;
//		}
//
//		prev = next;
//		next = exam[next].next;
//	}
//}
//
//int Print_All_Node(void)
//{
//	int n = exam[0].next;
//	int cnt = 0;
//
//	for (;;)
//	{
//		if (n == 0) return cnt;
//		Print_Data(n);
//		n = exam[n].next;
//		cnt++;
//	}
//}
//
//int Search_Id_Node(int id)
//{
//	int next = exam[0].next;  
//
//	for (;;)
//	{
//		if ((next == 0) || ( exam[next].id) >id)
//		{
//	
//			return -1;
//		}
//
//		
//
//		if (exam[next].id == id) {
//			return next;
//		}
//			next = exam[next].next;
//		
//	}
//
//
//}
//
//void main(void)
//{
//	int i;
//	int pos;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&test[i]));
//	}
//
//	printf("Printed Data Count = %d\n", Print_All_Node());
//
//	printf("Searched Node Index = %d\n", pos = Search_Id_Node(8));
//
//	if (pos != -1)
//	{
//		Print_Data(pos);
//	}
//
//	printf("Searched Node Index = %d\n", pos = Search_Id_Node(7));
//
//	if (pos != -1)
//	{
//		Print_Data(pos);
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	int next;
//}SCORE;
//
//#define MAX_ST	20
//
//SCORE exam[MAX_ST] = { {-1, 0, "", 0} };
//
//SCORE test[22] = { {10, 50, "kim", 0}, {2, 80, "lew", 0}, {8, 50, "lew", 0}, {4, 45, "lee", 0}, {1, 90, "song", 0},\
//				   {3, 45, "kim", 0}, {5, 50, "song", 0 }, {9, 100, "lee", 0}, {7, 75, "moon", 0}, {6, 90, "park", 0},\
//				   {22, 0, "choi", 0}, {12, 28, "mo", 0 }, {18, 51, "lee", 0}, {14, 43, "lee", 0}, {11, 91, "min", 0},\
//				   {13, 41, "kim", 0}, {15, 15, "kong", 0}, {19, 100, "park", 0}, {17, 72, "seo", 0}, {16, 99, "lim", 0},\
//				   {20, 98, "do", 0}, {21, 100, "kong", 0} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//int Create_Data(SCORE * p)
//{
//	printf("\n사번을 입력하시오 => ");
//	scanf(" %d", &p->id);
//	printf("이름을 입력하시오 => ");
//	scanf(" %s", p->name);
//	printf("점수를 입력하시오 => ");
//	scanf("%d", &p->jumsu);
//	p->next = 0;
//
//	return 1;
//}
//
//int Print_All_Data(void)
//{
//	int i, cnt = 0;
//
//	printf("Head.next = %d\n", exam[0].next);
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", i, exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next);
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] ID=%d, NAME=%s, SCORE=%d, next = %d\n", no, exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next);
//	return 1;
//}
//
//int Count_Data(void)
//{
//	int i, cnt = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//		cnt++;
//	}
//
//	return cnt;
//}
//
//int Insert_Data(SCORE * p)
//{
//	int i, empty = 0;
//
//	for (i = 1; i < MAX_ST; i++)
//	{
//		if (empty == 0 && exam[i].id == 0)
//		{
//			empty = i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	if (empty != 0)
//	{
//		exam[empty] = *p;
//		return empty;
//	}
//
//	return -1;
//}
//
//int Insert_Node(SCORE * d)
//{
//	int prev = 0;
//	int next = exam[0].next;
//	int pos = Insert_Data(d);
//
//	if (pos < 0)
//	{
//		return pos;
//	}
//
//	for (;;)
//	{
//		if ((next == 0) || (d->id < exam[next].id))
//		{
//			exam[pos].next = next;
//			exam[prev].next = pos;
//			return 1;
//		}
//
//		prev = next;
//		next = exam[next].next;
//	}
//}
//
//int Print_All_Node(void)
//{
//	int n = exam[0].next;
//	int cnt = 0;
//
//	for (;;)
//	{
//		if (n == 0) return cnt;
//		Print_Data(n);
//		n = exam[n].next;
//		cnt++;
//	}
//}
//
//int Search_Id_Node(int id)
//{
//	int n = exam[0].next;
//
//	for (;;)
//	{
//		if (n == 0 || exam[n].id > id) return -1;
//		if (exam[n].id == id) return n;
//		n = exam[n].next;
//	}
//}
//
//int Delete_Node(int id)
//{
//	
//	int curr = 0;
//	int next = exam[0].next;  //헤더는 0
//
//	for (;;)
//	{
//		if ((next == 0) || (exam[next].id) > id)
//		{
//
//			return -1;
//		}
//
//
//
//		if (exam[next].id == id) {
//
//			exam[curr].next = exam[next].next;   //뒤에는 삭제의 노드
//
//			exam[next].id = 0;
//			
//
//			return  1;
//		}
//
//		curr = next;
//		next = exam[next].next; //전진 자기자신의 헤더
//
//	}
//
//
//}
//
//
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&test[i]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node());
//
//	printf("Delete Node(%d) Result = %d\n", 8, Delete_Node(8));
//	printf("Delete Node(%d) Result = %d\n", 7, Delete_Node(7));
//	printf("Delete Node(%d) Result = %d\n", 1, Delete_Node(1));
//	printf("Delete Node(%d) Result = %d\n", 10, Delete_Node(10));
//
//	printf("Printed Node Count = %d\n", Print_All_Node());
//}

//#include <stdio.h>
//
//#define MAX_STACK		10
//#define STACK_EMPTY	MAX_STACK
//#define STACK_FULL		0
//
//int Push_Stack(int data);
//int Pop_Stack(int *p);
//int Print_Stack(void);
//int Count_Full_Data_Stack(void);
//int Count_Empty_Data_Stack(void);
//
//int a[MAX_STACK + 1] = { 1,2,3,4,5,6,7,8,9,10,11 };
//int Stack[MAX_STACK];
//int Sptr = STACK_EMPTY;
//
//int Push_Stack(int data)
//{
//	if (Sptr == STACK_FULL) return -1;
//
//	Sptr--;
//	Stack[Sptr] = data;
//	return 1;
//
//}
//
//int Pop_Stack(int *p)
//{
//	if (Sptr == STACK_EMPTY) return -1;
//
//
//	*p = Stack[Sptr];
//	Sptr++;
//	return 1;
//
//
//}
//int Print_Stack(void)
//{
//	int count = 0;
//	for (int i = Sptr; i < STACK_EMPTY; i++) {
//
//		printf("STACK[%d] = %d\n", i, Stack[i]);
//
//		
//		count++;
//	}return count;
//}
//	int Count_Full_Data_Stack(void)
//	{
//
//		return STACK_EMPTY - Sptr;
//	}
//
//	int Count_Empty_Data_Stack(void)
//	{
//		return  Sptr - STACK_FULL;
//	}
//
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//}



#include <stdio.h>

#define MAX_Q       8
#define Q_MIN       0
#define Q_MAX       MAX_Q

int In_Queue(int data);
int Out_Queue(int *p);
int Print_Queue(void);
int Count_Full_Data_Queue(void);
int Count_Empty_Data_Queue(void);

int a[MAX_Q + 1] = { 1,2,3,4,5,6,7,8,9 };
int Queue[MAX_Q];
int Wrptr = Q_MIN;
int Rdptr = Q_MIN;

int In_Queue(int data)
{
	if (((Wrptr + 1) % MAX_Q) == Rdptr)
	{
		return -1;
	}

	Queue[Wrptr] = data;
	Wrptr = (Wrptr + 1) % MAX_Q;
	return 1;
}

int Out_Queue(int *p)
{
	if (Rdptr == Wrptr)
	{
		return -1;
	}

	*p = Queue[Rdptr];
	Rdptr = (Rdptr + 1) % MAX_Q;
	return 1;
}

int Print_Queue(void)
{
	int i;
	int rd = Rdptr;
	int n = Count_Full_Data_Queue();

	for (i = 0; i < n; i++)
	{
		printf("Queue[%d] = %d\n", rd, Queue[rd]);
		rd = (rd + 1) % MAX_Q;
	}

	return n;
}

int Count_Full_Data_Queue(void)
{
	if (Rdptr > Wrptr) return MAX_Q - (Rdptr - Wrptr);
	return Wrptr - Rdptr;
}

int Count_Empty_Data_Queue(void)
{
	return MAX_Q - Count_Full_Data_Queue() - 1;
}

void main(void)
{
	int i;

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < 3; i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < 3; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}