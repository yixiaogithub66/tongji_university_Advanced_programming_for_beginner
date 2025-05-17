// ����ܽ����ο������Ը����Լ���������������޸�

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

// �뾡����Ҫʹ��ȫ�ֱ���

void wait_for_enter();
void print_menu();
void print_help();
void print_exit();
void print_interface(int board[4][4], int score, int step);
void play_game();

bool go_up(int board[4][4], int& score) {
	int old_board[4][4];
	memcpy(old_board, board, sizeof(old_board));
	for (int col = 0; col < 4; ++col) {
		for (int row = 1; row < 4; ++row) {
			if (board[row][col] != 0) {
				int target_row = row;
				while (target_row > 0 && board[target_row - 1][col] == 0) {
					board[target_row - 1][col] = board[target_row][col];
					board[target_row][col] = 0;
					--target_row;
				}
				if (target_row > 0 && board[target_row - 1][col] == board[target_row][col]) {
					board[target_row - 1][col] *= 2;
					score += board[target_row - 1][col];
					board[target_row][col] = 0;
				}
			}
		}
	}
	return memcmp(old_board, board, sizeof(old_board)) != 0;
}

bool go_down(int board[4][4], int& score) {
	int old_board[4][4];
	memcpy(old_board, board, sizeof(old_board));
	for (int col = 0; col < 4; ++col) {
		for (int row = 2; row >= 0; --row) {
			if (board[row][col] != 0) {
				int target_row = row;
				while (target_row < 3 && board[target_row + 1][col] == 0) {
					board[target_row + 1][col] = board[target_row][col];
					board[target_row][col] = 0;
					++target_row;
				}
				if (target_row < 3 && board[target_row + 1][col] == board[target_row][col]) {
					board[target_row + 1][col] *= 2;
					score += board[target_row + 1][col];
					board[target_row][col] = 0;
				}
			}
		}
	}
	return memcmp(old_board, board, sizeof(old_board)) != 0;
}

bool go_left(int board[4][4], int& score) {
	int old_board[4][4];
	memcpy(old_board, board, sizeof(old_board));
	for (int row = 0; row < 4; ++row) {
		for (int col = 1; col < 4; ++col) {
			if (board[row][col] != 0) {
				int target_col = col;
				while (target_col > 0 && board[row][target_col - 1] == 0) {
					board[row][target_col - 1] = board[row][target_col];
					board[row][target_col] = 0;
					--target_col;
				}
				if (target_col > 0 && board[row][target_col - 1] == board[row][target_col]) {
					board[row][target_col - 1] *= 2;
					score += board[row][target_col - 1];
					board[row][target_col] = 0;
				}
			}
		}
	}
	return memcmp(old_board, board, sizeof(old_board)) != 0;
}

bool go_right(int board[4][4], int& score) {
	int old_board[4][4];
	memcpy(old_board, board, sizeof(old_board));
	for (int row = 0; row < 4; ++row) {
		for (int col = 2; col >= 0; --col) {
			if (board[row][col] != 0) {
				int target_col = col;
				while (target_col < 3 && board[row][target_col + 1] == 0) {
					board[row][target_col + 1] = board[row][target_col];
					board[row][target_col] = 0;
					++target_col;
				}
				if (target_col < 3 && board[row][target_col + 1] == board[row][target_col]) {
					board[row][target_col + 1] *= 2;
					score += board[row][target_col + 1];
					board[row][target_col] = 0;
				}
			}
		}
	}
	return memcmp(old_board, board, sizeof(old_board)) != 0;
}

