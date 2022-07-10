#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    string *strs = new string[N];

    for (int i=0; i<N; i++) {
        cin >> strs[i];
    }
    
    string temp;
    bool sorted;
    for (int j=N; j>1; j--) {
        sorted = true;
        for (int i=0; i<j-1; i++) {
            if (strs[i] > strs[i+1]) {
                temp = strs[i];
                strs[i] = strs[i+1];
                strs[i+1] = temp;
                sorted = false;
            }
        }
        if (sorted) {
            break;
        }
    }
    
    for (int i=0; i<N; i++) {
        cout << strs[i] << " ";
    }
    cout << endl;
    
    delete [] strs;
    
    return 0;
}


/**
 說明
 請撰寫一程式令
 使用C/C++動態記憶體配置
 令使用者輸入陣列大小N(1<=N<=600000)
 使用泡沫排序法排序或其他排序法
 印出從小到大排序的結果
 例如：
 輸入：gad dd cde zoo abc
 輸出：abc cde dd gad zoo

 Input Format
 第一行為陣列大小N(1<=N<=600000)
 第二行為N個字串：字串1 字串2 ... 字串N

 Output Format
 順序印出N個字串，每個字串後包含一空白(印完換行)

 Sample Input
 5
 gad dd cde zoo abc
 Sample Output
 abc cde dd gad zoo
 
 Hint
 若是已完成排序即可停止迴圈增進執行效率，加速完成排序。



 或是可以使用C qsort()/C++ STL的sort()
 */
