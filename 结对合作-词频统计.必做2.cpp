#include"stdafx.h" 
 #include<iomanip>
 #include<fstream>
 #include<cstring>
 #include <iostream>// 
 using namespace std;
 struct word{//单词结构 
	 	char c[30];//放置欲查询的单词 
 };


int main(void)
{
	int i = 0, m = 1, k = 0,  x = 0,num=0;
	char b[30], Str[30000];//定义临时存放单词的数组和字符串数组
	word *p;
	ifstream infile("A_Tale_of_Two_Cities.txt"); //读入文件流，将文件直接放在同目录下 
	if (!infile)
	{
		cout << "不能打开文件";
	}
	while (!infile.eof())
	{
		infile.getline(Str, 30000);
	}
	infile.close();


	cout << "请输入所查询单词：";//将所查询的单词单独输入一个数组
	cin >> p->c;
	Str[x - 1] = '\0';
		x = 0;
	 	while (Str[x]){
		 		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') 
				{//判断是否是单词 
			 			b[i++] = Str[x];//如果是的话将字符放到临时存放单词的数组中 
			

				}
				else
				{
					if (!strcmp(p->c, b))//欲查询的单词与临时存储的单词比较是否相同
					{
						num++;//相同的话次数加1
						for (k = 0; k << 30; k++)
							b[k] = '\0';//临时存储单词的数组置空串
						i = 0;
					}
				}
				cout << num << endl;
				return 0;
	 }


