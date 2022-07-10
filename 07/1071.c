#include <stdio.h>
#define N 3

typedef struct Employee {
    char Name[20];
    char Phone[11];
    int id;
} Employee;

int main() {
    
    Employee emps[N];
    
    for (int i=0; i<N; i++) {
        scanf("%s", emps[i].Name);
        scanf("%s", emps[i].Phone);
        scanf("%d", &emps[i].id);
    }
    
    int fid;
    scanf("%d", &fid);
    
    int found = 0;
    for (int i=0; i<N; i++) {
        Employee emp = emps[i];
        if (emp.id == fid) {
            found = 1;
            printf("found\n");
            printf("Name: %s\n", emp.Name);
            printf("Phone: %s\n", emp.Phone);
            printf("Id: %d\n", emp.id);
            break;
        }
    }
    
    if (!found) {
        printf("not found");
    }
    
    return 0;
}

/**
 說明
 請寫一程式可以連續儲存3名公司職員的姓名、電話與職員編號，並可依職員編號查尋。 若找不到則輸出not found

 struct Employee
 {
     char Name[20];
     char Phone[11];
     int id;
 };
 Input Format
 姓名1
 電話1
 編號1
 ...
 姓名3
 電話3
 編號3
 查尋編號：

 Output Format
 姓名n
 電話n
 編號n
 或
 not found

 Sample Input
 John
 0987456321
 77
 May
 0937554412
 88
 Jeff
 0912654785
 99
 88
 
 Sample Output
 found
 Name: May
 Phone: 0937554412
 Id: 88
 
 Hint
 最後要輸出 not found 可以使用「旗標」這個概念來完成
 令一變數初值為1，令found改變此變數為0，若此變數在程式結束前仍為1則not found
 */
