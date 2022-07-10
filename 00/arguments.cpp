//
//  main.cpp
//  arguments
//
//  Created by user on 2022/7/10.
//

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

// Call by Value
void callByVal(struct Person p) { // 這個是傳入「值」
    cout << "==呼叫callByVal==" << endl;
    p.name = "僅修改此區域參數，與引數無關";
    p.age = 30;
    cout << p.name << endl;
    cout << p.age << endl;
}

// Call by Address
void callByPtr(struct Person *p) { // 這個是傳入「指標」
    cout << "==呼叫callByPtr==" << endl;
    (*p).name = "透過指標修改引數";
    p->age = 20;
    cout << p->name << endl;
    cout << (*p).age << endl;
}

// Call by Reference
void callByRef(struct Person &p) { // 這個是傳入「參考」
    cout << "==呼叫callByRef==" << endl;
    p.name = "透過參考修改引數"; // 使用方式都跟傳Value一樣
    p.age = 10;
    cout << p.name << endl;
    cout << p.age << endl;
}

int main() {
    struct Person p = {"原本的名字", 5};
    cout << "==原結構內容==" << endl;
    cout << p.name << endl;
    cout << p.age << endl;

    callByVal(p);
    cout << "==原結構內容==" << endl;
    cout << p.name << endl;
    cout << p.age << endl;
    
    callByPtr(&p);
    cout << "==原結構內容==" << endl;
    cout << p.name << endl;
    cout << p.age << endl;
    
    callByRef(p); // 使用方式都跟傳Value一樣
    cout << "==原結構內容==" << endl;
    cout << p.name << endl;
    cout << p.age << endl;
    return 0;
}
