#include <iostream>                                 
using namespace std; 

// 定义链表节点结构体
struct Node {
    int x;
    Node* next;
    Node(int val) : x(val), next(NULL) {}
};

class Link {
private:
    Node* head;
    Node* tail;
public:
    // 构造函数
    Link() : head(NULL), tail(NULL) {}

    // 复制构造函数
    Link(const Link& other) : head(NULL), tail(NULL) {

    }

    // 析构函数
    ~Link() { 

    }

    // 在链表尾添加值为v的新节点
    void add(int v) {
        Node* node = new Node(v);
        if (head == NULL) 
        {
            head = tail = node;
        }
        else 
        {
            tail->next = node;
            tail = node;
        }
    }

    // 删除链表中第一个找到的值为v的节点
    void del(int v) {
        if(head == NULL) return ;

        if(head->x == v) 
        {
            Node * temp = head;
            head =head->next;
            delete temp;
            if (head == NULL) tail = NULL;
            return ;
        }

        Node * a = head ;
        while( a->next )
        {
            if (a->next->x == v )  
            {    
                Node * temp = a->next;
                a->next = a->next->next;
                if (temp == tail) tail = a;
                delete temp;
                return ;
            }
            a = a->next;
        } 
    }

    // 输出链表数据
    void show() {
        Node * a = head ;
        cout << a->x << ' ';
        while(a != tail)
        {
            a = a ->next;
            cout << a->x << ' ';
        }
        cout << endl;    
    }
    
};

int n,x,y;
Link link;

int main()
{
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(x==1){
            link.add(y);
        }else if(x==2){
            link.del(y);
        }else{
            link.show();
        }
    }
    return 0;
}