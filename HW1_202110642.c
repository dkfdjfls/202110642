#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int color;
	int R, G, B;
	char channel;
	int pm;
	char yn;

	printf("16진수 컬러 코드값을 입력하세요: ");
	scanf("%x", &color);
	
	R = color & 0xff0000;
	R = R >> 16;

	G = color & 0x00ff00;
	G = G >> 8;

	B = color & 0x0000ff;

	printf("입력된 컬러의 R, G, B 값은 (%d, %d, %d) 입니다.\n", R, G, B);
	
	while (1)
	{
		printf("\nRGB 중 변경할 컬러 채널을 입력하세요: ");
		scanf(" %c", &channel);

		if (channel != 'R' && channel != 'G' && channel != 'B')
		{
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
			continue;
		}


		printf("\n%c 채널의 증감 정도를 입력하세요: ", channel);
		scanf("%d", &pm);

		if (channel == 'R')
		{
			R += pm;

			if (R > 255)
				R = 255;
			else if (R < 0)
				R = 0;
		}
		else if (channel == 'G')
		{
			G += pm;

			if (G > 255)
				G = 255;
			else if (G < 0)
				G = 0;
		}
		else if (channel == 'B')
		{
			B += pm;

			if (B > 255)
				B = 255;
			else if (B < 0)
				B = 0;
		}

		printf("조정된 컬러의 R,G,B 값은 (%d, %d, %d)이고, 이는 0x%0.6X로 저장됩니다.\n", R, G, B, R << 16 | G << 8 | B);
		printf("\n계속 컬러를 조정하시겠습니까? (y/n) ");
		scanf(" %c", &yn);

		if (yn != 'y')
		{
			break;
		}
	}
	
} 