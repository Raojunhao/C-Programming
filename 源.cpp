#define _CRT_SECURE_NO_WARNINGS 1;//ʹ��scanf������
#include <math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int age = 100;
//	double weight = 58.5;
//	age=age + 100;
//	weight=weight+10;
//	printf("%d\n",age);
//	printf("%lf\n", weight);
//
//
//	return 0;
//}
//
//
//
//
//
//int main()
//{
//	int a = 3;
//	int b = 2;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("������=%d\n", sum);
//
//	
//	return 0;
//
//
//}
//
//
//
//int main()
//{
//	int c1 = 'a', c2 = 'b';
//	c1 = c1 - ('a' - 'A');
//	c2 = c2 - ('a' - 'A');
//	printf("%c %c\n", c1, c2);
//	return 0;
//}
//
//
//
//�ж�������������Ƿ���ȡ��㷨���£�����������еĴ���ʹ���ܵó���ȷ�Ľ����
//int main()
//{
//	int a, b, c;
//
//	scanf("%d,%d,%d",& a, &b,&c);
//	if (a == b&&b == c)
//		printf("The three number is equal!!!");
//	else
//		printf("The three number isn't equal!!!");
//}
//
//int main()//������ʾ
//{
//	int y, m, d;
//	printf("Enter a date(year month day):\n");
//	scanf("%d%d%d", &y, &m, &d);
//	printf("You entered the date: %02d/%02d/%d", m, d, y);
//	return 0;
//}
//
//��Բ�����
//int main()
//{
//	float r,s;
//	printf("������뾶��");
//	scanf("%f", &r);
//	s = 2 * 3.14*r;
//	printf("Բ�����Ϊ��%f",s);
//
//	return 0;
//}
//
//
//int main()//���뱻�����ͳ���������
//{
//	int a, b;
//	printf("Enter two numbers:");
//	scanf("%d%d", &a, &b);
//	if (b == 0)
//	{
//		printf("cannot divide by zero.\n");
//	}
//	else
//	{
//		printf("%d", a / b);
//	}
//
//
//	return 0;
//}
//
//
//
//int main()//��Сд��ĸתΪ��д��ĸ
//{
//	char ch;
//	printf("������һ��Сд��ĸ��");
//	ch = getchar();
//	ch = ch - 32;
//	printf("����Ľ��Ϊ��");
//	putchar(ch);
//	putchar('\n');
//	printf("\n");//��Ҳ�ǻ��е�һ��ѡ��
//	return 0;
//}
//
//if else ���
//int main()
//{
//	int a;
//	int b = 2;
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("1111\n");
//		}
//	}
//	else
//	{
//		printf("2222\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d �����������//", i);
//
//		}
//		
//	}
//
//
//
//
//	return 0;
//
//
//}
//
//#include <math.h>
//int main()//������
//{
//	float a, b, c;
//	printf("Input a,b,c:");
//	scanf("%f,%f,%f", &a, &b, &c);
//	float s, area;
//	s = (a + b + c)/2;
//	
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//	printf("area=%.2f\n",area);
//
//
//
//	return 0;
//}
//
//#include <stdio.h> 
//#include <math.h> 
//#define pi 3.14
//int main()
//{
//	float r, s, c;
//	printf("������뾶��ֵ��");
//	scanf("%f", &r);
//	s = pi * r*r;
//	c = 2 * pi*r;
//	printf("�뾶Ϊ%5.2f��Բ�����Ϊ%5.1f,Բ���ܳ�Ϊ%5.1f\n", r, s, c);
//
//
//	return 0;
//}
//#include <math.h>
//int main()
//{   
//	int a, b, c;
//	printf("Enter a date(year month day):\n");
//	scanf("%d%d%d", &a,& b,&c);
//	printf("You entered the date:%02d/%02d/%d",c, b, a);
//	return 0;
//}
//
//
//int main()//ת����Сд��ĸ(��תС)
//{
//	char a, b;
//	printf("Press a key and then press Enter:");
//	scanf("%c", &a);
//	b = a + 32;
//	printf("%c, %d\n",b,b);
//
//
//	return 0;
//}
//
//
//
//��Բ��������ܳ�
//#define pi 3.14159
//#include <math.h>
//int main()
//{
//	float r, c, s;
//	printf("Input r:");
//	scanf("%f", &r);
//	c = 2 * pi *r;
//	s = pi * r*r;
//	printf("circum = %.2f\n", c);
//	printf("area = %.2f\n", s);
//
//	return 0;
//}
//
//int main()//��λ�������
//{
//	int a,b,c,d,Z;
//	scanf("%d", &Z);
//	a = Z / 1000;//ǧλ
//	b = (Z - a * 1000)/100;//��λ
//	c = (Z - a * 1000 - b * 100) / 10;//ʮλ
//	d = (Z - a * 1000 - b * 100 - c * 10);//��λ
//	int x;
//	x = d * 1000 + c * 100 + b * 10 + a;
//	printf("%d", x);
//
//
//
//
//	return 0;
// }
//
//int main()
//{
//	int h, w, W;
//	float H;
//	double t;
//	printf("Input weight, height:\n");
//	scanf("%d,%d", &w, &h);
//	H =(float) h / 100;
//	W = w*2;
//	t = w / (H*H);
//	printf("weight=%d\n", W);
//	printf("height=%.2f\n",H);
//	printf("t=%.2f\n",t);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int a, b;
//	scanf("%d%d",& a, &b);
//	float c;
//	c =  (a / b);
//	printf("%.1f", c);
//
//	return 0;
//}
//
//
//
//int main()//ת����Сд��ĸ(��תС)
//{
//	char a, b;
//	printf("Press a key and then press Enter:\n");
//	scanf("%c", &a);
//	b = a + 32;
//	printf("%c", b);
//
//
//	return 0;
//}
//
//int main()
//{
//	char ch;
//	printf("please input a lowercase:\n");
//	ch = getchar();
//	ch = ch - 32;
//	int b;
//	b = sizeof(ch);
//	
//	printf("%c %d %d", ch,ch,b);
//
//
//	return 0;
//}
//
//
//int main()//��λ������λ��֮��
//{
//	int A;
//	printf("������һ����λ������");
//	scanf("%d", &A);
//	int a, b, c,sum;
//	a = A / 100;
//	b = (A - a * 100) / 10;
//	c = A - a * 100 - b * 10;
//	sum = a + b + c;
//	printf("b2=%d, b1=%d, b0=%d, sum=%d\n", a, b, c,sum);
//	
//
//
//
//
//	return 0;
//}
//
//
//
//int main()//��ʽ������
//{
//	int n, y, m, d;
//	float p;
//	printf("Enter item number:\n");
//	scanf("%d", &n);
//	printf("Enter unit price:\n");
//	scanf("%f", &p);
//	printf("Enter purchase date (yy mm dd):\n");
//	scanf("%d%d%d", &y, &m, &d);
//	printf("Item      Unit     Purchase\n");
//	printf("%-9d$%-9.2f%02d/%02d/%02d\n",n,p,m,d,y);
//
//
//
//	return 0;
//}
//
//int main()
//{
//	float l = 11.5, w = 2.5, h = 10;
//	float s, v;
//	s = (l*w + l * h + w * h) * 2;
//	v = l * w*h;
//	printf("area=%.2f,volume=%.2f", s, v);
//
//
//	return 0;
//}
//
//int main()
//{
//	int h, r,v,a;
//	printf("please input the height and the radius:\n");
//	scanf("%d,%d", &h, &r);
//	printf("%d,%d", h, r);
//	v = 3.14159 * r*r*h;
//	a = 20000 / v+1;
//	printf("%d", a);
//
//
//
//	return 0;
//}
//
//
//int main()
//{
//
//	double a, b;
//	float c;
//	scanf("%lf,%lf", &a, &b);
//	c = (a + b) / 2;
//	printf("%.2f", c);
//	return 0;
//}
//
//int main()//������
//{
//	int m, y;
//	double r,sum;
//    printf("Enter money:");
//	scanf("%d", &m);
//	printf("Enter year:");
//	scanf("%d", &y);
//	printf("Enter rate:");
//	scanf("%lf", &r);
//	sum = m*pow( (1 + r), y);
//	printf("sum = %.2f\n", sum);
//	return 0;
//}
//
//int main()//���������δ��ɣ�
//{
//	int a, b, c,d, num;
//	printf("Please enter a positive integer: ");
//	scanf("%d", &num);
//	a = num / 100;
//	b = (num / 10) % 10;
//	c = num % 10;
//	if (a > b > c)//cba
//	{
//		d = c * 100 + b * 10 + a;
//		printf("%d", d);
//	}
//	else if (a > c > b)//bca
//	{
//		d = a * 100 + c * 10 + b;
//		d=printf("%d", d);
//	}
//	else if (b > a > c)//cab
//	{
//		d = b * 100 + a * 10 + c;
//		printf("%d", d);
//	}
//	else if (b > c > a)//acb
//	{
//		d = b * 100 + c * 10 + a;
//		printf("%d", d);
//	}
//	else  (c > a > b);//bac
//	{
//		d = c * 100 + a * 10 + b;
//		printf("%d", d);
//	}
//	
//	printf("%d-->%d\n",num,d );
//	
//		
//
//	return 0;
//}
//
//int main()//
//{
//	int a, b, c, d, num;
//	printf("Please enter a positive integer: ");
//	scanf("%d", &num);
//	a = num / 100;
//	b = (num / 10) % 10;
//	c = num % 10;
//	d = c * 100 + b * 10 + a;
//	printf("%d-->%d\n", num, d);
//
//
//	return 0;
//}
//
//
//
// int main()
//{
//	float a, b;
//	float sum, minus, product, quotient;
//	int remainder;
//
//	printf("\n������������:\n");
//	scanf("%f%f", &a, &b);
//	sum = a + b;
//	minus = a - b;
//	product = a * b;
//	quotient = a / b;
//	remainder = (int)a %(int) b;
//	printf("��Ϊ:%.2f\n", sum);
//	printf("��Ϊ:%.2f\n", minus);
//	printf("��Ϊ:%.2f\n", product);
//	printf("��Ϊ:%.2f\n", quotient);
//	printf("����Ϊ:%d\n", remainder);
//}
//
//
//#include<math.h>//��λ������λ��֮��(�򻯰�)
// int main()
//{
//	 int a, b, c ,d,num;
//	 printf("input data is:");
//	 scanf("%d", &num);
//	 a = num / 100;
//	 b = (num / 10) % 10;
//	 c = num % 10;
//	 d = a + b + c;
//	 printf("The sum of the total bit is %d\n", d);
//     return 0;
//}
//
//#include<math.h>
// int main()
//{
//	 int a, b, c ,A,C;
//	 float B;
//	 
//	 printf("Enter three integer: ");
//	 scanf("%d%d%d", &a, &b, &c);
//	 A = a + b + c;
//	 B = (a + b + c) / 3;
//	 C = (int) (A % 3);
//	 printf("SUM = %4d\nAVERAGE = %.2f  REMAINDER = %3d\n", A, B, C);
//	
//     return 0;
//}
//
//int main()//�¶�ת��
//{
//	int c ;
//	double f;
//	printf("Please input cels: ");
//	scanf("%d", &c);
//	f =(float)c*9/5+32;
//	printf("The fahr is: %.2f", f);
//
//
//
//	return 0;
//}
//
//int main()
//{
//	char password[6];
//	printf("������6λ���� ");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)");
//	int p;
//	while ((p = getchar()) != '\n')
//	{
//		;//�����
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//
//	}
//	return 0;
//}
//
//int main()//if-else��������
//{
//	printf("Enter your expression:");
//	double a, b, rs;
//	char op;
//	scanf("%lf%c%lf", &a, &op, &b);
//	if (op == '+')
//	{
//		rs = a + b;
//		printf("%.2f+%.2f=%.2f\n", a, b, rs);
//	}
//	else if (op == '-')
//	{
//		rs = a - b;
//		printf("%.2f-%.2f=%.2f\n", a, b, rs);
//	}
//	else if (op == '*')
//	{
//		rs = a * b;
//		printf("%.2f*%.2f=%.2f\n", a, b, rs);
//
//	}
//	else if (op == '/')
//	{
//		if (b == 0)
//		{
//			printf("Division by zero\n");
//		}
//		else
//		{
//			rs = a / b;
//			printf("%.2f/%.2f=%.2f\n", a, b, rs);
//		}
//	}
//	else
//		printf("Unknown operator.\n");
//
//	return 0;
//}
//
//int main()//switch��������
//{
//	printf("Please enter an expression:");
//	float a, b, rs;
//	char op;
//	scanf("%f %c%f", &a, &op, &b);
//	switch (op)
//	{
//	case '+':
//		rs = a + b;
//		printf("%f + %f = %f \n", a, b, rs);
//		break;
//	case '-':
//		rs = a - b;
//		printf("%f - %f = %f \n", a, b, rs);
//		break;
//	case '*':
//		rs = a * b;
//		printf("%f * %f = %f \n", a, b, rs);
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("Division by zero!\n");
//			break;
//		}
//		else
//		{
//			rs = a / b;
//			printf("%f / %f = %f \n", a, b, rs);
//			break;
//		}
//	case 'x':
//		rs = a * b;
//		printf("%f * %f = %f \n", a, b, rs);
//		break;
//	case 'X':
//		rs = a * b;
//		printf("%f * %f = %f \n", a, b, rs);
//		break;
//	case '^':
//		rs = pow(a,b);
//		printf("%f ^ %f = %f \n",a,b,rs);
//		break;
//	default:
//		printf("Invalid operator! \n");
//	}
//
//		return 0;
//}
//
//	    
//#include<stdio.h>//Ԥ�⺢�����(if-else)
//#include<math.h>
//int main()
//{
//	float faHeight, moHeight, H;
//	char sex, sports, diet;
//	printf("Are you a boy(M) or a girl(F)?");
//	scanf("%c", &sex);
//	printf("Please input your father's height(cm):");
//	scanf("%f", &faHeight);
//	printf("Please input your mother's height(cm):");
//	scanf("%f", &moHeight);
//	if (sex == 'M')
//	{
//		H = (faHeight + moHeight)*0.54;
//	}
//	else if (sex == 'F')
//	{
//		H = (faHeight*0.923 + moHeight) / 2;
//	}
//	printf("Do you like sports(Y/N)?");
//	scanf(" %c", &sports);//����%cǰ�����һ���ո񣬸�����һ���getchar()������ͬ
//	if (sports == 'Y')
//	{
//		H = H * 1.02;
//	}
//	else if (sports == 'N')
//	{
//		H = H;
//	}
//	printf("Do you have a good habit of diet(Y/N)?");
//	scanf(" %c", &diet);
//	if (diet == 'Y')
//	{
//		H = H * 1.015;
//	}
//	else if (diet == 'N')
//	{
//		H = H;
//	}
//	printf("Your future height will be %.0f(cm)\n", H);
//	return 0;
//}
//
//#include <math.h>
//int main()//Ԥ�⺢����ߣ�switch)
//{
//	float fah, moh;
//	float H;
//	char sex, sports, diet;
//	printf("Please input your father's height(cm):");
//	scanf("%f", &fah);
//	printf("Please input your mother's height(cm):");
//	scanf("%f", &moh);
//	getchar();
//	printf("Are you a boy(M) or a girl(F)?");
//	scanf("%c", &sex);
//	getchar();
//	if (sex == 'M')
//	{
//		H = (fah + moh) * 0.54;
//		printf("Do you like sports(Y/N)?");
//		scanf("%c", &sports);
//		switch (sports)
//		{
//		case  'Y':
//		{
//			H = H * 1.02;
//			break;
//		}
//		case 'N':
//		{
//			H = H;
//			break;
//		}
//		}
//		getchar();
//		printf("Do you have a good habit of diet(Y/N)?");
//		scanf("%c", &diet);
//		switch (diet)
//		{
//		case 'Y':
//		{
//			H = H * 1.015;
//			break; }
//		case 'N':
//		{
//			H = H;
//			break; }
//
//		}
//		printf("Your future height will be %.0f(cm)\n", H);
//	}
//	if (sex == 'F')
//	{
//		H = (fah*0.923+moh)/2;
//		printf("Do you like sports(Y/N)?");
//		scanf("%c", &sports);
//		switch (sports)
//		{
//		case  'Y':
//		{
//			H = H * 1.02;
//			break;
//		}
//		case 'N':
//		{
//			H = H;
//			break;
//		}
//		}
//		getchar();
//		printf("Do you have a good habit of diet(Y/N)?");
//		scanf("%c", &diet);
//		switch (diet)
//		{
//		case 'Y':
//		{
//			H = H * 1.015;
//			break; }
//		case 'N':
//		{
//			H = H;
//			break; }
//
//		}
//		printf("Your future height will be %.0f(cm)\n", H);
//	}
//	return 0;
//}
//
//			
//
//
//int main()//����n�Ľ׳�
//{
//	int i;
//	int n;
//	int sum=1 ;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//
//
//	return 0;
//}
//
//int main()//����1��+2��+...+n!
//{
//	int i = 0;
//	int n ;
//	int sum=0;
//	int tmp=1;
//	printf("������n-> ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp =tmp*i;
//		sum =sum+tmp;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//
//int main()
//{
//	float h, w, t;
//	printf("Please enter h,w:\n");
//	scanf("%f,%f", &h, &w);
//	t = w / (h*h);
//	if (t < 18)
//	{
//		printf("Lower weight!\n");
//	}
//	else if (18 <= t && t < 25)
//	{
//		printf("Standard weight!\n");
//	}
//	else if (t >= 25 && t < 27)
//	{
//		printf("Higher weight!\n");
//	}
//	else
//	{
//		printf("Too fat!\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to xxxxx";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(500);//˯��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char pw[20] = { 0 };
//	for (i = 1; i <= 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", pw);//���鲻��Ҫȡ��ַ
//		//�����ַ����Ƚϣ�������==
//		if (strcmp(pw, "123456") == 0)/*���������������ASCII��ֵ���бȽϣ�ֱ�����ֲ�ͬ���ַ�������\0��(���ַ�)Ϊֹ��
//			                            �������ֵ < 0�����ʾ s1 С�� s2��
//			                            �������ֵ > 0�����ʾ s1 ���� s2��
//			                            �������ֵ = 0�����ʾ s1 ���� s2��*/
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("����������������˳�����");
//		}
//
//	}
//	
//	return 0;
//}
//
//#include <stdlib.h>//��������Ϸ
//#include<time.h>
//void menu()
//{
//	printf("\n*********************\n");
//	printf("*********************\n");	
//	printf("******1.play*********\n");
//	printf("******0.exit*********\n");
//	printf("*********************\n");
//	printf("*********************\n");
//
//
//}
//void game()//void���÷����κ�ֵ
//{
//		int ret = rand()%100+1;//%100������0-99
//		int guess = 0;
//		while (1)
//		{
//			printf("\n�������");
//			scanf("%d", &guess);
//			if (guess < ret)
//			{
//				printf("��С��");
//			}
//			else if (guess > ret)
//			{
//				printf("�´���");
//			}
//			else
//			{
//				printf("�¶��ˣ���ϲ�㣡");
//				break;
//			}
//		}
//}
//int main()
//{
//	srand((unsigned int)/*ǿ��ת������*/time(NULL));//0~32767
//	int input = 0;
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("\n��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����δָ֪�����������\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}
//
//int get_max (int x,int y)//ȡ�����������ֵ
//{
//	int m;
//	if (x > y)
//	{
//		m = x;
//	}
//	else if (x < y)
//	{
//		m = y;
//	}
//	else
//	{
//		m = x = y;
//	}
//	return m;
//}
//
//
//int main()
//{
//	int x, y,m;
//	scanf("%d,%d", &x, &y);
//	m=get_max(x, y);
//	printf("max=%d", m);
//	return 0;
//}

//void swap(int *pa, int *pb)//��ַ�����ŵ�����
//{
//	int x = 0;
//	x = *pa;
//	*pa = *pb;
//	*pb = x;
//}
//int main()//�����������������
//{
//	int a = 5;
//	int b = 10;
//	printf("%d,%d\n", a, b);//����ǰ
//	swap(&a, &b);
//	printf("%d,%d", a, b);//������
//	return 0;
//}
//
//
//int is_prime(int x)//�ж�һ�����Ƿ�Ϊ����
//{
//	int i = 0;
//	int z;
//	for (i = 2; i < x; i++)
//	{
//		z = x % i;
//		if (z == 0)
//		{
//			return 0;
//		}
//		return 1;
//		            
//	}
//}
//int main()
//{
//	int x;
//	printf("������һ����");
//	while (1)
//	{
//		scanf("%d", &x);
//		is_prime(x);
//		if (is_prime(x) == 0)
//		{
//			printf("bu������\n");
//		}
//		if (is_prime(x) == 1)
//		{
//			printf("������\n");
//		}
//
//	}
//	return 0;
//}
//
//
//
//int is_prime(int x)//�ж�һ�����Ƿ�Ϊ����
//{
//	int i = 0;
//	int z;
//	for (i = 2; i < x; i++)
//	{
//		z = x % i;
//		if (z == 0)
//		{
//			return 0;
//		}
//		return 1;
//
//	}
//}
//int main()
//{
//	int x = 0;
//	for (x = 100; x <= 200; x++)
//	{
//		is_prime(x);
//			if (is_prime(x) == 1)
//			{
//				printf("%d������\n", x);
//			}
//			else
//			{
//				printf("%d��������\n", x);
//			}
//	}
//
//	return 0;
//}
//
//
//int main()//�ж��Ƿ�������
//{
//	int y;
//	printf("Input a year:");
//	scanf("%d", &y);
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//	{
//		printf("%d is a leap year!\n", y);
//	}
//	else
//	{
//		printf("%d is not a leap year!\n", y);
//	}
//	
//		return 0;
//}
//
//int main()//�ж϶�ά�ռ��еĵ㣬�Ƿ���Բ��
//{
//	float a, b, r, x, y,s;
//	printf("������Բ��Բ�����꣺");
//	scanf("%f,%f", &a, &b);
//	printf("������Բ�İ뾶��");
//	scanf("%f", &r);
//	printf("������Ҫ�жϵĵ������(x,y)��");
//	scanf("%f,%f", &x, &y);
//	s = sqrt(pow(a - x, 2) + pow(b - y,2));
//	if (s < r)
//	{
//		printf("�õ���Բ��\n");
//	}
//	else if (s = r)
//	{
//		printf("�õ���Բ��\n");
//	}
//	else
//	{
//		printf("�õ㲻��Բ��\n");
//	}
//
//	return 0;
//}
//
//int main()//�����û������������ʾ��Ӧ�����ڼ�
//{
//	int d;
//	printf("Please input a single numeral(1-7): ");
//	scanf("%d", &d);
//	switch (d)
//	{
//	case 2:
//		printf("Monday\n");
//		break;
//	case 3:
//		printf("Tuesday\n");
//		break;
//
//	case 4:
//		printf("Wednesday\n");
//		break;
//
//	case 5:
//		break;
//		printf("Thursday\n");
//
//	case 6:
//		printf("Friday\n");
//		break;
//
//	case 7:
//		printf("Saturday\n");
//		break;
//
//	case 1:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("Invalid - please input a single numeral(1-7).\n");
//	}
//
//
//	return 0;
//}
//
//
//int main()//��дһ�������������һ��������������ķ��š�
//{
//	int n;
//	printf("Enter n:");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("-\n");
//	}
//	else if (n == 0)
//	{
//		printf("this number has no sign\n");
//	}
//	else
//	{
//		printf("+\n");
//	}
//
//	return 0;
//}
//
//int main()//���㲢���1��20��ƽ�������������100ʱֹͣ
//{
//	int i = 0;
//	int r;
//	for (i = 1; i <= 20; i++)
//	{
//		r = pow(i, 2);
//		printf("%d*%d=%d\n", i, i,r);
//		if (r >= 100)
//			break;
//	}
//	return 0;
//}
//
//int main()//����һЩ��������̼��㲢����������������ĺͣ����븺��ʱ���ۼӣ�����������һ������������ʱ����ʾ�������ݽ�����Ҫ�����ͳ�Ƴ��ۼӵ�������
//{
//	int n;
//	int sum = 0;
//	int i=0;
//	printf("Input a number:");
//	while(1)
//	{
//		scanf("%d", &n);
//		if (n > 0)
//		{
//			i++;
//			printf("Input a number:");
//			sum = sum + n;
//		}
//		if (n < 0)
//		{
//			printf("Input a number:");
//			continue;
//		}
//		if (n == 0)
//		{
//			break;
//		}
//	}
//	printf("sum = %d, count = %d\n", sum, i);
//
//
//
//	return 0;
//}
//
//int main()//���㲢������û�Ӧ֧���ĵ��
//{
//	double m,d;
//	printf("���������õ�����\n");
//	scanf("%lf", &d);
//	if (d <= 50)
//	{
//		m = 0.53*d;
//	}
//	else
//	{
//		m = 0.58*d;
//	}
//	printf("Ӧ֧�����=%.2f\n", m);
//	return 0;
//}
//
//int main()//����С����ĸ���ڼ�����С���������һ������ʱ�������˵�������Ƕ��٣�
//{
//	int a = 12;
//	int b = 36;
//	int y = 0;
//	for (y=1;;y++)
//	{
//		a++;
//		b++;
//		if (b == 2 * a)//Ϊʲô b/2==a ���� b/a==2 ����?
//		{
//			break;
//		}
//	}
//	printf("year=%d\n" "mingAge=%d\n" "motherAge=%d\n", y, a, b);
//
//
//	return 0;
//}
//
//
//int main()//��1+1/2+1/3+...+1/100��ֵ
//{
//	float n=0;
//	float sum=0;
//	for (n = 1; n <= 100; n++)
//	{
//		sum = sum + (1 / n);
//	}
//	printf("sum=%f\n", sum);
//
//	return 0;
//}
//
//int main()//��number���������룩��Լ����������λ���Ƕ��٣�
//{
//	long num ;
//	long i,max;
//	printf("Please input number:");
//	scanf("%ld", &num);
//	for (i = 100; (i <= num) && (i <= 1000); i++)
//	{
//		if (num%i == 0)
//		{
//			max = i;
//		}
//	}
//	printf("The max factor with 3 digits in %ld is: %d.\n", num,max);
//	return 0;
//}
//
//
//int main()//��ʾ������ʽ������
//{
//	int y, m, d;
//	printf("Enter date (mm/dd/yy):");
//	scanf("%d/%d/%d", &m, &d, &y);
//	if (d <= 31)
//	{
//		printf("Dated this %d", d);
//		switch (d)
//	   {
//		case 1:
//		case 21:
//		case 31:
//			printf("st");
//			break;
//		case 2:
//		case 22:
//			printf("nd");
//			break;
//		case 3:
//		case 23:
//			printf("rd");
//			break;
//		default:
//			printf("th");
//	  			break;
//	   }
//	}
//	else {
//		printf("Input error!\n");
//	}
//	printf(" day of ");
//	switch (m)
//	{
//	case 1:
//		printf("January");
//		break;
//	case 2:
//		printf("Februrary");
//		break;
//	case 3:
//		printf("March"); 
//		break;
//	case 4:
//		printf("April"); 
//		break;
//	case 5:
//		printf("May");
//		break;
//	case 6:
//		printf("June"); 
//		break;
//	case 7:
//		printf("July"); 
//		break;
//	case 8:
//		printf("August");
//		break;
//	case 9:
//		printf("September");
//		break;
//	case 10:
//		printf("October");
//		break;
//	case 11:
//		printf("November"); 
//		break;
//	case 12:
//		printf("December");
//		break;
//
//	}
//	printf(", 19%.2d.\n", y);
//	return 0;
//}
//
//int main()//��̼���1��2��3+3��4��5+��+99��100��101��ֵ
//{
//	int i = 0;
//	long sum=0;
//	for (i = 1; i < 100; i+=2)
//	{
//		sum = sum + i * (i + 1)*(i + 2);
//	}
//	printf("sum=%ld", sum);
//
//
//	return 0;
//
//}
//
//
//int main()//��дһ������������ݺ��·ݣ��жϸ����Ƿ������꣬�����ݸ������·��ж���ʲô���ں͸����ж�����
//{
//	int y,m,d;
//	printf("Please enter year,month:");
//	scanf("%d,%d", &y,&m);
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//	{
//		printf("%d is leap year\n", y);
//		switch (m)
//		{
//		case 3:
//		case 5:
//			d = 31;
//			printf("The season is spring\n");
//			printf("The number of days of this month is %d\n", d);
//		case 4:
//			d = 30;
//			printf("The season is spring\n");
//			printf("The number of days of this month is %d\n", d);
//
//		}
//		switch (m)
//		{
//		case 6:
//			d = 30;
//			printf("The season is summer\n");
//			printf("The number of days of this month is %d\n", d);
//		case 7:
//		case 8:
//			d = 31;
//			printf("The season is summer\n");
//			printf("The number of days of this month is %d\n", d);
//
//		}
//		switch (m)
//		{
//		case 10:
//			d = 31;
//			printf("The season is autumn\n");
//			printf("The number of days of this month is %d\n", d);
//		case 9:
//		case 11:
//			d = 30;
//			printf("The season is autumn\n");
//			printf("The number of days of this month is %d\n", d);
//		}
//		switch (m)
//		{
//		case 12:
//		case 1:
//			d = 31;
//			printf("The season is winter\n");
//			printf("The number of days of this month is %d\n", d);
//		case 2:
//			d = 29;
//			printf("The season is winter\n");
//			printf("The number of days of this month is %d\n", d);
//		}
//	}
//	else
//	{
//		printf("%d is not leap year\n", y);
//		switch (m)
//		{
//		case 3:
//		case 5:
//			d = 31;
//			printf("The season is spring\n");
//			printf("The number of days of this month is %d\n", d);
//		case 4:
//			d = 30;
//			printf("The season is spring\n");
//			printf("The number of days of this month is %d\n", d);
//
//		}
//		switch (m)
//		{
//		case 6:
//			d = 30;
//			printf("The season is summer\n");
//			printf("The number of days of this month is %d\n", d);
//		case 7:
//		case 8:
//			d = 31;
//			printf("The season is summer\n");
//			printf("The number of days of this month is %d\n", d);
//
//		}
//		switch (m)
//		{
//		case 10:
//			d = 31;
//			printf("The season is autumn\n");
//			printf("The number of days of this month is %d\n", d);
//		case 9:
//		case 11:
//			d = 30;
//			printf("The season is autumn\n");
//			printf("The number of days of this month is %d\n", d);
//		}
//		switch (m)
//		{
//		case 12:
//		case 1:
//			d = 31;
//			printf("The season is winter\n");
//			printf("The number of days of this month is %d\n", d);
//		case 2:
//			d = 28;
//			printf("The season is winter\n");
//			printf("The number of days of this month is %d\n", d);
//		}
//	}
//	
//		return 0;
//}
//
//
//
//int search(int arr[], int key, int s)//��������ֲ���
//{
//	int l = 0;
//	int r = s - 1;
//	while (l <= r)
//	{
//		int mid = (l + r) / 2;
//		if (arr[mid] < key)
//		{
//			l = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			r = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int s = sizeof(arr) /sizeof( arr[0]);
//	int key = 5;
//	int rt = search(arr, key, s);
//	if (rt == -1)
//	{
//		printf("no");
//	}
//	else
//	{
//		printf("yes,�������%d�����־�����Ҫ�ҵ�", rt+1);
//	}
//
//
//
//	return 0;
//}
//
//
//int main()//���̵ĸ�
//{
//	float a, b, c;
//	float x1,x2,d;
//	printf("Please enter the coefficients a,b,c:");
//	scanf("%f,%f,%f", &a, &b, &c);
//	d = b * b - 4 * a*c;
//	x1 = (-b + sqrt(b*b - 4 * a*c)) / 2;
//	x2= (-b - sqrt(b*b - 4 * a*c)) / 2;
//	if (d >= 0)
//	 {
//		printf("x1=%7.4f, x2=%7.4f\n", x1, x2);
//	 }
//	else
//	{
//		printf("error!\n");
//	}

//
//
//
//	return 0;
//}
//
//int main()//��1��100�����ܱ�3���������ܱ�7��������֮��
//{
//	int i;
//	int sum=0;
//	for (i = 1; i <100; i++)
//	{
//		if (i % 3 == 0 && i % 7 != 0)
//		{
//			sum = sum + i;
//		}
//		else
//			continue;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//
//int main()//��д�������������0��9������ɶ��ٸ���λ��û���ظ����ֵ���λż��
//{
//	int i, n = 0;
//	int a, b, c;
//	for (i = 100; i < 999; i++)
//	{
//		a = i / 100;
//		b = (i - a * 100) / 10;
//		c = i % 10;
//		if (c % 2 == 0)
//		{
//			if (a != b && a != c && b != c)
//				n++;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//
//int main()//���ӳ�������
//{
//	int s=1, i;
//	for (i = 1; i <=9; i++)
//	{
//		s = (s + 1) * 2;
//	}
//	printf("��������=%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[6] = 7;//�˴���[]���±����ò�����
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//��ӡ�������ÿ������
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()//��ά����(ע���±�)
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };//����ʡ�ԣ��в���
//	int i, j;
//	for (i = 0; i <3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)**************************************************************************************
//{
//	int k;
//	for(k=0;k<sz-1;k++)//һ��ð������Ĺ���
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - k; j++)//ÿ�˽����Ĵ���
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//����
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,5,6,4,3,2,1,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);//ȷ��ð�������������������void����д
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//����pi����ֵ
//{
//	long float sum=0,s;
//	int i,k;
//	for (i = 1,k=0;; i+=2,k++)
//	{
//		s = 1 / (i*pow(-1,k));
//		sum += s;
//		if (fabs(s) < pow(10, -4))
//		{
//			break;
//		}
//	}
//	printf("pi = %10.6lf\n", sum*4)
;
//
//
//	return 0;
//}

