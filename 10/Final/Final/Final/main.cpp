//
//  main.cpp
//  Final
//
//  Created by user on 2022/7/20.
//

#include <iostream>
#include <fstream>

using namespace std;

class eCash {
private:
    int Money;
    string ID;
public:
    eCash();
    ~eCash();
    void login(string);
    void logout();
    void store(int);
    void pay(int);
    void display();
    void menu();
};

int main() {
    
    string id;
    int amount;
    char op = '0';
    
    eCash ecash;
    cin >> id;
    ecash.login(id);
    
    while (op != 'q') {
        ecash.menu();
        cin >> op;
        switch (op) {
            case 's':
                cout << "請輸入儲存金額:" << endl;
                cin >> amount;
                ecash.store(amount);
                break;
            case 'p':
                cout << "請輸入消費金額:" << endl;
                cin >> amount;
                ecash.pay(amount);
                break;
            case 'd':
                ecash.display();
                break;
            case 'q':
                ecash.logout();
                break;
        }
    }
    
    return 0;
}


eCash::eCash() {
    cout << "=== 歡迎使用eCash ===" << endl
    << "eCash: 請輸入您的帳號: ";
}
eCash::~eCash() {
    cout << "謝謝，ByeBye!" << endl;
}
void eCash::login(string id) {
    ID = id;
    ifstream file;
    file.open(id);
    if (file.is_open()) {
        file >> Money;
        cout << "eCash: 帳號開啟完成!" << endl;
    } else {
        Money = 0;
        cout << "eCash: 帳號不存在, 第一次使用!" << endl;
    }
}
void eCash::logout() {
    ofstream file;
    file.open(ID);
    file << Money;
    file.close();
    cout << "eCash: 帳號登出, 已存檔!" << endl;
}
void eCash::store(int i) {
    if (i > 0) {
        Money += i;
        cout << "eCash: 您存了" << i << "元" << endl;
    } else {
        cout << "eCash: 請輸入大於0的金額" << endl;
    }
}
void eCash::pay(int i) {
    if (i > Money) {
        cout << "eCash: 您的錢不夠" << endl;
    } else if (i > 0) {
        Money -= i;
        cout << "eCash: 您花了" << i << "元" << endl;
    } else {
        cout << "eCash: 請輸入大於0的金額" << endl;
    }
}
void eCash::display() {
    cout << "eCash: 您尚有" << Money << "元" << endl;
}
void eCash::menu() {
    cout  << endl << ID << "您好，請選擇項目:" << endl
    << "s: 儲值" << endl
    << "p: 消費" << endl
    << "d: 查詢餘額" << endl
    << "q: 離開" << endl
    << ">";
}

/**
 進階eCash程式
 • 要求:
 • 私有成員:
     • 屬性: Money 目前可用金額
     • 屬性: ID 使用者帳號
 • 公開成員:
     • 方法: login 登入
     • 方法: logout 登出
     • 方法: store 儲值
     • 方法: pay 消費 (提醒: 需判斷目前eCash是否有足夠的金額消費)
     • 方法: display 查詢目前餘額
 • 主程式
 • 輸入帳號登入後執行以下功能
 • 輸入’s’: 儲值
 • 輸入’p’: 消費
 • 輸入’d’:查詢餘額
 • 輸入’q’: 登出, 並離開程式
 • 程式會將各帳號與其餘額存入硬碟
 */
