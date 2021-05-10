// #include <iostream>
// #include <vector>
// using namespace std;
// void BubbleSort1(vector<int> &R ,int n)
// {
// 	int i,j;  bool exchange;  int temp;
// 	for (i = 0; i < n - 1; i++)
// 	{
// 		exchange = false;
// 		for (j = n - 1; j > i; j--)//比较,找出最小关键字的记录
// 			if (R[j] < R[j - 1])
// 			{
// 				temp = R[j];  R[j] = R[j - 1];  R[j - 1] = temp;
// 				exchange = true;
// 			}
// 		if (exchange == false) return;  //中途结束算法
// 	}
// }

// // void QuickSort(vector<int>& R,int s,int t)
// // //对R[s]至R[t]的元素进行快速排序
// // {
// // 	int i = s,j = t; int tmp;
// // 	if (s < t)         		//区间内至少存在2个元素的情况
// // 	{
// // 		tmp = R[s];	   	//用区间的第1个记录作为基准
// // 		while (i != j)  		//两端交替向中间扫描,直至i=j为止
// // 		{
// // 			while (j > i && R[j] >= tmp)   j--;
// // 			R[i] = R[j];
// // 			while (i < j && R[i] <= tmp)   i++;
// // 			R[j] = R[i];
// // 		}
// // 		R[i] = tmp;
// // 		QuickSort(R,s,i - 1); 	//对左区间递归排序
// // 		QuickSort(R,i + 1,t); 	//对右区间递归排序
// // 	}
// // 	//递归出口：不需要任何操作
// // }
// std::vector<int> sort(std::vector<int>& list, int s, int t)
// {
//     int i = s, j = t;
//     if (s < t) //at least 2 elements are in the list 
//     {   
//         int tmp = list[s];
//         while(i != j)
//         {
//             while(i < j && list[j] >= tmp) j--;
//             list[i] = list[j];

//             while (i < j && list[i] <= tmp) i++;
//             list[j] = list[i];
//         }
//         list[i] = tmp;

//      sort(list, s, i-1);
//      sort(list, i+1, t);
//     }
//     return list;
// }

// int search_helper(std::vector<int>& v, const int& x, int l, int r)
// {
//     if(l > r) return -1;

//     int m = (l + r) / 2;
    
    
//     if (v[m] == x)
//         return m;
//     else if(x > v[m])
//         return search_helper(v, x, m + 1, r);
//     else 
//         return search_helper(v, x,l, m -1);      
    
// }

// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(9);
//     v.push_back(11);

//     //BubbleSort1(v, 4);
//     //v = sort(v,0,3);

//     cout << search_helper(v, 11, 0, 3);
//     // for(int i = 0; i < 4; i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
// }