//int main()//�й��ŵ��������⣩ĳ������Ҫ����ש�飬��֪����һ�˰�3�飬Ů��һ�˰�2�飬С�����˰�һ�顣����45�����ð�45��ש�����ˡ�Ů�ˡ�С���������ˣ�
//{
//	int m, w, c;
//	for (m = 0; m <= 15; m++)
//	{
//		for (w = 0; w <= 22; w++)
//		{
//			for (c = 0; c <= 90; c++)
//			{
//				if (m * 3 + w * 2 +  c/2 == 45&&(m+w+c)==45)
//				{
//					printf("men=%d,women=%d,child=%d\n", m, w, c);
//				}
//				
//				
//			}
//		}
//	}
//	return 0;
//}

//int main()//��������һ������m����m��������������������в�����1����������ӣ����������û�����ӣ����������������ʾ��Ϣ
//{
//	int m;
//	printf("Please enter a number:");
//	scanf("%d", &m);
//	int i, n, p=0;
//	if (m == 1 || m == 0 || m == -1)
//	{
//		printf("It is not a prime number.No divisor!\n");
//		goto  end;
//	}
//	for (i = 2; i < m; i++)
//	{
//		n = m % i;
//		if (n == 0)
//		{
//			p++;
//			printf("%d\n", i);
//		}
//		
//	}
//	if (p == 0)
//	{
//		printf("It is a prime number.No divisor!\n");
//	}
//
//end:;
//	return 0;
//}
//
//void print(int n)//�ֱ��ӡ�����ֵ�ÿһλ
//{
//	if (n > 9)
//	{
//		print(n / 10);
//     }
//	printf("%d ",n % 10);
//}
////�ݹ�Ҫ��������������ÿ�εݹ���ú�ҪԽ��Խ�ӽ���������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//�ݹ飬�����Լ������Լ�
//	print(num);
//
//	return 0;
//}


