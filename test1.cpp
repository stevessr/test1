// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
#include <iostream>
#include <string>
using std::cout;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    }
};

int main()
{
    cout << "Hello World!\n";
    cout << std::to_string(114514);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
*/

#include <iostream>
#include <cstdio>
#include <ctime>
int main() {
    //time test
    clock_t start, end;
    start = clock();
    std::ios::sync_with_stdio(false);//no sync
    std::cin.tie(NULL); 
    std::cout.tie(NULL);
    bool way = false;
    for (int i=0; i < 100; i++) {
        if (way) {
            printf_s("%d\n",i);
        }
        else {
            std::cout << i << "\n";
            //std::cout.put(i)<<"\n";
        }
    }
    end = clock();
    if (way) {
        printf_s("%d", end - start);
    }
    else {
        std::cout << end - start;
    }
    return 0;
}