/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/12
*�� �� �ţ�v1.0
*������������һ�����ӣ������к졢�ס���������ɫ�����ӡ����������ӵ���ɫ��û��˳������Ҫ�����ӽ��з��࣬������ɫ����ɫ����ɫ��˳�����С�ֻ���������Ͻ����ƶ�������һ��ֻ�ܵ����������ӣ������ƶ�����ʹ�����ƶ��Ĵ������٣�
*��������������õ�˳��	
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
#define BLUE 'B'
#define WHITE 'W'
#define RED 'R'
//#define color[] = { 'R','W','B','W','W','B','R','B','W','R','\0' };
void swap(int x, int y,char color[]) {
	char temp;
	temp = color[x];
	color[x] = color[y]; 
	color[y] = temp; 
}

int main() {
	char color[] = { 'R','W','B','W','W','B','R','B','W','R','\0' };
	int b=0, w = 0;
	int r = strlen(color) - 1;
	for (int i = 0; i < r+1; i++)
		printf("%c ", color[i]);
	printf("\n");
	while(w<=r) {
		if (color[w] == BLUE) {
			swap(b, w,color);
			b++;
			w++;
		}
		else 
			if (color[w] == WHITE){
			w++;
		}
			else
		{
			swap(w, r,color);
			r--;
			w++;
		}
	}
	r = strlen(color) - 1;
	for (int i = 0; i < r+1; i++)
		printf("%c ", color[i]);
	printf("\n");
	}



