#include"stdafx.h"
#include<iomanip>
#include<cstring>
#include <iostream>//
using namespace std;
struct word{//���ʽṹ
	char c[30];//���õ���
	int n;//���õ��ʳ��ִ���
}w[10000];


void main(void)
{
	char b[30], Str[30000];//���嵥�����飬�ַ�������
	int i = 0, m = 1, k = 0, flag = 0, x = 0;
	cout << "�������ַ�����";
	while (cin.get(Str[x]), Str[x++] != '\n');//�ӿո�ʼ��ȡ�����ַ�
	Str[x - 1] = '\0';
	x = 0;
	while (Str[x]){
		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') {//�ж��ַ��Ƿ�����ĸ
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
		cout << w[i].c << "   " << w[i].n << endl;//����������ʽṹ�еĵ��ʺ͸���
	cout << endl;
}


