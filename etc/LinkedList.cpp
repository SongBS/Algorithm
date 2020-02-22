
#include <iostream>

using namespace std;

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct List {
	int count;
	struct Node* head;
}List;

static List* nodeList;

static int initList();
static int addNode(int data);
static int addNodeAtFirst(int data);


static int initList()
{
	nodeList = new List;
	nodeList->count = 0;
	nodeList->head = NULL;
	return 0;
}

static int addNode(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;

	if (nodeList->head == NULL) {
		nodeList->head = new_node;
	}
	else {
		Node* curr_node = nodeList->head;
		while (1) {
			if (curr_node->next == NULL) {
				curr_node->next = new_node;
				break;
			}
			else {
				curr_node = curr_node->next;
			}
		}
	}
	nodeList->count++;
	cout << "insert node :: count [" << nodeList->count << "]" << endl;
	return 0;
}

static int addNodeAtFirst(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;

	if (nodeList->head == NULL) {
		nodeList->head = new_node;
	}
	else {
		new_node->next = nodeList->head;
		nodeList->head = new_node;
	}
	return 0;
}

static int printNode()
{
	cout << "-- print node -- " << endl;
	if (nodeList->head == NULL){
		cout << "node list empty!" << endl;
		return -1;
	}
	else {
		Node* curr = nodeList->head;
		int num = 0;
		while (curr != NULL) {
			printf("node[%d] data[%d]\n", num, curr->data);
			curr = curr->next;
		}
	}
	return 0;
}

int main()
{
	cout << "This is Linked List." << endl;

	initList();
	addNode(1);
	addNode(2);
	addNodeAtFirst(3);
	printNode();

	return 0;
}