void initialize_game(int board[4][4]) {
	// ��ʼ�����������
	srand(static_cast<unsigned>(time(0)));

	// �������������ͬ��λ��
	int first = rand() % 16; // 0��15�������
	int second;
	do {
		second = rand() % 16;
	} while (second == first); // ȷ������λ�ò�ͬ

	// ��һάλ��ת��Ϊ��ά����
	int row1 = first / 4, col1 = first % 4;
	int row2 = second / 4, col2 = second % 4;

	// �����������2��4��2�ĸ���Ϊ75%��4�ĸ���Ϊ25%��
	board[row1][col1] = (rand() % 4 == 0) ? 4 : 2;
	board[row2][col2] = (rand() % 4 == 0) ? 4 : 2;
}
void generate_random_two(int board[4][4]) {
	// ͳ�ƿո�����
	int empty[16][2];
	int count = 0;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (board[i][j] == 0) {
				empty[count][0] = i;
				empty[count][1] = j;
				++count;
			}
		}
	}
	if (count > 0) {
		int idx = rand() % count;
		board[empty[idx][0]][empty[idx][1]] = 2;
	}
}
bool is_game_over(int board[4][4]) {
	// ����Ƿ��пո�
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (board[i][j] == 0)
				return false;
		}
	}
	// ����Ƿ��пɺϲ�����������
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (i < 3 && board[i][j] == board[i + 1][j])
				return false;
			if (j < 3 && board[i][j] == board[i][j + 1])
				return false;
		}
	}
	return true;
}
bool is_game_win(int board[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (board[i][j] == 2048)
				return true;
		}
	}
	return false;
}
void play_game()
{
	int board[4][4] = {};
	int score = 0;
	int step = 0;
	char choice = '\0';

	initialize_game(board);
	print_interface(board, score, step);

	while (1)
	{
		int ch = _getch();
		if (ch == 27) {
			cout << "���Ѱ���ESC����Ϸ�˳���" << endl;
			break;
		}
		bool moved = false;
		if (ch == 0 || ch == 224) {
			int dir = _getch();
			switch (dir) {
			case 72: moved = go_up(board, score); break;
			case 80: moved = go_down(board, score); break;
			case 75: moved = go_left(board, score); break;
			case 77: moved = go_right(board, score); break;
			}
			if (moved) {
				++step;
				generate_random_two(board);
			}
		}

		print_interface(board, score, step);

		if (is_game_win(board)) {
			cout << "��ϲ�㣬���2048����Ϸʤ����" << endl;
			break;
		}
		if (is_game_over(board)) {
			cout << "��Ϸ������" << endl;
			break;
		}
	}
	print_exit();
}

int main()
{
	HWND hwnd = GetConsoleWindow();
	SetForegroundWindow(hwnd);

	char choice = '\0';
	// ���ÿ���̨����Ϊ2048
	SetConsoleTitle(TEXT("2048"));
	// ��ѭ��
	while (1)
	{
		// ���ò˵���ʾ����
		print_menu();
		// ��ȡ�û�ѡ��
		choice = _getche();

		// �����û�ѡ�������Ӧ����
		switch (choice)
		{
		case 'a':
			play_game();
			break;
		case 'b':
			print_help();
			break;
		default:
			cout << "\n����������������" << endl;
			wait_for_enter();
		}
	}
	return 0;
}

void wait_for_enter()
{
	cout << endl << "���س�������";
	while (_getch() != '\r')
		;
	cout << endl << endl;
}

void print_menu()
{
	// ����
	system("CLS");
	// ��ȡ��׼����豸���
	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	// ��ӡ�˵�
	cout << "--------------------------------------------\n";
	cout << "********************************************\n";
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	// ��ӡ����
	cout << "                   2048\n";
	cout << "                a.����ģʽ\n";
	cout << "                b.��Ϸ����\n";
	cout << "                c.�˳���Ϸ\n";
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	// ��ӡ�˵�
	cout << "********************************************\n";
	cout << "--------------------------------------------\n";

	// �ָ�����̨������ɫΪĬ����ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "\n���������ѡ��(a-c):";
}

void print_help()
{
	// ����
	system("CLS");
	// ��ȡ��׼����豸���
	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "--------------------------------------------\n";
	cout << "********************************************\n\n";
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	// ��ӡ��Ϸ����
	cout << "����˵����\n\n";
	cout << "������   ������  ������  ������  ESC�����˳�\n\n";
	cout << "��Ϸ���ܣ�\n\n";
	cout << "ÿ��ѡ��һ�������ƶ����ƶ�ʱ������÷���£\n";
	cout << "��ͬ���ֿɺϲ����ƶ���ո񴦻������������2/4\n";
	cout << "����õ�����2048������Ϸʤ��!\n";
	cout << "������̱������������޷������ƶ�������Ϸʧ��!\n\n";
	// ���ÿ���̨������ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "********************************************\n";
	cout << "--------------------------------------------\n";
	// �ָ�����̨������ɫΪĬ����ɫ
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	wait_for_enter();
}

void print_exit()
{
	cout << "\n�˳���";
	for (int i = 4; i > 0; --i)
	{
		Sleep(200);
		cout << ".";
	}
}

void print_interface(int board[4][4], int score, int step)
{
	// �滻 system("CLS")��������˸
	COORD coord = { 0, 0 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "            --------------------------------------------\n";
	cout << "            ������" << setw(6) << score << "              ������" << setw(6) << step << endl;
	cout << "            --------------------------------------------\n";
	cout << "            ********************************************\n";
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "                       |----|----|----|----|\n";

	for (int i = 0; i < 4; i++)
	{
		cout << "                       |";
		for (int j = 0; j < 4; j++)
		{
			if (board[i][j] != 0)
			{
				cout << setw(4) << board[i][j] << "|";
			}
			else
			{
				cout << "    |";
			}
		}
		cout << "\n                       |----|----|----|----|\n";
	}

	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "            ********************************************\n";
	cout << "            --------------------------------------------\n";
	cout << "            ������   ������  ������  ������  ESC�����˳�\n\n";
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
