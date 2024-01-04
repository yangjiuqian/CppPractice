#include <iostream>
#include <string>
#include <vector>
/*
14. 最长公共前缀
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
*/

using namespace std;
 int romanToInt(string s) {
        int i=0;
        int result;
        while(s[i]=='M'){
            result += 1000;
            i++;
        }
        while(s[i]=='D'){
            result += 500;
            i++;
        }
        while(s[i]=='C'){
            if(s[i+1]=='D'){
                 result += 400;
                 i+=2;
            }
            else if (s[i+1]=='M'){
                result += 900;
                i+=2;
            }
            else{
                result+=100;
                i++;
            }
        }
        while(s[i]=='L'){
            result+=50;
            i++;
        }
        while(s[i]=='X'){
            if(s[i+1]=='L'){
                 result += 40;
                 i+=2;
            }
            else if (s[i+1]=='C'){
                result += 90;
                i+=2;
            }
            else{
                result+=10;
                i++;
            }
        }
        while(s[i]=='V'){
            result+=5;
            i++;
        }
        while(s[i]=='I'){
            if(s[i+1]=='V'){
                 result += 4;
                 i+=2;
            }
            else if (s[i+1]=='X'){
                result += 9;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        return result;
    }

int main(){
    string strs={"III"};
    cout<<romanToInt(strs);
    return 0;
}
