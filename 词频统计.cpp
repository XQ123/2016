#include"stdafx.h"
#include<iomanip>
#include<cstring>
#include <iostream>//
using namespace std;
struct word{//单词结构
	char c[30];//放置单词
	int n;//放置单词出现次数
}w[10000];


void main(void)
{
	char b[30], Str[30000];//定义单词数组，字符串数组
	int i = 0, m = 1, k = 0, flag = 0, x = 0;
	cout << "请输入字符串：";
	while (cin.get(Str[x]), Str[x++] != '\n');//从空格开始读取单词字符
	Str[x - 1] = '\0';
	x = 0;
	while (Str[x]){
		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') {//判断字符是否是字母
			b[i++] = Str[x];
			
			flag = 1;
		}
		else if (flag){
			b[i] = '\0';
			flag = m = 0;
			for (i = 0; i<k; i++){
				if (strcmp(b, w[i].c) == 0){
					m = 1;
					break;
				}
			}
			if (!m){
				w[k].n = 1;
				strcpy_s(w[k++].c, b);
			}
			else w[i].n++;
			i = 0;
		}
		x++;
	}
	for (i = 0; i<k; i++)
		cout << w[i].c << "   " << w[i].n << endl;//依次输出单词结构中的单词和个数
	cout << endl;
}