/*int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[]="bit";
	printf("%d", my_strlen(arr));
	return 0;
}*/

//int count(int num)
//{
//	if (num == 1)
//	{
//		return 10;
//	}
//	else
//		return count(num-1) + 2;
//}
//int main() /*��5����Χ����һ���ʵ�5���˶����ͣ���˵�ȵ�4���˴�2�ꣻ�ʵ�4���ˣ���˵�ȵ�3���˴�2�ꣻ
//�ʵ�3���ˣ���˵�ȵ�2���˴�2�ꣻ�ʵ�2���ˣ���˵�ȵ�1���˴�2�ꡣ��1����˵�Լ�10�꣬�����õݹ鷨��̼��㲢�����5���˵�����*/
//{
//	int n;
//	n=count(5);
//	printf("The 5th person's age is %d\n",n);
//
//	return 0;
//}

//int main()//һ���100�׸߶���������
//{
//	float h=100,sum=100,i;
//	for (i = 2; i <= 10; i++)
//	{
//		h = h / 2;
//		sum = sum + h;
//	}
//	printf("��10�����ʱ������%f�ס�\n", sum);
//	printf("��10�η���%f�ס�\n",h/2);
//
//
//	return 0;
//}

//int main()//��֪xyz+yzz=532������x��y��z�������֣�0-9������дһ���������x��y��z�ֱ����ʲô����
//{
//	int x, y, z;
//	for (x = 0; x < 9; x++)
//	{
//		for (y = 0; y < 9; y++)
//		{
//			for (z = 0; z <9; z++)
//			{
//				if (x * 100 + y * 10 + z + y * 100 + z * 10 + z == 532)
//				{
//					printf("x=%d,y=%d,z=%d", x, y, z);
//					break;
//				}
//			}
//		}
//	}
//	
//	return 0;
//}

