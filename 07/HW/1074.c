#include <stdio.h>

typedef struct Member {
    char name[80];
    char phone[80];
    char email[80];
} Member;

int main() {
    
    Member ms[50];
    int i = 0;
    
    char filename[80];
    FILE *f;

    char op;
    while (op != 'q') {
        scanf("%c", &op);
        switch (op) {
            case 'i':
                scanf("%s", ms[i].name);
                scanf("%s", ms[i].phone);
                scanf("%s", ms[i].email);
                i++;
//                printf("insert ok!!!\n");
                break;
            case 'l':
                if (i > 0) {
                    for (int j=0; j<i; j++) {
                        printf("#%d\n", j+1);
                        printf("Name: %s\n", ms[j].name);
                        printf("Phone: %s\n", ms[j].phone);
                        printf("Email: %s\n", ms[j].email);
                    }
                } else {
                    printf("No data.\n");
                }
//                printf("list ok!!!\n");
                break;
            case 's':
                scanf("%s", filename);
                f = fopen(filename, "w");
                fprintf(f, "%d\n", i);
                for (int j=0; j<i; j++) {
                    fprintf(f, "%s\t", ms[j].name);
                    fprintf(f, "%s\t", ms[j].phone);
                    fprintf(f, "%s\n", ms[j].email);
                }
                fclose(f);
//                printf("file save ok!!!\n");
                break;
            case 'o':
                scanf("%s", filename);
                f = fopen(filename, "r");
                fscanf(f, "%d", &i);
                for (int j=0; j<i; j++) {
                    fscanf(f, "%s\t", ms[j].name);
                    fscanf(f, "%s\t", ms[j].phone);
                    fscanf(f, "%s\n", ms[j].email);
                }
//                printf("file load ok!!!\n");
                break;
            case 'c':
                i = 0;
//                printf("clear ok!!!\n");
                break;
            case 'q':
//                printf("quit ok!!!\n");
                break;
            default:
                break;
        }
//        system("pause");
//        system("cls");
    }
    
    return 0;
}

/**
 說明
 製作一個通訊錄程式
 功能

 輸入’i’ 可輸入姓名, 電話, email
 輸入’l’ 依加入順序印出目前已輸入所有人員之內容，若無資料可印請輸出No data.
 輸入’s’ 輸入檔名, 將所有人員之內容存入檔案
 輸入’o’ 輸入檔名, 將所有人員之內容從檔案讀出
 輸入’c’ 恢復原廠設定, 清除所有已輸入的內容 (將程式回復到如同剛開啟的狀態)
 輸入’q’ 離開程式
 輸入之人數上限為50人
 參考範例:
 Addressbook.exe

 (上圖為參考用，批改系統中不需印出選單選項，否則會WA)
 
 Sample Input
 i
 John
 0937889965
 john@ntu.edu.tw
 i
 May
 0945625874
 may@ntu.edu.tw
 s
 phonebook.txt
 c
 o
 phonebook.txt
 l
 q
 
 Sample Output
 #1
 Name: John
 Phone: 0937889965
 Email: john@ntu.edu.tw
 #2
 Name: May
 Phone: 0945625874
 Email: may@ntu.edu.tw
 
 Sample File Output File Format
 存檔格式為純文字檔
 第一行為資料筆數N，以下有N行
 每筆資料內有姓名、電話、email，中間以\t為間隔
 如下：

 2
 John    0937889965      john@ntu.edu.tw
 May     0945625874      may@ntu.edu.tw
 
 本題輸入與輸出可以交錯如下
 [input ]l
 [output]No data.
 [input ]i
 [input ]John
 [input ]0937889965
 [input ]john@ntu.edu.tw
 [input ]l
 [output]#1
 [output]Name: John
 [output]Phone: 0937889965
 [output]Email: john@ntu.edu.tw
 [input ]i
 [input ]May
 [input ]0945625874
 [input ]may@ntu.edu.tw
 [input ]l
 [output]#1
 [output]Name: John
 [output]Phone: 0937889965
 [output]Email: john@ntu.edu.tw
 [output]#2
 [output]Name: May
 [output]Phone: 0945625874
 [output]Email: may@ntu.edu.tw
 [input ]s
 [input ]phonebook.txt
 [input ]c
 [input ]l
 [output]No data.
 [input ]o
 [input ]phonebook.txt
 [input ]l
 [output]#1
 [output]Name: John
 [output]Phone: 0937889965
 [output]Email: john@ntu.edu.tw
 [output]#2
 [output]Name: May
 [output]Phone: 0945625874
 [output]Email: may@ntu.edu.tw
 [input ]q
 
 Hint
 批改系統中不需印出選單選項，否則會WA
 本題不單螢幕輸出要與題目要求相同，檔案輸出也是，否則會WA
 */
