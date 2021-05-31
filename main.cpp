#include <iostream>
#include <stack>
#include <cctype>
#include "Convert.h"
using namespace std;



// int j = 0;//B中元素个数 

// //中缀转前缀,从后向前扫描,然后翻转 
// void in2pre(string A){
//     stack<int> num;
//     char B[] = {0};
//     bool check = false;
//     int len = A.length();
// 	for(int i=len-1; i>=0; --i){
// 		//数字直接入栈 
// 		if(isdigit(A[i]))
// 			num.push(A[i]);
// 		else if(A[i]== ' ')
// 			continue;
// 		// else if(A[i]=='('){
// 		// 	while(sign.top()!=')'){
// 		// 		B[j++] = sign.top();
// 		// 		sign.pop();
// 		// 	}
// 		// 	sign.pop();//删掉右括号 
// 		// }
// 		// //符号比较优先级 
// 		else{
// 			if(!check)
//                 if(A[i] == '+' || A[i] == '-'){
//                     B[j++] = '(';
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = A[i];
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = ')';
//                     check = true;}
//                 else
//                 {
//                     B[j++] = num.top(); num.pop();
//                     B[j++] = A[i];
//                     B[j++] = num.top(); num.pop();
//                     check = true;
//                 }
// 			else{
//                     B[j++] = A[i];
//                     B[j++] = num.top(); num.pop();
// 				//A[i]与栈顶元素比较优先级，直到遇到')'或者栈空 
// 				// while(!sign.empty() && sign.top()!=')' && you(A[i])<you(sign.top())){
// 				// 	B[j++] = sign.top();
// 				// 	sign.pop();
// 				// }
// 				// sign.push(A[i]);
// 			}
// 		} 
// 	} 
// 	//栈中如果还有符号，直接添加到B中就ok 
// 	// while(!sign.empty()){
// 	// 	B[j++] = sign.top();
// 	// 	sign.pop();
// 	// }
// 	// //翻转
// 	// for(int i=0; i<j/2; ++i){
// 	// 	int t = B[i];
// 	// 	B[i] = B[j-i-1];
// 	// 	B[j-i-1] = t;
// 	// } 
// } 

// double cal(char B[], int n)
// {
//     double ans, temp2, temp1; char op;
//     bool check2 = false;

//     stack<char> res;
//     for(int i = n-1; i > -1; i--)
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
//             temp1 = atoi(&res.top()); res.pop();
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
//             ans = temp1 - temp2;   //后缀表达式，操作符在原表达式中位于操作数2和操作数1之间
//         }
//         else if(op=='*'){
//             ans = temp1 * temp2;
//         }
//         else{
//             ans = temp1 / temp2;
//         }
//     }

//     return ans;
// }

// void polish(string str)
// {
//     char B[20] = {0};
//     int j = 0;
//     std::stack<char> num;
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
//     // for(int i=0; i<j; ++i){
// 	// 	    std::cout << B[i] << " ";
// 	//     }
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
int main(){
    string str;
    getline(cin, str);

    Convert* C = new Convert();
    C->Polish(str);
    //polish(str);
	return 0;
} 
