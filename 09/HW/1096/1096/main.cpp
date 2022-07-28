//
//  main.cpp
//  1096
//
//  Created by user on 2022/7/16.
//


#include <iostream>

using namespace std;

class eCash {
private:
    int Money;
public:
    eCash();
    ~eCash();
    void store(int);
    void pay(int);
    void display();
};

int main() {
    
    int m = 0;
    eCash obj;

    char input;
    do {
        cin >> input;
        switch (input) {
            case 's':
                cin >> m;
                obj.store(m);
                break;
            case 'p':
                cin >> m;
                obj.pay(m);
                break;
            case 'd':
                obj.display();
                break;
        }
    } while (input != 'q');
    
    return 0;
}

eCash::eCash() {
    Money = 0;
}

eCash::~eCash() {
    cout << "eCash: Thank you. Bye Bye." << endl;
}

void eCash::store(int m) {
    if (m > 0) {
        Money += m;
        cout << "eCash: You stored " << m << "." << endl;
    } else {
        cout << "eCash: Please enter a number > 0." << endl;
    }
}

void eCash::pay(int m) {
    if (m < 0) {
        cout << "eCash: Please enter a number > 0." << endl;
    } else if (Money < m) {
        cout << "eCash: Insufficient balance." << endl;
    } else {
        Money -= m;
        cout << "eCash: You spend " << m << "." << endl;
    }
}

void eCash::display() {
    cout << "eCash: You remaining " << Money << "." << endl;
}
