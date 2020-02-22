
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

static int add_node(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;

	if (nodeList->head == NULL) {
		nodeList->head = new_node;
	}
	else {
		Node* curr = nodeList->head;
		while (1) {
			if (curr->next == NULL) {
				curr->next = new_node;
				break;
			}
			else {
				curr = curr->next;
			}
		}
	}
	nodeList->count++;
	cout << "insert new node = " << nodeList->count << endl;

	return 0;
}

int addNodeFirst(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;

	if (nodeList->head == NULL) {
		nodeList->head = new_node;
	}

	return 0;
}

static int printNode()
{
	if (nodeList->head == NULL)
	{
		cout << "node list empty!" << endl;
		return -1;
	}
	else {
		
		Node* curr = nodeList->head;
		while (curr != NULL) {
			cout << curr->data << endl;
			curr = curr->next;
		}
	}
	return 0;
}

int main()
{
	cout << "This is Linked List." << endl;

	// init node list
	nodeList = new List;
	nodeList->count = 0;
	nodeList->head = NULL;

	add_node(1);
	add_node(2);
	add_node(3);
	add_node(4);

	printNode();

	return 0;
}

