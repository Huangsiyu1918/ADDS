#include "Convert.h"
#include <stack>
#include <iostream>
#include <queue>
void Convert::Polish(std::string& str)
{
    std::stack<std::string> op;
    std::queue<std::string> num;
    int len = str.length();
    bool isNumber = false;
    bool isSpace = true;
    std::string temp = "";

    for(int i = 0; i <= len; i++)
    {
        if((i == len) || str[i] == ' ')
        {
            if(str[i] == ' ')
            {
                isSpace = true;
            }
            if(isNumber)
            {
                num.push(temp);
            }
            else
            {
                op.push(temp);
                if(isdigit(str[i+1]))
                {
                    isNumber = true;
                }
            }
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }

    if(!isSpace)
    {
        std::cout << "Error" << std::endl;
        return;
    }

    if(num.size() - 1 != op.size())
    {
         std::cout << "Error" << std::endl;
         return;
    }

    bool check = true;
    int res = stoi(num.front());
    std::string resStr = num.front();
    num.pop();

    while(!num.empty())
    {
        int i = stoi(num.front());
        std:: string j = num.front();
        std::string a = op.top();num.pop(); op.pop();

        if(a == "+")
        {
            resStr += " + " + j;
            res += i;
            check = false;
        }
        else if(a == "-")
        {
            resStr += " - " + j;
            res -= i;
            check = false;
        }
        else if(a == "*")
        {
            if(check)
            {
                resStr += " / " + j;
            }
            else
            {
                resStr = "(" + resStr + ")" + "*" + j;
            }
            res *= i;
        }
        else if(a == "/")
        {

            if(check)
            {
                resStr += " / " + j;
            }
            else
            {
                resStr = "(" + resStr + ")" + "/" + j;
            }
            res /= i;
        }
    }
    std::cout << resStr << " = " << res << std::endl;
}

// void oldVersion(std:;string str){
//     char B[20] = {0};
//     int j = 0;
//     std::stack<int> num;
//     int len = str.length();
//     bool check = false;
//     double ans, temp2, temp1; char op;
//     bool check2 = false;

// 	for(int i=len-1; i>=0; --i){
// 		if(isdigit(str[i]))
// 			num.push(str[i]);
// 		else if(str[i]== ' ')
// 			continue;
// 		else{
// 			if(!check)
//                 if(str[i] == '+' || str[i] == '-'){
//                     B[j++] = '(';
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = str[i];
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = ')';
//                     check = true;}
//                 else
//                 {
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = str[i];
//                     B[j++] = num.top(); num.pop();
//                     check = true;
//                 }
// 			else{
//                     B[j++] = str[i];
//                     B[j++] = num.top(); num.pop();
// 			}
// 		} 
	
//     }
//     std::stack<char> res;
//     for(int i = j-1; i > -1; i--)
//     {
//         res.push(B[i]);
//     }
//     while(!res.empty())
//     {
//         if(res.top() == '(' || res.top() == ')')
//         {
//             res.pop();
//             continue;
//         }

//         if(!check2)
//         {
//             if(!res.top())
//             {
//                 std:: cout << "Error";
//                 return;
//             }
//             temp1 = atoi(&res.top()); res.pop();
//               if(!res.top())
//             {
//                 std:: cout << "Error";
//                 return;
//             }
//             op = res.top(); res.pop();
//             temp2 = atoi(&res.top()); res.pop(); 
//             check2 = true;          
//         }
//         else
//         {    temp2 = ans;
//              op = res.top(); res.pop();
//              temp1 = atoi(&res.top()); res.pop();
//         }

//         if(op=='+'){
//             ans = temp1 + temp2;
//         }
//         else if(op=='-'){
//             ans = temp1 - temp2;   
//         }
//         else if(op=='*'){
//             ans = temp1 * temp2;
//         }
//         else{
//             ans = temp1 / temp2;
//         }
//     } 

//     	for(int i=0; i<j; ++i){
// 		    std::cout << B[i] << " ";
// 	    }
//         std::cout << "=" << " " << ans;
// }