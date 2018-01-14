#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
class list {
private:
    node *head, *tail;
public:
    list() {
        // 링크드리스트를 초기화하는 코드를 작성합니다.
    }
    void display() {
        node *temp = new node;
        temp = head;
        while (temp!=NULL)
        {
            cout <<"|"<< temp->data << "|" ;
            temp = temp->next;
        }
        cout << endl;
    }
    void create(int value) {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void del_all() {
      node *prev = new node;
      node *curr = new node;
      curr = head;
      while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
      }
      tail = prev;
      prev->next = NULL;
      delete curr;
      cout << "deleting end number" << endl;
      }
    };
int main() {
    list a;
    a.create(5);
    a.create(10);
    a.create(15);
    a.create(20);
    a.display();
    a.del_all(); //ASSIGNMENT "del_all()"
    a.display();

    return 0;
}
