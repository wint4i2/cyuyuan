#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int type;
//�������
	printf("��ѡ���������ͣ�1-int,2-char,3-float,4-double):");
	//���뺯��
 scanf("%d", &type);
//ʹ�� switch ���������������ִ�в�ͬ�Ĵ����
 switch (type) {
// ������Ϊ 1 ʱִ�еĴ���
 case 1: {
		int a, b;
		printf("����������������");
			scanf("%d %d", &a, &b);
		printf("�����������ĺ��ǣ�%d\n", a + b);
		break;// ��ֹ switch ����ִ��
	}
	   // ������Ϊ 2 ʱִ�еĴ���
 case 2: {
		char a, b;
		printf("�����������ַ���");
			scanf(" %c %c", &a, &b);
		printf("�������ַ���ASCII��ĺ��ǣ�%d\n", (int)a + (int)b);
		break;// ��ֹ switch ����ִ��
	}
	   // ������Ϊ 3 ʱִ�еĴ���
	case 3: {
		float a, b;
		printf("������������������");
			scanf("%f %f", &a, &b);
		printf("�������������ĺ��ǣ�%f\n", a + b);
		break;// ��ֹ switch ����ִ��
	}
		  // ������Ϊ 4 ʱִ�еĴ���
	case 4: {
		double a, b;
		printf("����������˫���ȸ�������");
			scanf("%lf %lf", &a, &b);
		printf("������˫���ȸ������ĺ��ǣ�%lf\n", a + b);
		break;// ��ֹ switch ����ִ��
	}
		  // �����벻�� 1 �� 4 ��Χ��ʱִ�еĴ���
	default:
		printf("��������Ͳ���ȷ��\n");
		break;// ��ֹ switch ����ִ��
	}
	return 0;
}
