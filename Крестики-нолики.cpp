#include<iostream>
#include<time.h>
using namespace std;

char symbl(int c) {
	switch (c) {
	case 0: return ' ';
		break;
	case 1: return 'X';
		break;
	case 2: return '0';
		break;
	}
}

void print_field(int field[3][3], int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		cout << symbl(field[i][0]) << " | " << symbl(field[i][1]) << " | " << symbl(field[i][2]) << " | " << endl;
		if(i<2) cout << "________" << endl;
	}
}
bool check(int field[3][3], int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; i < col; i++)
		{
			if (field[i][j] == 0)
				return false;
		}
	}
	return true;
}


int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));
	int field[3][3]{};//0 - �����, 1 - �������, 2 - �����
	bool win{ false }, full{ false };//����� �������� � ����������
	int x{}, y{};
	bool hum{};// ��� ��������
	do {
		if (hum) {//��� ��������
			//������ �������� ������������
			cout << "��� ��� ( ����� �� 1 �� 3 �� X � �� Y)" << endl;
			cin >> x >> y;
			field[y - 1][x - 1] = 1;
			full = check(field, 3, 3);
		}
		//��� �����
		else {

		}
		full = check(field, 3, 3);
			//������������ �����
			print_field(field, 3, 3);
		
	} while (!win && !full);
	


	return 0;
}