//int main()//��̴�ӡ����ͼ����(��ѭ��ʵ�֣���)
//          //*
//          //***
//          //*****
//          //*******
//{
//	int i,n;
//	for (i = 1; i <= 4; i++)
//	{
//		for (n = 1; n <2*i; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()//�ټ����⣺����ÿֻ5Ԫ��ĸ��ÿֻ3Ԫ��С��3ֻ1Ԫ����100Ԫ��100ֻ�����ʹ�����ĸ����С�����������ֻ��
//{
//	int a, b, c;
//	for (a = 0; a <= 20; a++)
//	{
//		for (b = 0; b <=33; b++)
//		{
//			for (c = 0; c < 100; c++)
//			{
//				if (a * 5 + b * 3 + c / 3.0 == 100&&a+b+c==100)
//				{
//					printf("x=%d,y=%d,z=%d\n", a, b, c);
//						break;
//				}
//			}
//		}
//	}
// 
//
//	return 0;
//}

//int jc(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * jc(n - 1);
//}
//int main()//�����ݹ���n�Ľ׳�
//{
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	if (n < 0)
//	{
//		printf("n<0, data error!\n");
//	}
//	else
//	printf("%d! = %ld\n", n,jc(n));
//
//	return 0;
//}


//int count(int x, int n)
//{
//	int i;
//	if (n == 1)
//	{
//		return x;
//	}
//	else
//		return x*count(x,n-1);
//	
//}
//int main()//���õݹ鷽������x��n�η�
//{
//	int x, n;
//	printf("x=? n=?");
//	scanf("%d%d", &x, &n);
//	count(x, n);
//	printf("%d**%d=%d\n", x, n, count(x,n));
//	return 0;
//}

//void Hanoi(int n, char a, char b, char c);
//void Move(int n, char a, char b);
//int main()//��ŵ������
//{
//	int n;
//	printf("Input the number of disks:");
//	scanf("%d", &n);
//	printf("Steps of moving %d disks from A to B by means of C:\n", n);
//	Hanoi(n, 'A', 'B', 'C'); /*���õݹ麯��Hanoi()��n��Բ�̽�����C��A�ƶ���B*/
//	return 0;
//}
///* �������ܣ��õݹ鷽����n��Բ�̽���������c��Դ����a�ƶ���Ŀ������b�� */
//void Hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		Move(n, a, b);	     /* ����n��Բ����a�Ƶ�b */
//	}
//	else
//	{
//		Hanoi(n - 1, a, c, b); /* �ݹ����Hanoi()������n-1��Բ�̽�����b��a�ƶ���c*/
//		Move(n, a, b); 	     /* ��n��Բ����a�Ƶ�b */
//		Hanoi(n - 1, c, b, a); /*�ݹ����Hanoi()������n-1��Բ�̽�����a��c�ƶ���b*/
//	}
//}
///* �������ܣ�  ����n��Բ�̴�Դ����a�Ƶ�Ŀ������b�� */
//void Move(int n, char a, char b)
//{
//	printf("Move %d: from %c to %c\n", n, a, b);
//}
//int count = 0;
//int Fib(int n)//�õݹ鷽����̼���Fibonacci���е�ǰN��
//{
//	
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		count++;
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n,i;
//	printf("Input n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("Fib(%d)=%d, count=%d\n", i, Fib(i),count);
//	}
//	return 0;
//}

//void trans(int n)
//{
//	int h = n / 10;
//	if (h != 0)
//		trans(h);
//	putchar(n % 10 + 48);
//}
//int main()�õݹ鷨��һ������nת�����ַ���   
//{
//	int n;
//	printf("\n����������");
//	scanf("%d", &n);
//	printf("\n����ǣ�"); 
//	trans(n);
//	return 0;
//}



//#include <stdio.h>
//
//long fact(int n);
//
//int main()
//{
//	int n, result = 0;
//
//	printf("Input n:");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("n<0,data error!\n");
//
//	}
//	result = fact(n);
//	printf("%d != %d", n, result);
//}
//long fact(int n)
//{
//	int result;
//
//	if(n==1)
//	{
//		result = 1;
//	}
//	else
//	{
//		result = n * fact(n - 1);
//	}
//		return result;
//}
//void func(int n)//����һ����������Ҫ�����෴��˳������������õݹ鷽��ʵ��
//{
//	if (n > 0)
//	{
//		printf("%d", n % 10);
//		func(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	printf("Enter number:");
//	scanf("%d", &n);
//	func(n);
//
//	return 0;
//}

//double func(double x, int n)//���õݹ�ķ����������к�����ֵ��px(x,n)=x-x^2+x^3-x^4+��((-1)^n-1)(x^n)  n>0
//{
//	if (n == 1)
//	{
//		return x;
//	}
//	else 
//	{          
//		return (x*(1 - func(x, n - 1)));
//	}          
//}
//int main()
//{
//	double x;
//	int n;
//	printf("Enter X and N:");
//	scanf("%lf%d", &x, &n);
//	printf("px=%lf\n",func(x,n));
//
//}

//#include <stdio.h>
//double px(double x, int n)
//{
//	if (n == 1)
//		return x;
//	else
//		return (x*(1 - px(x, n - 1)));
//}
// int main()
//{
//	double x; int n;
//	printf("Enter X and N:");
//	scanf("%lf%d", &x, &n);
//	printf("px=%lf\n", px(x, n));
//}
//
//int Gcd(int a, int b)
//{
//	if (a < b)
//	{
//	    return Gcd(a - b, b);
//	}
//	if (a > b)
//	{
//		return  Gcd(a, b - a);
//	}
//	if (a == b)
//	{
//		return a;
//	}
//}
//int main()
//{
//	int a, b;
//	printf("Input a,b:");
//	scanf("%d,%d", &a, &b);
//	if (a < 0 || b < 0)
//	{
//		printf("Input number should be positive!\n");
//	}
//	else
//	{
//		printf("Greatest Common Divisor of %d and %d is %d\n",a,b,Gcd(a,b));
//	}
//	return 0;
//}

//int main()//����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ������������û��������룩���ú������ͳ�Ʋ���������
//{
//	int i,n;
//	int  arr[40];
//	printf("How many students?");
//	scanf("%d", &n);
//	int s,count=0;
//	for (i = 0; i <= n-1; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < 60)
//		{
//			count++;
//		}
//	}
//	printf("Fail students = %d\n", count);
//}

