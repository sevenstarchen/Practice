/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/12
*版 本 号：v1.0
*问题描述：有一根绳子，上面有红、白、蓝三种颜色的旗子。绳子上旗子的颜色并没有顺序，现在要对旗子进行分类，按照蓝色、白色、红色的顺序排列。只能在绳子上进行移动，并且一次只能调换两面旗子，怎样移动才能使旗子移动的次数最少？
*程序输出：调整好的顺序	
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



