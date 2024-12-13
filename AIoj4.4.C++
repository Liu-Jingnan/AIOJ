#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string id;
    string name;
    int age;
    int score;
public:
    // 无参构造函数

    Student()
    {
        id = "2024001";
        name = "张三" ;
        age = 18 ;
        score = 95 ;
    }
    // 带参构造函数
    Student( string i , string n , int  a , int s )
    {
        id = i ;
        name = n ;
        age = a ;
        score = s ;
    }
    // 析构函数
    ~Student()
    {
        cout << id << ' ' << name << ' ' << age << ' ' << score << endl;
    }
};

int main() {
    int N;
    cin >> N;
    Student* students = new Student[N];
    for (int i = 0; i < N; ++i) {
        int choice;
        cin >> choice;
        if (choice == 1) {
            students[i] = Student();
        } else if (choice == 2) {
            string id, name;
            int age, score;
            cin >> id >> name >> age >> score;
            students[i] = Student(id, name, age, score);
        }
    }
    delete[] students;
    return 0;
}