//int main()
//{
//	int num[10],n;
//	for (n = 0; n <= 9; n++)
//	{
//		scanf("%d", &num[n]);
//	}
//	int FindMax(int num[], int n);
//	printf("max=%d\n", FindMax(num, 10));
//
//	return 0;
//}
//int FindMax(int num[], int n)
//{
//	int i,s;
//	for (i = 1; i <= n - 1; i++)
//	{
//		if (num[i] > num[0])
//		{
//			s = num[i];
//		}
//	}
//	return s;
// }
//int cal(int arr[], int n)
//{
//	int i, sum = 0;
//	for (i = 0; i <= n - 1; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	return sum / n;
//
//}
//int findmin(int arr[], int n)
//{
//	int i, min = arr[0];
//	for (i = 1; i <= n - 1; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	return min;
//}
//int findmax(int arr[], int n)
//{
//	int i, max = arr[0];
//	for (i = 1; i <= n - 1; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//
//}
//int main()//�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ�,��֪ÿ��������಻����40�ˣ��Ա�̼�����ƽ���֣�ʹ�ú�����,�����ͷ�
//{
//	int  n;
//	int  arr[40];
//	printf("Input n:");
//	scanf("%d", &n);
//	printf("Input score:\n");
//	printf("Average score is %d\n",cal(arr,n));
//	printf("��ͷ��ǣ�%d",findmin(arr,n) );
//	printf("��߷��ǣ�%d",findmax(arr,n) );
//}

//int main()//���ʵ�����������ж�Ӧ��Ԫ��ֵ�Ľ���(δ�Ľ��汾��
//{
//	int a[5], b[5];
//	int i, j,n;
//	for (i = 0; i <= 4; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j <= 4; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	for (n = 0; n <= 4; n++)
//	{
//		int tmp = a[n];
//		a[n] = b[n];
//		b[n] = tmp;
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%5d", b[i]);
//	}
//}
//int f(int n)
//{
//	int s;
//	s = (n + 5) % 10;
//	return s;
//}
//int main()//ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵ�
//{
//	int a, b, c, d;
//	int num;
//	printf("Input a 4 digits number\n");
//	scanf("%d", &num);
//	a = num / 1000;//ǧλ
//	b = (num - a * 1000)/100;//��λ
//	c = (num - a * 1000 - b * 100) / 10;//ʮλ
//	d = (num - a * 1000 - b * 100 - c * 10);//��λ
//	int arr[4] = { f(d),f(c), f(b),f(a) };
//	printf("%d", f(d) * 1000 + f(c) * 100 + f(b) * 10 + f(a));
//
//	return 0;
//}


//int FindMax(int num[], int n, int *pMaxPos)
//{
//	int i, s;
//	for (i = 1; i <= n - 1; i++)
//	{
//		*pMaxPos = 0;
//		s = num[0];
//		if (num[i] > num[0])
//		{
//			s = num[i];
//			*pMaxPos = i;
//		}
//	}
//	return s;
//}
//int FindMin(int num[], int n, int *pMinPos)
//{
//	int i, s;
//	for (i = 1; i <= n - 1; i++)
//	{
//		*pMinPos = 0;
//		s = num[0];
//		if (num[i] < num[0])
//		{
//			s = num[i];
//			*pMinPos = i;
//		}
//	}
//	return s;
//}
//
//int main()
//{
//	int num[10],n;
//	int pMaxPos, pMinPos;
//	
//	printf("Input 10 numbers:\n");
//	for (n = 0; n <= 9; n++)
//	{
//		scanf("%d", &num[n]);
//	}
//	int max, min;//������������������
//	max = FindMax(num, 10, &pMaxPos);//ֱ�ӷ�printf�����в�ͨ
//	min = FindMin(num, 10, &pMinPos);
//	printf("Max=%d,Position=%d,Min=%d,Position=%d\n", max,pMaxPos,min,pMinPos);
//
//	return 0;
//}


//int main()//�Ӽ�������һ��Ӣ����ĸ��������Ǵ�дӢ����ĸ������ת��ΪСдӢ����ĸ���������СдӢ����ĸ������ת��Ϊ��дӢ����ĸ��
//                  Ȼ��������ASCII��ֵ��ʾ����Ļ�ϣ��������Ӣ����ĸ����ת��ֱ���������Ļ��
//{
//	char a, b;
//	printf("Press a key and then press Enter:");
//	scanf("%c", &a);
//	if (a >= 65 && a <= 90)
//	{
//		b = a + 32;
//		printf("%c, %d\n", b, b);
//	}
//	else if (a >= 97 && a <= 122)
//	{
//		b = a - 32;
//		printf("%c, %d\n", b, b);
//	}
//	else
//		printf("%c, %d\n", a, a);
//
//	
//	return 0;
//}

//void search(int arr[], int n, int x)//��������
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			printf("��ҪѰ�ҵ������������еĵ�%d��\n", i + 1);
//			
//		}
//	}
//}
//int main()
//{
//	int arr[10];
//	int n;
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	 
//	search(arr, 10, 98);
//	return 0;
//}


//void insert(int arr[], int num/*���������*/, int pla, int i/*����Ԫ�صĸ���*/)
//{
//	int n;
//	for (n = i - 1; n >= pla - 1; n--)//�����һ��Ԫ�ؿ�ʼ����arr[n],ȫ��Ԫ��������
//	{
//		arr[n +1] = arr[n];
//	}
//	arr[pla - 1] = num;
//	
//}
//int main()//�滻ĳ�����ֵ�һ��������****
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("�����滻ʲô�����ֵ�arr������ĵڼ�λ��\n");
//	int num, pla;
//	printf("����������");
//	scanf("%d", &num);
//	printf("������Ҫ�滻���ֵ�λ��");
//	scanf("%d", &pla);
//	insert(arr, num, pla,i);
//	int k;
//	for (k = 0; k <= i ; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}

//int Delete(int arr[], int n, int x)
//{
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			for (j = i; j < n-1; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			j--;
//			n--;
//		}
//	
//	}
//	return n;
//}

//int main()//ɾ�������е�ָ��Ԫ��
//{
//	int arr[5];
//	int i,j,x;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &j);
//	}
//	printf("��������ɾ����Ԫ��");
//	scanf("%d", &x);
//	int z;
//	z= Delete(arr, 5, x);
//	for (i = 0; i <z ; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//
//	return 0;
//}
//int my_strlen (const char* str)//����const�в�ͨ
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main()
//{
//	int len 	= my_strlen("abcde");
//
//	printf("%d", len);
//	return 0;
//}


//int main()//����ת��
//{
//	int a[2][3], b[3][2];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//			scanf("%d", &a);
//	}
//	trans(a, b);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//			printf("%d", &b);
//		printf("\n");
//	}
//}
//void trans(int arr[],int brr[])
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			tran[j][i] = arr[i][j];
//		}
//	}
//}



//void zl(int arr[][100],int x)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < x; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//}
//void output(int arr[][100],int x)
//{
//	int i, j,k;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%6d", arr[i][j]);
//			
//
//		}
//		printf("\n");
//	}
//}
//
//int main()//�������
//{
//	int arr[100][100];
//	int n=0;
//	scanf("%d", &n);
//	zl(arr, n);
//	output(arr, n);
//	return 0;
//
//
//}


//int main()//����1��3 * 2�Ķ�ά����a������Ԫ�ص�ֵ����ʽ���������������ʽ���a
//{
//	int arr[3][2];
//	int i, j;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 1; j++)
//		{
//			arr[i][j] = i + j;
//			
//		}
//	}
//	
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 1; j++)
//		{
//			printf("%4d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5];
//	int i, j,k;
//
//	for (i = 0; i < 5; i++)
//	{
//		arr[i][0] = i + 1;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i][j-1] - 1;
//		}
//		for (j = i; j < 5; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// �ж����������Ƿ���1�����򷵻�0 
//int prime(int n)
//{
//	if (n == 1)
//		return 0;
//
//	int temp = (int)sqrt(n);
//	for (int i = 2; i <= temp; i++)
//		if (n % i == 0)
//			return 0;
//
//	return 1;
//}
//
//int main()//��°ͺղ���
//{
//	int even;
//
//	scanf("%d", &even);
//	for (int i = 3; i <= even / 2; i += 2)
//		if (prime(i) && prime(even - i))
//			printf("%d %d\n", i, even - i);
//
//	return 0;
//}
//




//int main()//�ҵ������е����ֵ
//{
//	int arr[3][4];
//	int i, j,max=0;
//	printf("������3*4����\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//		printf("max value is %d\n", max);
//	return 0;
//}

//int main()//��������Ӣ�ĵ����ڼ���ͨ���������ڱ�������Ӧ�����֣����鵽��β����δ�ҵ��������������ʾ��Ϣ��
//{
//	int i, count = 0;
//	const char* Weekday[8] = { 0,"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday" };
//	char day_name[30];
//	printf("Please enter a string:\n");
//	scanf("%s", day_name);
//	for (i = 1; i < 8; i++)
//	{
//		if (!(strcmp(day_name, Weekday[i])))     //strcmpΪ�ַ����ȽϺ�����������������������ַ����ȥ�Ƚ�
//		{
//			count = i;
//			break;
//		}
//	}
//	if (i == count)           //��֤�Ƿ��ҵ�������ĸ�������
//		printf("%s is %d\n", day_name, count);
//	else
//		printf("Not found!\n");
//}




//int main()//������3*4�ľ����������ֵ����Ԫ�ص�ֵ
//{
//	int arr[3][4] = { { 1,2,3,4 } ,{9, 8, 7, 6 }, {10, -1, -4, 4 } };
//	int i, j,max=0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//		
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("max=%d\n", max);
//
//
//
//	return 0;
//}

//int main()//��дһ������������ݺ��·ݣ��жϸ����Ƿ������꣬�����ݸ������·��ж���ʲô���ں͸����ж�����(��ά����)
//{
//	int dom[2][13] = { {0,31,28,31,30.31,30,31,31,30,31,30,31}, {0, 31, 29, 31, 30.31, 30, 31, 31, 30, 31, 30, 31} };
//	int y, m;
//	printf("Input year,month:");
//	scanf("%d,%d",&y,&m);
//	while (m < 1 || m>12)
//	{
//		printf("Input year,month:");
//		scanf("%d,%d", &y, &m);
//		if (m >= 1 && m <= 12)
//		{
//			break;
//		}
//	}
//	if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))//����
//	{
//		printf("The number of days is %d\n", dom[1][m]);
//	}
//	else
//	{
//		printf("The number of days is %d\n", dom[0][m]);
//	}
//	return 0;
//
//
//}

//��д���������������ĳ˻����뽫���´��븴�Ƶ�codeblocks�У���multiply������������������������ȷ�����д��루������Ŀ�и����Ĵ��룩���Ƶ������������в��ύ��

//#include <stdio.h>
//#define M 3
//#define S 4
//#define N 2
//
//void multiply(int A[M][S], int B[S][N], int C[M][N])
//{
//	
//	int i, j, k;
//	for (i = 0; i < M; i++) //���ڿ���C��A���б�
//	{
//		for (j = 0; j < N; j++) //���ڿ���C��B���б�
//		{
//			for (k = 0; k < S; k++)  //���ڿ���A���б��B���б�
//			{
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int i, j;
//	int A[M][S], B[S][N],  C[M][N] = { 0 };//���C����ʼ�����д���
//	printf("Please input A:\n");
//	for (i = 0; i < M; i++)
//		for (j = 0; j < S; j++)
//			scanf("%d", &A[i][j]);
//	printf("Please input B:\n");
//	for (i = 0; i < S; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &B[i][j]);
//	multiply(A, B, C);
//	printf("C=\n");
//	for (i = 0; i < M; i++) {
//		for (j = 0; j < N; j++)
//			printf("%d ", C[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//�ж��Ƿ��ǻ���
//int main()
//{
//	char arr[10];
//	gets_s(arr);
//	int n = strlen(arr);
//	int i,count=0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[n-i-1])
//		{
//			printf("no");
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == n)
//	{
//		printf("yes");
//	}
//
//
//	return 0;
//}

