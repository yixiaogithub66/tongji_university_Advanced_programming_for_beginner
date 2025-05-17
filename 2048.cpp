// 本框架仅供参考，可以根据自己的需求随意进行修改

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

// 请尽量不要使用全局变量

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
	// 初始化随机数种子
	srand(static_cast<unsigned>(time(0)));

	// 随机生成两个不同的位置
	int first = rand() % 16; // 0到15的随机数
	int second;
	do {
		second = rand() % 16;
	} while (second == first); // 确保两个位置不同

	// 将一维位置转换为二维坐标
	int row1 = first / 4, col1 = first % 4;
	int row2 = second / 4, col2 = second % 4;

	// 随机生成数字2或4（2的概率为75%，4的概率为25%）
	board[row1][col1] = (rand() % 4 == 0) ? 4 : 2;
	board[row2][col2] = (rand() % 4 == 0) ? 4 : 2;
}
void generate_random_two(int board[4][4]) {
	// 统计空格数量
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
	// 检查是否有空格
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (board[i][j] == 0)
				return false;
		}
	}
	// 检查是否有可合并的相邻数字
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
			cout << "你已按下ESC，游戏退出！" << endl;
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
			cout << "恭喜你，达成2048，游戏胜利！" << endl;
			break;
		}
		if (is_game_over(board)) {
			cout << "游戏结束！" << endl;
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
	// 设置控制台标题为2048
	SetConsoleTitle(TEXT("2048"));
	// 主循环
	while (1)
	{
		// 调用菜单显示函数
		print_menu();
		// 获取用户选择
		choice = _getche();

		// 根据用户选择进行相应操作
		switch (choice)
		{
		case 'a':
			play_game();
			break;
		case 'b':
			print_help();
			break;
		default:
			cout << "\n输入错误，请从新输入" << endl;
			wait_for_enter();
		}
	}
	return 0;
}

void wait_for_enter()
{
	cout << endl << "按回车键继续";
	while (_getch() != '\r')
		;
	cout << endl << endl;
}

void print_menu()
{
	// 清屏
	system("CLS");
	// 获取标准输出设备句柄
	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	// 打印菜单
	cout << "--------------------------------------------\n";
	cout << "********************************************\n";
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	// 打印标题
	cout << "                   2048\n";
	cout << "                a.经典模式\n";
	cout << "                b.游戏规则\n";
	cout << "                c.退出游戏\n";
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	// 打印菜单
	cout << "********************************************\n";
	cout << "--------------------------------------------\n";

	// 恢复控制台文字颜色为默认颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "\n请输入你的选择(a-c):";
}

void print_help()
{
	// 清屏
	system("CLS");
	// 获取标准输出设备句柄
	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "--------------------------------------------\n";
	cout << "********************************************\n\n";
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	// 打印游戏规则
	cout << "操作说明：\n\n";
	cout << "↓：下   ←：左  ↑：上  →：右  ESC键：退出\n\n";
	cout << "游戏介绍：\n\n";
	cout << "每次选择一个方向移动，移动时数字向该方向靠拢\n";
	cout << "相同数字可合并，移动后空格处会生成随机数字2/4\n";
	cout << "如果得到数字2048，则游戏胜利!\n";
	cout << "如果棋盘被数字填满，无法进行移动，则游戏失败!\n\n";
	// 设置控制台文字颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "********************************************\n";
	cout << "--------------------------------------------\n";
	// 恢复控制台文字颜色为默认颜色
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	wait_for_enter();
}

void print_exit()
{
	cout << "\n退出中";
	for (int i = 4; i > 0; --i)
	{
		Sleep(200);
		cout << ".";
	}
}

void print_interface(int board[4][4], int score, int step)
{
	// 替换 system("CLS")，减少闪烁
	COORD coord = { 0, 0 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "            --------------------------------------------\n";
	cout << "            分数：" << setw(6) << score << "              步数：" << setw(6) << step << endl;
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
	cout << "            ↓：下   ←：左  ↑：上  →：右  ESC键：退出\n\n";
	SetConsoleTextAttribute(handle_out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
