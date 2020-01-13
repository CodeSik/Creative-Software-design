#include <iostream>

using namespace std;

struct YourVectorNode
{
	//Do Not modify this struct
	int value;
	YourVectorNode* next; // dont have to use *struct Point

};


void Initialize_List(); //초기화 함수
void Input(int value, YourVectorNode* head); //데이터 삽입함수
void search(int index, YourVectorNode* head);
void print(YourVectorNode*p);

int main(void)
{
	YourVectorNode* head = new YourVectorNode(); //헤드 생성
	head->value = 0;
	head->next = NULL;
	YourVectorNode * p = head;

	while (true)
	{
		
		int input;
		cout << "1:ADD / 2:FIND / 3:PRINT / 0:QUIT >";
		cin >> input;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (input == 0) {
			break;
		}
		else if (input == 1)
		{
			int value;
			cout << "Input Value >";
			cin >> value;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Input(value, p);
		}
		else if (input == 2)
		{
			int index;
			cout << "Input index >";
			cin >> index;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			search(index, p);
		}
		else if (input == 3)
		{
			print(p);
		}
	}
	p = head;
	while (p != NULL)
	{
		YourVectorNode* target = p;
		p = p->next;
		delete target;
	}
	return 0;
}

void Initialize_List() {
	YourVectorNode* head = new YourVectorNode(); //헤드와 꼬리 생성
	head->value = 0;
	head->next = NULL;
}

void Input(int value, YourVectorNode* p ) {
	YourVectorNode * node = new YourVectorNode();
	node->value = value;
	node->next = NULL;
	while (1) {
		if (p->next != NULL)
			p = p->next;
		else
			break;
	}
	p->next = node;
	p = node;
}

void search(int index, YourVectorNode* p) {

	for (YourVectorNode* node = p->next;; node = node->next, index--)
	{
		if (node->next == NULL && index >= 1)
		{
			cout << "index value is too much" << endl;
			break;
		}
		else if (index == 0)
		{
			cout <<"The value is "<< node->value << endl;
			break;
		}
	}
}

void print(YourVectorNode *p) {
	for ( p; p->next != NULL; p = p->next)
	{
		cout << p->next->value << " ";
	}
	cout << endl;
}