//�������µ����飺
//float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
//float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
//int mpl[5];  /* Miles per litre. */
//дһ��������㲢��ʾmpl��ÿ��Ԫ�ص�ֵ��ʹ��ָ��������±��������Ԫ�ء�
//int main()
//{
//	int i;
//	int mpl[5] = {0};
//	float litres[5] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
//	float miles[5] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
//	float *p1 = litres; float *p2 = miles; int *p3 = mpl;
//	for (i = 0; i <= 4; i++)
//	{
//		*(p3+i) = *(p2+i)/ *(p1+i);
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d\t", *(p3 + i));
//	}
//	return 0;
//}


//int main()
//{
//	char name[10];
//	char ch;
//	int i=0,j;
//	while (ch = getchar() != '\0')
//	{
//		name[i] = ch;
//		name[i + 1] = ' ';
//		i+=2;
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("%c", name[j]);
//	}
//	return 0;
//}

//������3*4�ľ���������жԽ���ֵ����Ԫ�ص�ֵ
//int main()
//{
//	int arr[3][3] = { { 1,2,3 } ,{4,5,6}, {7,8,9} };
//	int i, j, max = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//
//
//		if (arr[i][i] > max)
//		{
//			max = arr[i][i];
//			j = i;
//		}
//
//	}
//	printf("max=%d ,row=%d", max, j);
//
//
//
//	return 0;
//}

//�Ĵ��⣺�û��Ӽ�����������һ�����ֱ�ʾ�·�ֵn��������ʾ���·ݶ�Ӧ��Ӣ�ı�ʾ����n����1��12֮�䣬�������Illegal month����
//ע�⣺
//��1���뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
//��2������û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
//��3�����ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�

//int main()
//{
//	int n;
//	char monthName[][20] = { "Illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//
//
//	printf("Input month number:");
//	scanf("%d", &n);
//	if ((n <= 12) && (n >= 1))
//	{
//		printf("month %d is %s\n", n, monthName[n]);
//
//	}
//	else
//	{
//		printf("%s\n", monthName[0]);
//	}
//	return 0;
//}

//void find(int arr[2][6])
//{
//	int i = 0, j = 0; int max,min,p,k,q,f=0;
//	
//	for (i = 0; i < 2; i++) {
//		for (j = 0, max = 0, p = 0; j < 6; j++) {         //�жϳ�����Ԫ�ص����ֵ
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				p = j;
//			}
//			else {
//				max = max;
//				p = p;
//			}
//		}
//		for (k = 0, min = arr[i][p], q = i; k < 2; k++) {   //�ж����ֵ�ڸ����Ƿ�Ϊ��Сֵ
//			if (arr[k][p] < min) {
//				min = arr[k][p];
//				q = k;
//			}
//			else {
//				min = min;
//				q = q;
//				f++;
//			}
//		}
//		if (p == q) {
//			printf("%d is the saddle point!\n", arr[p][q]);  //��������ֵ�к�û�иı䣬�������
//			break;
//		}
//	}
//	if (f == 2 && i != q)
//	{
//		printf("no saddle point\n");
//	}
//}
//
//int main()
//{
//	int arr[2][6];
//	int i, j;
//	for (i = 0; i <2 ; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	find(arr);
//
//	return 0;
//}

//���庯��strcpym���ַ���s1�дӵ�m���ַ���ʼʣ��������ַ��������ַ�����s2�С�(Ҫ�󣺲���ʹ�ÿ⺯��strcpy)
//**�����ʽҪ��"%d" ��ʾ��Ϣ��"input a string:\n" "input start point:\n"
//**�����ʽҪ��puts(s2)
//#include<string.h>
//void strcpy(char s1[20],char s2[20],int m)
//{
//	int i ,j ;
//	for (j = 0,i=m-1;s1[i]!='\0' ; j++,i++)
//	{
//		 s2[j] =  s1[m-1];
//	}
//	s2[j] = '\0';
//}
//int main()
//{
//	char s1[20];
//	char s2[20];
//	int m;
//	printf("input a string:\n");
//	gets_s(s1);
//	printf("input start point:\n");
//	scanf("%d", &m);
//	strcpy(s1, s2,m);
//	puts(s2);
//}


//�����ַ����и������͵�����
//#define ARR_SIZE 80
//
//int main()
//{
//	char str[ARR_SIZE];
//	int  len, i;
//	int  letter = 0, digit = 0, space = 0, other = 0;
//
//	printf("������һ���ַ���:");
//	gets_s(str);
//
//	len = strlen(str);
//
//	for (i = 0; i < len; i++)
//	{
//		if ( str[i] <= 'z'&& str[i]>='a' )
//		{
//			letter++;
//		}
//		else if (str[i] <= 'Z'&& str[i] >= 'A')
//		{
//			letter++;
//		}
//		else if (str[i] <= '9'&& str[i] >= '0')
//		{
//			digit++;
//		}
//		else if (str[i] ==' ')
//		{
//			space++;
//		}
//		else
//			other++;
//	}
//
//	printf("Ӣ���ַ���:%d\n", letter);
//	printf("�����ַ���:%d\n", digit);
//	printf("�ո���:%d\n", space);
//	printf("�����ַ���:%d\n", other);
//}

//����ж������һ���ַ����Ƿ��ǡ����ġ�����ν�����ġ��ַ�������������Ҷ���һ�����ַ���������: "abcba"����һ�������ַ�����
//void huiwen(char arr[50])
//{
//	int n = strlen(arr);
//	int i, count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[n - i - 1])
//		{
//			printf("This string is not a plalindrome.");
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == n)
//	{
//		printf("This string is a plalindrome.");
//	}
//}
//int main()
//{
//	char arr[50];
//    printf("Input a string:\n");
//	gets_s(arr);
//	huiwen(arr);
//	
//
//
//	return 0;
//}


//�Ӽ�������һ���ַ���a�����ַ���a���Ƶ��ַ���b�У�������ַ���b��
//�����ʵ���ַ���������strcpy()�Ĺ��ܣ���Ҫ����ʹ���ַ���������strcpy()��
//void mstrcpy(char a[20],char b[20])
//{
//	int i, j;
//	for (i = 0, j = 0; a[i] != '\0'; i++)
//	{
//		b[j] = a[i];
//		j++;
//	}
//	b[j] = '\0';
//}
//int main()
//{
//	char a[20];
//	char b[20];
//	printf("Input a string:");
//	gets_s(a);//����ʱҪ��gets����Ȼ�ᱨ��
//	mstrcpy(a, b);
//	printf("The copy is:");
//	puts(b);
//
//	return 0;
//}

//����һ���ַ���������������,ʵ���ַ�������󳤶�Ϊ80���ַ� ���������š�
//void Inverse(char str[80])
//{
//	int i;
//	int n = strlen(str);
//	for (i = 0; i <n/2 ; i++)
//	{
//		int temp = str[i];
//		str[i] = str[n - i - 1];
//		str[n - i - 1] = temp;
//	}
//	str[n] = '\0';
//}
//int main()

//{
//	char str[80];
//	printf("Input a string:\n");
//	gets_s(str);
//	Inverse(str);
//	printf("Inversed results:\n");
//	printf("%s\n", str);
//}

//���ַ�ָ���������������ʵ�����ַ���ÿ���ַ������һ���ո�Ĺ��ܡ�
//void insert (char* s)
//{
//	int n;
//	n = 0;
//	while (*(s + n)) n++;
//	*(s + n * 2) = '\0';
//	while (n >= 0) {
//		*(s + n * 2) = *(s + n);
//		*(s + n * 2 - 1) = 32;
//		n--;
//	}
//}
//int main()
//{
//	char s [20];
//	printf("Input a string:");
//	gets_s(s);
//	insert (s);
//	printf("Insert results:%s\n", s);
//	return 0;
//}

//���ַ�ָ���������������ʵ���ַ��������Ź��ܡ�
//void Inverse(char *str)
//{
//	int i;
//	int n = strlen(str);
//	for (i = 0; i < n / 2; i++)
//	{
//		char temp = str[i];
//		str[i] = str[n - i - 1];
//		str[n - i - 1] = temp;
//	}
//	str[n] = '\0';
//}
//int main()
//{
//	char str[80];
//	printf("Input a string:\n");
//	gets_s(str);
//	Inverse(str);
//	printf("Inversed results:%s\n", str);
//
//}



//�����º���ԭ�ͱ�д�������ַ������������������ʵ���ַ��������Ź��ܡ�
//void Inverse(char str[], char ptr[]);
//������ʾ��Ϣ��"Input a string:"
//�����ַ�����gets()
//�����ʾ��Ϣ��"Inversed results:%s\n"
//void Inverse(char str[], char ptr[])
//{
//	int i, j;
//	int n = strlen(str);
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		ptr[i] = str[n - i - 1];
//
//	}
//	ptr[n] = '\0';
//}
//int main()
//{
//	char str[80];
//	char ptr[80];
//	printf("Input a string:");
//	gets_s(str);
//	Inverse(str, ptr);
//	printf("Inversed results:%s\n", ptr);
//}

//��ʹ���ַ���������strcat()���ʵ��strcat()�Ĺ��ܣ����������������ַ�����Ȼ�������������ַ������������Ӻ��ַ������׵�ַ��
//char* mstrcat(const char* a, const char* b)
//{
//	char c[50];
//	int i, j,n;
//	n = strlen(a);
//	for (i = 0; i < n; i++)
//	{
//		c[i] = a[i];
//	}
//	for (i = n,j=0; i < strlen(b); i++,j++)
//	{
//		c[i] = b[j];
//	}
//	c[i] = '\0';
//	return c;
//}
//
//int main()
//{
//	char a[20];
//	char b[20];
//	printf("Input the first string:");
//	gets_s(a);
//	printf("Input the second string:");
//	gets_s(b);
//	char* c = mstrcat(a, b);
//	printf("The result is: %s\n",c);
//	return 0;
//}

//��ʹ���ַ���������strcat()���ʵ��strcat()�Ĺ��ܣ����������������ַ�����Ȼ�������������ַ������������Ӻ��ַ������׵�ַ��
//#define N 80
//char *MyStrcat(char *dstStr, char *srcStr);
//int main()
//{
//	char first[2 * N]; /* �������Ӧ���㹻���Ա������Ӻ���ַ��� */
//	char second[N];
//	char *result = NULL;
//	printf("Input the first string:");
//	gets_s(first);
//	printf("Input the second string:");
//	gets_s(second);
//	result = MyStrcat(first, second);
//	printf("The result is: %s\n", result);
//	return 0;
//}
///* �������ܣ����������ַ��� */
//char *MyStrcat(char *dstStr, char *srcStr)
//{
//	char *pStr = dstStr;   /* �����ַ����׵�ַָ�� */
//	/* ��ָ���Ƶ��ַ���ĩβ */
//	while (*dstStr != '\0')
//	{
//		dstStr++;
//	}
//	/* ���ַ���2���ݸ��Ƶ��ַ���1�ĺ��� */
//	for (; *srcStr != '\0'; dstStr++, srcStr++)
//	{
//		*dstStr = *srcStr;
//	}
//	*dstStr = '\0';      /* �����Ӻ���ַ�����ĩβ����ַ���������־ */
//	return pStr;          /* �������Ӻ���ַ�����ָ�� */
//}

