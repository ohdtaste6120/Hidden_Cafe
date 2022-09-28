# include <stdio.h>
# include <windows.h>

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}



void main()
{
	// 방향키로 움직이기
	int x = 1; 
	int y = 1;
	gotoxy(x, y);
	while (1)
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			x++;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			y--;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			y++;
		}

		system("cls");
		gotoxy(x, y);
		printf("▲");
	}

	// 메인화면 (제목)
	printf("\n \n \n \n \n");
	printf("+     +  +  +++     +++     ++++++  ++        +      ######      ##      #######  ######\n");
	printf("+     +  +  +  ++   +  ++   +       +  +      +     #           #  #     #        #     \n");
	printf("+     +  +  +    +  +    +  +       +  +      +    #           #    #    #        #     \n");
	printf("+++++++  +  +     + +     + +++++   +    +    +    #          #++++++#   #####    ##### \n"); 
	printf("+     +  +  +    +  +    +  +       +      +  +    #          #      #   #        #     \n");
	printf("+     +  +  +  ++   +  ++   +       +      +  +     #        #        #  #        #     \n");
	printf("+     +  +  +++     +++     ++++++  +        ++      ######  #        #  #        ######\n");


}