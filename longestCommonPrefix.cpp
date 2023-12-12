#include <iostream>
#include <string>
#include <vector>

using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        /*
        1、输入为空字符直接输出空字符
        2、输入不为空则判断输入是否为一个单词，如果输入为一个单词则直接输出，否则
        3、计算第i个字母相同的字符个数，如果个数为输入字符串个数，计算第i+1个字母相同的字符个数，否则输出0到i个字符
        */
        string result;
        int vl=strs.size();
        int sl=strs[0].length();
        int i=0,j=0;
        if(sl==0){
            return result;
        }
        else if(vl==1){
            return result=strs[0];
        }
        bool flag = true;
        while(flag && i<sl){//条件“i<sl”防止所有单词全相等造成指针溢出
            while(strs[0][i]==strs[j][i] && j<vl-1){//计算字母相等字符的个数，确保j小于字符个数
                j++;
            }
            if(j==vl-1 && strs[0][i]==strs[j][i]){//当计算完相同部分时，j已经指向下一个单词了，如果此时j==vl-1则会多输出一个字母，因此添加一个判断条件“strs[0][i]==strs[j][i]”，例如“["flower","flow","flight"]”
                i++;
                j=0;
            }
            else{
                flag=false;
            }
            }
        result = strs[0].substr(0,i);
        return result;
        }

int main(){
    vector<string> strs={""};
    cout<<longestCommonPrefix(strs);
    return 0;
}