//���ַ�ָ���������������ʵ�����¹��ܣ����ַ�����ɾ����ĳ�ַ���ͬ���ַ���
//void del(char* str, char n)
//{
//	int i,j;
//	for (i=0; str[i]!='\0';i++)
//	{
//		if (str[i] == n)
//			for(j=i;str[j]!='\0';j++)
//		   {
//			 str[j] = str[j+1];
//			 i--;
//		    }
//	}
//	str[i] = '\0';
//
//}
//int main()
//{
//	char str[50];
//	char n;
//	printf("Input a string:");
//	gets_s(str);
//	printf("Input a character:");
//	scanf("%c", &n);
//	getchar();
//	del(str, n);
//	printf("Results:%s\n", str);
//	return 0;
//}

//���ַ�ָ����ʵ�������ַ����Ŀ�����ע��������ʹ���ַ�������������
//��ʹ�����º������ʵ�֡�
//void  MyStrcpy(char *dstStr, char *srcStr)
//
//***������ʾ��"Please enter a string:\n"
//***�����ʽҪ���޸�ʽҪ��
//***�����ʽҪ��"The copy is:%s"
//void MyStrcpy(const char *dstStr, char *srcStr)
//{
//	int i;
//	for (i = 0; dstStr[i]!='\0'; i++)
//	{
//		srcStr[i] = dstStr[i];
//	}
//	srcStr[i] = '\0';
//	
//}
//int main()
//{
//	char a[20];
//	char b[20];
//	printf("Please enter a string:\n");
//	gets_s(a);
//	MyStrcpy(a, b);
//	printf("The copy is:%s",b);
//	return 0;
//}

//�����º���ԭ�ͱ��ʵ���ַ������Ӻ���strcat()�Ĺ��ܡ�
        //void MyStrcat(char dstStr[], char srcStr[]);
//void MyStrcat(char dstStr[], char srcStr[])
//{
//	int i,j;
//	for (i = strlen(dstStr),j=0; i < strlen(dstStr) + strlen(srcStr) - 2; i++,j++)
//	{
//		dstStr[i] = srcStr[j];
//	}
//	dstStr[i] = '\0';
//}
//int main()
//{
//	char a[20];
//	char b[20];
//	printf("Input a string:");
//	gets_s(a);
//	printf("Input another string:");
//	gets_s(b);
//	MyStrcat(a, b);
//	printf("Concatenate results:%s\n", a);
//
//
//	return 0;
//}
//




//�����º���ԭ�ͱ�̴Ӽ�������һ��m��n�еĶ�ά���飬Ȼ�����������Ԫ�ص����ֵ�������ڵ������±�ֵ�����У�m��n��ֵ���û��������롣��֪m��n��ֵ��������10��
//void InputArray(int *p, int m, int n);
//int  FindMax(int *p, int m, int n, int *pRow, int *pCol);
//������ʾ��Ϣ��
//"Input m, n:"
//"Input %d*%d array:\n"
//�����ʽ��"%d,%d"
//�����ʾ��Ϣ�͸�ʽ��"max = %d, row = %d, col = %d\n"

//#include <stdio.h>
//#define M 10
//#define N 10
//void InputMatrix(int *p, int m, int n);
//int FindMax(int *p, int m, int n, int *pRow, int *pCol);
//void Output(int *a, int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", *a + n * i + j);
//		}
//	}
//}
///* �������ܣ�����m*n�����ֵ */
//void InputMatrix(int *p, int m, int n)
//{
//	int i, j;
//	printf("Input %d*%d array:\n", m, n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &p[i * n + j]);
//		}
//	}
//}
///* �������ܣ���m*n�����в������ֵ�������ڵ����к� */
//int FindMax(int *p, int m, int n, int *pRow, int *pCol)
//{
//	int i, j, max = p[0];
//	*pRow = 0;
//	*pCol = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (p[i * n + j] > max)
//			{
//				max = p[i * n + j];
//				*pRow = i;              /*��¼���±�*/
//				*pCol = j;              /*��¼���±�*/
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int a[M][N], m, n, row, col, max;
//	printf("Input m, n:");
//	scanf("%d,%d", &m, &n);
//	InputMatrix(*a, m, n);
//	max = FindMax(*a, m, n, &row, &col);
//	Output(*a,m,n);
//	printf("max = %d, row = %d, col = %d\n", max, row, col);
//	return 0;
//}



//�ö�ά�������ָ����Ϊ����ʵ�Σ�ʵ�־���ת�á������º���ԭ�ͱ�̼��㲢���m��n�׾����ת�þ������У�m��n��ֵ���û��Ӽ������롣��֪m��n��ֵ��������10��
//void Transpose(int *a, int *at, int m, int n);
//void InputMatrix(int *a, int m, int n);
//void PrintMatrix(int *at, int n, int m);
//#include <stdio.h>
//#define M 10
//#define N 10
///* �������ܣ�����m*n����a��ת�þ���at */
//void Transpose(int *a, int *at, int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			at[j * m + i] = a[i * n + j];
//		}
//	}
//}
///* �������ܣ�����m*n����a��ֵ */
//void InputMatrix(int *a, int m, int n)
//{
//	int i, j;
//	printf("Input %d*%d matrix:\n", m, n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i * n + j]);
//		}
//	}
//}
///* �������ܣ����n*m����at��ֵ */
//void PrintMatrix(int *at, int n, int m)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d\t", at[i * m + j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int s[M][N], st[N][M], m, n;
//	printf("Input m, n:");
//	scanf("%d,%d", &m, &n);
//	InputMatrix(*s, m, n);
//	Transpose(*s, *st, m, n);
//	printf("The transposed matrix is:\n");
//	PrintMatrix(*st, n, m);
//	return 0;
//}


//��ָ����ʵ��3X4�Ķ�ά�����Ԫ�ض����Լ���˶�ά��������ֵ�����ֵ�±�
//�������º���ʵ�֣�
//void Input(int(*p)[4], int m, int n); /*����Ԫ�ض��뺯��*/
//int FindMax(int(*p)[4], int m, int n, int *pRow, int *pCol); /*�����ֵ���±꺯��*/
//
//***������ʾ��Ϣ��"Please input your data:\n"
//***�����ʽҪ���޸�ʽҪ��
//***�����ʽҪ��"The maximum is %d, which is in row %d, colum %d\n"

//void Input(int(*p)[4], int m, int n)
//{
//	int i, j;
//	printf("Please input your data:\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &p[i][j]);
//		}
//	}
//}
//int FindMax(int(*p)[4], int m, int n, int *pRow, int *pCol)
//{
//	int i, j, max = *p[0];
//	*pRow = 0;
//	*pCol = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (p[i][j] > max)
//			{
//				max = p[i][j];
//				*pRow = i;
//				*pCol = j;
//			}
//		}
//	}
//	
//	return max;
//}
//
//int main()
//{
//	int pRow,pCol,max;
//	int p[3][4];
//	Input(p, 3, 4);
//	max=FindMax(p, 3, 4, &pRow, &pCol);
//	printf("The maximum is %d, which is in row %d, colum %d\n", max, pRow, pCol);
//}

//typedef struct student
//{
//	int num;
//	char name[10];
//	int score;
//}stu;
//int main()
//{
//	stu a[4];
//	for (int t = 0; t< 4; t++)
//	{
//		printf("�����%d��ѧ������Ϣ��ѧ�š��������ɼ�\n",t);
//		scanf("%d %s %d", &a[t].num, &a[t].name, &a[t].score);
//	}
//	for (int j = 0; j <4; j++)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (a[i].score < a[i + 1].score)
//			{
//				a[5] =a[i];
//				a[i] = a[i + 1];
//				a[i + 1] =a[5];
//			}//������
//		}
//	}
//	printf("�����ѧ������ϢΪ:\n");
//	for (int k = 0; k < 4; k++)
//	{
//		printf("%d %s %d\n", a[k].num, a[k].name, a[k].score);
//	}
//
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct student
//{
//	int id;
//	char name[10];
//	int point;
//} stu;
//
//int main()
//{
//	stu stu1[5];//��һ��λ����������
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		printf("�����%d��ѧ������Ϣ��ѧ�š��������ɼ�\n", i);
//		scanf("%d %s %d", &stu1[i].id, &stu1[i].name, &stu1[i].point);
//	}
//	for (j = 4; j > 0; --j)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			if (stu1[i].point < stu1[i + 1].point)
//			{
//				stu1[4] = stu1[i];
//				stu1[i] = stu1[i + 1];
//				stu1[i + 1] = stu1[4];
//			}//������
//		}
//	}
//	printf("�����ѧ������ϢΪ:\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %s %d\n", stu1[i].id, stu1[i].name, stu1[i].point);
//	}
//
//	return 0;
//}

//*************************************************************************************
//����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죿ע���������⡣
//�����ʽҪ��"\n%d��%d����%d��ĵ�%d�졣"
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	//�����������飬������ÿ���µ�������2�·ݵ�����Ϊƽ�������������2�·���29
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	struct date d;//����ṹ�����D�����ڽ����û�����������ա�
//	printf("���������ڣ��꣬�£��գ�");
//	scanf("%d,%d,%d", &d.year, &d.month, &d.day);
//	int dday = 0;
//	for (int i = 1; i < d.month; i++)//����·ݵ�������ӣ���1�µ���ǰ�·�-1
//	{
//		dday += days[i];
//	}
//	dday += d.day;//ͳ�����·ݣ����ϵ��µ�����
//	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))//�ж��Ƿ�Ϊ�����������
//	{
//		if (d.month > 2)//�������������꣬�����·ݴ���2�µ�ʱ��������Ҫ��������1����Ϊ����2�·ݵ�������ƽ��2�·ݵ�������һ�졣
//			dday = dday + 1;
//	}
//	printf("\n%d��%d����%d��ĵ�%d�졣", d.month, d.day, d.year, dday);
//	return 0;
//}
//************************************************************************************************
//���ͳ�ƺ�ѡ�˵ĵ�Ʊ��������3����ѡ��zhang��li��wang����ѡ�����������ִ�Сд����10��ѡ��ѡ��ÿ������һ����Ʊ�ĺ�ѡ�˵����֣���ѡ������ѡ���������򰴷�Ʊ����
//ѡ��ͶƱ����������Զ���ʾ����ѡ�˵ĵ�Ʊ����ͷ�Ʊ��Ϣ��Ҫ���ýṹ������candidate��ʾ3����ѡ�˵������͵�Ʊ�����
//���ýṹ������candidate��ʾ3����ѡ�˵������͵�Ʊ�����
//������ʾ��"Input vote %d:"
//������gets();;
//�����ʾ��"Election results:\n"
//�����ʽΪ��"%8s:%d\n"��"Wrong election:%d\n"

