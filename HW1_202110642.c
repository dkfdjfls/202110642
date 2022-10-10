#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int color;
	int R, G, B;
	char channel;
	int pm;
	char yn;

	printf("16���� �÷� �ڵ尪�� �Է��ϼ���: ");
	scanf("%x", &color);
	
	R = color & 0xff0000;
	R = R >> 16;

	G = color & 0x00ff00;
	G = G >> 8;

	B = color & 0x0000ff;

	printf("�Էµ� �÷��� R, G, B ���� (%d, %d, %d) �Դϴ�.\n", R, G, B);
	
	while (1)
	{
		printf("\nRGB �� ������ �÷� ä���� �Է��ϼ���: ");
		scanf(" %c", &channel);

		if (channel != 'R' && channel != 'G' && channel != 'B')
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
			continue;
		}


		printf("\n%c ä���� ���� ������ �Է��ϼ���: ", channel);
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

		printf("������ �÷��� R,G,B ���� (%d, %d, %d)�̰�, �̴� 0x%0.6X�� ����˴ϴ�.\n", R, G, B, R << 16 | G << 8 | B);
		printf("\n��� �÷��� �����Ͻðڽ��ϱ�? (y/n) ");
		scanf(" %c", &yn);

		if (yn != 'y')
		{
			break;
		}
	}
	
} 