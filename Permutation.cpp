#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Permutation_Generator {
    private:
        vector<char> chars; 

    public:
        void Input_Text(string Prompt);
        void Clear_Text(); 
        void Generate_Permutations();
};
void Permutation_Generator::Input_Text(string Prompt) {  /* 输入需要全排列的字符串 */
        chars.clear();          // 清空容器

        cout << Prompt;
        string input;
        getline(cin, input);
        for (char c : input) {
            chars.push_back(c);
        }
}
void Permutation_Generator::Clear_Text() {   /* 清空现有字符串 */
        chars.clear();
}
void Permutation_Generator::Generate_Permutations() {   /* 生成全排列 */
        sort(chars.begin(), chars.end());
        if(chars.empty() == true) {  // 判断是否为空
            cout << "内容为空" << endl;
        }
        do {   // 生成全排列
            string permutation(chars.begin(), chars.end());
            cout << permutation << endl;
        } while (next_permutation(chars.begin(), chars.end()));
}
int main() {
    //Demo
    Permutation_Generator Permutation;
    Permutation.Input_Text("请输入字符串：");
    Permutation.Generate_Permutations();
}