//#include  <stdio.h>
//#include  <string.h>
//#define NUM_ELECTORATE 10
//#define NUM_CANDIDATE 3
//struct candidate
//{
//	char  name[20];
//	int   count;
//}candidate[3] = { {"li", 0}, {"zhang", 0}, {"wang", 0} };
//
//int Election(struct candidate candidate[])
//{
//	int  i, j, wrong = 0;
//	char  name[20];
//	for (i = 1; i <= NUM_ELECTORATE; i++)
//	{
//		printf("Input vote %d:", i);
//		gets_s(name);
//		/* ��name�е��ַ�ȫ�����Сд��ĸ */
//		for (j = 0; name[j] != '\0'; j++)
//		{
//			if (name[j] >= 'A' && name[j] <= 'Z')
//			{
//				name[j] += 'a' - 'A';
//			}
//		}
//		int flag = 1;
//		for (j = 0; j < NUM_CANDIDATE; j++)
//		{
//			if (strcmp(name, candidate[j].name) == 0)
//			{
//				candidate[j].count++;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			wrong++;  /* ��Ʊ���� */
//			flag = 0;
//		}
//	}
//	return wrong;
//}
//int main()
//{
//	int  i, wrong;
//	wrong = Election(candidate);
//	printf("Election results:\n");
//	for (i = 0; i < NUM_CANDIDATE; i++)
//	{
//		printf("%8s:%d\n", candidate[i].name, candidate[i].count);
//	}
//	printf("Wrong election:%d\n", wrong);
//	return 0;
//}
//*****************************************************************************************
//13����Χ��һȦ���ӵ�1���˿�ʼ˳�򱨺�1��2��3��������3�����˳�Ȧ�ӡ��ҳ��������Ȧ�������ԭ������š�Ҫ���ýṹ����ʵ�֡�
//#include <stdio.h>
//#define  N  13
//struct person
//{
//	int number;
//	int nextp;
//} link[N + 1];
//
//int main()
//{
//	int i, count, h;
//
//	/* �������� */
//	for (i = 1; i <= N; i++)
//	{
//		if (i == N)
//		{
//			link[i].nextp = 1;
//		}
//		else
//		{
//			link[i].nextp = i + 1;
//		}
//		link[i].number = i;
//	}
//	printf("\n");
//	count = 0;
//	h = N;
//	printf("��Ȧ��Ա��˳��");
//	while (count < N - 1)
//	{
//		i = 0;
//		while (i != 3)
//		{
//			h = link[h].nextp;
//			if (link[h].number)
//			{
//				i++;
//			}
//		}
//		printf("%3d", link[h].number);
//		link[h].number = 0;
//		count++;
//	}
//
//	printf("\n���ĳ�Ա�ǣ�");
//	for (i = 1; i <= N; i++)
//	{
//		if (link[i].number)
//		{
//			printf("%3d", link[i].number);
//		}
//	}
//
//	return 0;
//}
//*****************************************************************************************
//�������¶��壺
//struct time_rec
//{
//	int hours;
//	int mins;
//	int secs;
//};
//struct time_rec current_time;
//дһ������������µĺ�������ɣ�
//(a) ����current_time��ֵ��
//void input_time(struct time_rec *current_time)
//(b)��current_time����1�룺
//void increment_time(struct time_rec *current_time)
//(c)��ʾcurrent_time����ֵ��
//void output_time(struct time_rec *current_time)

//**�����ʽҪ��"%d%d%d" ��ʾ��Ϣ��"�����뵱ǰʱ�䣨ʱ �� �룩��"
//**�����ʽҪ��"��ǰʱ�䣺%dʱ%d��%d�룡"

//struct time_rec
//{
//	int hours;
//	int mins;
//	int secs;
//};
//
//void input_time(struct time_rec *current_time)
//{
//	
//	printf("�����뵱ǰʱ�䣨ʱ �� �룩��");
//	scanf("%d%d%d", &current_time->hours, &current_time->mins, &current_time->secs);
//}
//
//void increment_time(struct time_rec *current_time)
//{
//	current_time->secs++;
//	if (current_time->secs == 60)
//	{
//		current_time->mins++;
//		current_time->secs = 0;
//	}
//	if (current_time->mins == 60)
//	{
//		current_time->hours++;
//		current_time->mins = 0;
//	}
//	if (current_time->hours == 24)
//	{
//		current_time->hours = 0;
//	}
//}
//
//void output_time(struct time_rec *current_time)
//{
//	printf("��ǰʱ�䣺%dʱ%d��%d�룡", current_time->hours, current_time->mins, current_time->secs);
//}
//int main()
//{
//	struct time_rec time;
//	input_time(&time);
//	increment_time(&time);
//	output_time(&time);
//
//	return 0;
//}


////��������
//
////�ȴ���һ���ṹ��
//struct Node {
//	int data;
//	struct Node* next;
//};
////������ͷ
//struct Node* CreatList() {
//	struct Node* HeadNode = (struct Node*)malloc(sizeof(struct Node));
//	HeadNode->data = 1;
//	HeadNode->next = NULL;
//	return HeadNode;
//}
////�������
//struct Node* CreatNode(int data) {
//	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
//	NewNode->data = data;
//	NewNode->next = NULL;
//	return NewNode;
//}
////�����ͷ�巨
//void InserNodeByHead(struct Node* HeadNode, int data) {
//	struct Node* NewNode = CreatNode(data);
//	NewNode->next = HeadNode->next;
//	HeadNode->next = NewNode;
//}
//
////����Ĵ�ӡ
//void Print(struct Node* HeadNode) {
//	while (HeadNode->next) {
//		printf("%d ", HeadNode->next->data);
//		HeadNode = HeadNode->next;
//	}
//	printf("\n");
//}
////����һ����̬����
//int main() {
//	struct Node* HeadNode = CreatList();
//	int i = 0;//iΪѭ������
//	int l = 0;//lΪҪ���ɵ�������ĳ���
//	scanf("%d", &l);
//	for (i = 0; i < l; i++) {
//		int data = 0;
//		scanf("%d", &data);
//		InserNodeByHead(HeadNode, data);//����ͷ�巨��ѭ��������̬����
//	}
//	Print(HeadNode);
//}


////�ȴ���һ���ṹ��(β�巨)
//struct Node {
//	int data;
//	struct Node* next;
//};
//
////�������
//struct Node* CreatNode(int data) {
//	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
//	NewNode->data = data;
//	NewNode->next = NULL;
//	return NewNode;
//}
//
////������ͷ
//struct Node* CreatList() {
//	struct Node* HeadNode = (struct Node*)malloc(sizeof(struct Node));
//	HeadNode->next = NULL;
//	return HeadNode;
//}
//
//struct Node* InserNodeByLast(struct Node* OldNode, int data) {
//	struct Node* NewNode = CreatNode(data);
//	OldNode->next = NewNode;
//	NewNode->next = NULL;
//	return NewNode;
//}
//
////����Ĵ�ӡ
//void Print(struct Node* HeadNode) {
//	while (HeadNode->next) {
//		printf("%d ", HeadNode->next->data);
//		HeadNode = HeadNode->next;
//	}
//	printf("\n");
//}
////����һ����̬����(β��)
//int main() {
//	struct Node* HeadNode = CreatList();
//	int i = 0;//iΪѭ������
//	int l = 0;//lΪҪ���ɵ�������ĳ���
//	scanf("%d", &l);
//	printf("\n");
//	struct Node* OldNode = NULL;
//	OldNode = HeadNode;
//	for (i = 0; i < l; i++) {
//		int data = 0;
//		scanf("%d", &data);
//		OldNode = InserNodeByLast(OldNode, data);
//	}
//	Print(HeadNode);
//}

//#include <stdio.h>
//#include<stdlib.h>
// typedef struct {
//	 int arrive;
//	 int treat;//�ͻ�����Ϣ�ṹ
// }QNODE;
//
// typedef struct node {
//	 QNODE data;
//	 struct node *next;//�����е�Ԫ����Ϣ
// }LNODE, *LNODEPtr;
//
// LNODE *front, *rear;// ��ͷָ��Ͷ�βָ��
//
// //���
// void EnQueue(QNODE e)
// {
//	 LNODEPtr s = (LNODEPtr)malloc(sizeof(LNODE));
//	 if (!s) // �洢����ʧ��
//		 exit(0);
//	 s->data = e;
//	 s->next = NULL;
//	 rear->next = s;	// ��ӵ��Ԫ��e���½��s��ֵ��ԭ��β���ĺ��
//	 rear = s;		// �ѵ�ǰ��s����Ϊ��β��㣬rearָ��s
// }
//
//
//
// //����
// int DeQueue(QNODE *e)
// {
//	 LNODEPtr p;
//	 if (front == rear)
//		 return 0;
//	 *e = front->next->data; // ����ɾ���Ķ�ͷ����ֵ��ֵ��e
//	 p = front->next;				// ����ɾ���Ķ�ͷ����ݴ��p
//	 front->next = front->next->next;
//	 if (rear == p)		// ����ͷ���Ƕ�β����ɾ����rearָ��ͷ���
//		 rear = front;
//	 free(p);
//	 return 1;
// }
//
//
//
// int main()
// {
//	 int waitsum1 = 0, waitsum2 = 0;//һΪҵ��Ա�ȴ�ʱ�䡣��Ϊ�ͻ��ȴ�ʱ��
//	 int clock = 0;
//	 int nubk = 0;//���ڻ��ۿͻ�����
//	 int have = 0;//have�����ж��Ƿ���δ����Ŀͻ� ��0Ϊ���� 0Ϊ������
//
//	 QNODE temp, e;
//
//	 //����ն���
//	 front = rear = (LNODEPtr)malloc(sizeof(LNODE));
//	 front->next = NULL;//��ָֹ����ָ
//
//	 FILE *fp = fopen("C:\\test.txt", "r");//����һ��TXT�ļ������롮10 20 23 10 45 5 55 10 58 15 65 10����
//					/*"Ҫ�򿪵��ļ�·���Լ��ļ�����","r" */
//	 if (fp == NULL) {
//		 printf("�ļ���ʧ��");
//		 return 0;
//	 }
//
//	 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//
//	 do {
//		 if (have == 2 && front == rear)//�ȴ�����Ϊ�ղ��һ��пͻ�
//		 {
//			 waitsum1 += (temp.arrive - clock);//�ۼ�ҵ��Ա�ܵȴ�ʱ��
//			 clock = temp.arrive;// ʱ���ƽ����ݴ�����еĿͻ��ĵ���ʱ��
//
//			 //���
//			 EnQueue(temp);
//
//			 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//		 }
//
//		 nubk++;//���ۿͻ�����+1
//
//		 //����
//		 DeQueue(&e);
//
//		 waitsum2 += (clock - e.arrive);
//
//		 clock += e.treat;//ʱ���ƽ����ͻ�����ʱ��
//
//		 while (temp.arrive <= clock && have == 2) //����һ���ͻ���������֮ǰ�����е���Ŀͻ������
//		 {
//			 //���
//			 EnQueue(temp);
//			 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//		 }
//	 } while (have == 2 || front != rear);//����δ����Ŀͻ�
//	 printf("ҵ��Ա�ȴ�ʱ��Ϊ%d\n�ͻ�ƽ���ȴ�ʱ��Ϊ%f", waitsum1, (float)waitsum2 / (float)nubk);
//
//	 return 0;
// }

