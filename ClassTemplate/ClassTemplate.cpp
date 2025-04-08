/*Oscar ClassTemplate*/

#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
#include <random>   // C++11 亂數庫
#include <vector>   // std::vector
#include <numeric>  // std::iota
#include <map>      //std::map
#include <unordered_map>  //std::unordered_map

#include"ClassTemplate.h"
using namespace std;

DLL_API ClassTemplate ClassTemplateInstance;
enum LeetcodeExam {
    Leetcodexxx,

    None,
};

int main()
{
    //try case
    LeetcodeExam ExamEnum = Leetcodexxx;    //ChangeForExam
    //intput
    vector<int> vInput1 = { 7,13,11,10,1 };              
    vector<int> vInput2 = { 7,13,11,10,1 };              
    vector<vector<int>> vvInput1 = { {1,2} ,{2,3},{3,4},{1,3} };
    string strinput1 = "bab";
    string strinput2 = "xaabacxcabaaxcabaax";
    int iInput1 = 0;int iInput2 = 0;
    //output
    int Ans = 0; vector<int> AnsVector; string AnsStr = "";bool Ansbool = false;
    ClassTemplate* Implementation = new ClassTemplate();

    switch (ExamEnum)
    {
    case Leetcodexxx:
        AnsVector = Implementation->Leetcode_Sol_xxx(vInput1, iInput1,1);
        break;

    default:
        break;
    }
    #pragma region ClassTemplate
    ClassTemplate obj1;              // 呼叫預設建構式
    obj1.display();

    ClassTemplate obj2(10);          // 呼叫帶參數建構式
    obj2.display();

    obj1.setData(20);                // 修改資料成員
    obj1.display();

    return 0;
    #pragma endregion

    
}

#pragma region ClassTemplate
// 預設建構式，初始化指標
ClassTemplate::ClassTemplate() : data(new int(0)) {
    std::cout << "Default constructor called. Data initialized to 0." << std::endl;
}

// 帶參數建構式，初始化指標並設置初始值
ClassTemplate::ClassTemplate(int value) : data(new int(value)) {
    std::cout << "Parameterized constructor called. Data initialized to " << value << "." << std::endl;
}

// 解構式，釋放動態分配的記憶體
ClassTemplate::~ClassTemplate() {
    delete data;
    std::cout << "Destructor called. Memory for data released." << std::endl;
}

// 設定資料成員
void ClassTemplate::setData(int value) {
    *data = value;
}

// 取得資料成員
int ClassTemplate::getData() const {
    return *data;
}

// 顯示資料
void ClassTemplate::display() const {
    std::cout << "Data: " << *data << std::endl;
}
#pragma endregion

#pragma region Leetcode xxx. ExamName
//Leetcode xxx. ExamName
vector<int> ClassTemplate::Leetcode_Sol_xxx(vector<int>& numbers, int target,int _solution) {
    switch (_solution)
    {
    case 1:
        return Exam_xxx(numbers, target);
    default:
        return std::vector<int>{}; // 確保所有路徑都有回傳值
    }

    return{};
}

vector<int> ClassTemplate::Exam_xxx(vector<int>& numbers, int target) {
    return {};
}
#pragma endregion


