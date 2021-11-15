// 2021-11-15homework.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include"student.h"

using namespace std;

int main()
{
    random_generator(0, 19);
    int n;
    cout << "please input num" << endl;
    cin >> n;
    student* studentList = new student[n];
    student* bigguy = studentList; 
    student* idot = studentList;
    student* p = studentList;
    for (int i = 0; i < n; i++)
    {
        
        if (p->average_grade > bigguy->average_grade)
            bigguy = p;
        if (p->average_grade < idot->average_grade)
            idot = p;
        p++;
    }
    cout <<endl<< "the bigguy is " << endl;
    bigguy->output();
    cout <<endl<< "the noob is " << endl;
    idot->output();
    delete []studentList;

    //std::cout << "Hello World!\n";
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
