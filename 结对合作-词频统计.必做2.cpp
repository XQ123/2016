#include"stdafx.h" 
 #include<iomanip>
 #include<fstream>
 #include<cstring>
 #include <iostream>// 
 using namespace std;
 struct word{//���ʽṹ 
	 	char c[30];//��������ѯ�ĵ��� 
 };


int main(void)
{
	int i = 0, m = 1, k = 0,  x = 0,num=0;
	char b[30], Str[30000];//������ʱ��ŵ��ʵ�������ַ�������
	word *p;
	ifstream infile("A_Tale_of_Two_Cities.txt"); //�����ļ��������ļ�ֱ�ӷ���ͬĿ¼�� 
	if (!infile)
	{
		cout << "���ܴ��ļ�";
	}
	while (!infile.eof())
	{
		infile.getline(Str, 30000);
	}
	infile.close();


	cout << "����������ѯ���ʣ�";//������ѯ�ĵ��ʵ�������һ������
	cin >> p->c;
	Str[x - 1] = '\0';
		x = 0;
	 	while (Str[x]){
		 		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') 
				{//�ж��Ƿ��ǵ��� 
			 			b[i++] = Str[x];//����ǵĻ����ַ��ŵ���ʱ��ŵ��ʵ������� 
			

				}
				else
				{
					if (!strcmp(p->c, b))//����ѯ�ĵ�������ʱ�洢�ĵ��ʱȽ��Ƿ���ͬ
					{
						num++;//��ͬ�Ļ�������1
						for (k = 0; k << 30; k++)
							b[k] = '\0';//��ʱ�洢���ʵ������ÿմ�
						i = 0;
					}
				}
				cout << num << endl;
				return 0;
	 }


