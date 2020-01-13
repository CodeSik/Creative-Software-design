#include <iostream>

using namespace std;

int max_x = 0, max_y = 0; // 전체 좌표계 설정

struct Point {
	int x;
	int y;
};



void input(Point &p)
{
	cout << "좌표를 입력하세요." << endl;
	cin >> p.x;
	cin >> p.y;

}

void print(Point * pl, int index)
{

	if (max_x < pl[index-1].x)
		max_x = pl[index-1].x;
	if (max_y < pl[index-1].y)
		max_y = pl[index-1].y; // 좌표 확장

	
	int **arr = new int*[max_y +2];
	for (int i = 0; i <= max_y; i++) {
		arr[i] = new int[max_x + 2];
	} //동적 배열 2차원
	
	for (int i = 0; i <= max_y; i++) {
		for (int j = 0; j <= max_x; j++) {
			arr[i][j] = 0;
		}
	}
	
	// 모든 인덱스를 0으로 초기화
	for (int i = 0; i < index; i++)
	{
		arr[pl[i].y][pl[i].x] = 1;
	}
	
	// 좌표값에 해당하는 값의 위치는 1로 초기화

	for (int a = 0; a <= max_y; a++)
	{
		for (int b = 0; b <= max_x; b++)
		{
			if (arr[a][b] == 0)
				cout << ".";
			else
				cout << "*";
		}
		cout << endl;
	}



	for (int i = 0; i <= max_y; i++)
	{
		delete arr[i];
	}
	delete arr;
}
int main(void)
{
	const int SIZE = 100;
	Point *pl = new Point[SIZE];
	int pIndex = 0;
	while (1)
	{
		Point p{ 0,0 };
		input(p);

		if (p.x < 0 || p.y < 0) break;
		if (pIndex < SIZE) pl[pIndex++] = p;

		print(pl, pIndex);
	}
	delete[] pl;
	return 0;
}

