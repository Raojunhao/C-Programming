#define _CRT_SECURE_NO_WARNINGS 1;//使得scanf不报错
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
//	printf("计算结果=%d\n", sum);
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
//判断输入的三个数是否相等。算法如下，请改正程序中的错误，使它能得出正确的结果。
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
//int main()//日期显示
//{
//	int y, m, d;
//	printf("Enter a date(year month day):\n");
//	scanf("%d%d%d", &y, &m, &d);
//	printf("You entered the date: %02d/%02d/%d", m, d, y);
//	return 0;
//}
//
//求圆的面积
//int main()
//{
//	float r,s;
//	printf("请输入半径：");
//	scanf("%f", &r);
//	s = 2 * 3.14*r;
//	printf("圆的面积为：%f",s);
//
//	return 0;
//}
//
//
//int main()//输入被除数和除数，求商
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
//int main()//将小写字母转为大写字母
//{
//	char ch;
//	printf("请输入一个小写字母：");
//	ch = getchar();
//	ch = ch - 32;
//	printf("程序的结果为：");
//	putchar(ch);
//	putchar('\n');
//	printf("\n");//这也是换行的一种选择
//	return 0;
//}
//
//if else 语句
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
//			printf("%d 这个数是奇数//", i);
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
//int main()//三角形
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
//	printf("请输入半径的值：");
//	scanf("%f", &r);
//	s = pi * r*r;
//	c = 2 * pi*r;
//	printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n", r, s, c);
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
//int main()//转换大小写字母(大转小)
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
//求圆的面积和周长
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
//int main()//四位数逆输出
//{
//	int a,b,c,d,Z;
//	scanf("%d", &Z);
//	a = Z / 1000;//千位
//	b = (Z - a * 1000)/100;//百位
//	c = (Z - a * 1000 - b * 100) / 10;//十位
//	d = (Z - a * 1000 - b * 100 - c * 10);//个位
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
//int main()//转换大小写字母(大转小)
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
//int main()//三位数各个位数之和
//{
//	int A;
//	printf("请输入一个三位整数：");
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
//int main()//格式化输入
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
//int main()//求利润
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
//int main()//逆序输出（未完成）
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
//	printf("\n请输入两个数:\n");
//	scanf("%f%f", &a, &b);
//	sum = a + b;
//	minus = a - b;
//	product = a * b;
//	quotient = a / b;
//	remainder = (int)a %(int) b;
//	printf("和为:%.2f\n", sum);
//	printf("差为:%.2f\n", minus);
//	printf("积为:%.2f\n", product);
//	printf("商为:%.2f\n", quotient);
//	printf("余数为:%d\n", remainder);
//}
//
//
//#include<math.h>//三位数各个位数之和(简化版)
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
//int main()//温度转换
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
//	printf("请输入6位密码 ");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)");
//	int p;
//	while ((p = getchar()) != '\n')
//	{
//		;//空语句
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//
//	}
//	return 0;
//}
//
//int main()//if-else语句计算器
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
//int main()//switch语句计算器
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
//#include<stdio.h>//预测孩子身高(if-else)
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
//	scanf(" %c", &sports);//这里%c前面加了一个空格，跟在上一句加getchar()作用相同
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
//int main()//预测孩子身高（switch)
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
//int main()//计算n的阶乘
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
//int main()//计算1！+2！+...+n!
//{
//	int i = 0;
//	int n ;
//	int sum=0;
//	int tmp=1;
//	printf("请输入n-> ");
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
//		Sleep(500);//睡眠
//		system("cls");//清空屏幕
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
//		printf("请输入密码\n");
//		scanf("%s", pw);//数组不需要取地址
//		//两个字符串比较，不能用==
//		if (strcmp(pw, "123456") == 0)/*自左向右逐个按照ASCII码值进行比较，直到出现不同的字符或遇’\0’(空字符)为止。
//			                            如果返回值 < 0，则表示 s1 小于 s2。
//			                            如果返回值 > 0，则表示 s1 大于 s2。
//			                            如果返回值 = 0，则表示 s1 等于 s2。*/
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		if (i == 3)
//		{
//			printf("输入三次密码错误，退出程序");
//		}
//
//	}
//	
//	return 0;
//}
//
//#include <stdlib.h>//猜数字游戏
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
//void game()//void不用返回任何值
//{
//		int ret = rand()%100+1;//%100余数是0-99
//		int guess = 0;
//		while (1)
//		{
//			printf("\n请猜数字");
//			scanf("%d", &guess);
//			if (guess < ret)
//			{
//				printf("猜小了");
//			}
//			else if (guess > ret)
//			{
//				printf("猜大了");
//			}
//			else
//			{
//				printf("猜对了！恭喜你！");
//				break;
//			}
//		}
//}
//int main()
//{
//	srand((unsigned int)/*强制转换类型*/time(NULL));//0~32767
//	int input = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("\n请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入未知指令，请重新输入\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}
//
//int get_max (int x,int y)//取两个数中最大值
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

//void swap(int *pa, int *pb)//地址起到了桥的作用
//{
//	int x = 0;
//	x = *pa;
//	*pa = *pb;
//	*pb = x;
//}
//int main()//交换输入的两个数字
//{
//	int a = 5;
//	int b = 10;
//	printf("%d,%d\n", a, b);//交换前
//	swap(&a, &b);
//	printf("%d,%d", a, b);//交换后
//	return 0;
//}
//
//
//int is_prime(int x)//判断一个数是否为素数
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
//	printf("请输入一个数");
//	while (1)
//	{
//		scanf("%d", &x);
//		is_prime(x);
//		if (is_prime(x) == 0)
//		{
//			printf("bu是素数\n");
//		}
//		if (is_prime(x) == 1)
//		{
//			printf("是素数\n");
//		}
//
//	}
//	return 0;
//}
//
//
//
//int is_prime(int x)//判断一个数是否为素数
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
//				printf("%d是素数\n", x);
//			}
//			else
//			{
//				printf("%d不是素数\n", x);
//			}
//	}
//
//	return 0;
//}
//
//
//int main()//判断是否是闰年
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
//int main()//判断二维空间中的点，是否在圆内
//{
//	float a, b, r, x, y,s;
//	printf("请输入圆的圆心坐标：");
//	scanf("%f,%f", &a, &b);
//	printf("请输入圆的半径：");
//	scanf("%f", &r);
//	printf("请输入要判断的点的坐标(x,y)：");
//	scanf("%f,%f", &x, &y);
//	s = sqrt(pow(a - x, 2) + pow(b - y,2));
//	if (s < r)
//	{
//		printf("该点在圆内\n");
//	}
//	else if (s = r)
//	{
//		printf("该点在圆上\n");
//	}
//	else
//	{
//		printf("该点不在圆内\n");
//	}
//
//	return 0;
//}
//
//int main()//根据用户输入的数字显示相应的星期几
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
//int main()//编写一个程序完成输入一个整数，输出它的符号。
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
//int main()//计算并输出1到20的平方，当结果大于100时停止
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
//int main()//输入一些整数，编程计算并输出其中所有正数的和，输入负数时不累加，继续输入下一个数。输入零时，表示输入数据结束。要求最后统计出累加的项数。
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
//int main()//计算并输出该用户应支付的电费
//{
//	double m,d;
//	printf("请输入月用电量：\n");
//	scanf("%lf", &d);
//	if (d <= 50)
//	{
//		m = 0.53*d;
//	}
//	else
//	{
//		m = 0.58*d;
//	}
//	printf("应支付电费=%.2f\n", m);
//	return 0;
//}
//
//int main()//计算小明的母亲在几年后比小明的年龄大一倍，那时他们两人的年龄各是多少？
//{
//	int a = 12;
//	int b = 36;
//	int y = 0;
//	for (y=1;;y++)
//	{
//		a++;
//		b++;
//		if (b == 2 * a)//为什么 b/2==a 或者 b/a==2 不行?
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
//int main()//求1+1/2+1/3+...+1/100的值
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
//int main()//求number（键盘输入）的约数中最大的三位数是多少？
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
//int main()//显示法定格式的日期
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
//int main()//编程计算1×2×3+3×4×5+…+99×100×101的值
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
//int main()//编写一个程序，输入年份和月份，判断该年是否是闰年，并根据给出的月份判断是什么季节和该月有多少天
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
//int search(int arr[], int key, int s)//数组里二分查找
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
//		printf("yes,数组里第%d个数字就是你要找的", rt+1);
//	}
//
//
//
//	return 0;
//}
//
//
//int main()//方程的根
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
//int main()//求1到100以内能被3整除但不能被7整除的数之和
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
//int main()//编写程序求出用数字0至9可以组成多少个各位上没有重复数字的三位偶数
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
//int main()//猴子吃桃问题
//{
//	int s=1, i;
//	for (i = 1; i <=9; i++)
//	{
//		s = (s + 1) * 2;
//	}
//	printf("桃子总数=%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[6] = 7;//此处的[]是下表引用操作符
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//打印数组里的每个数字
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()//二维数组(注意下标)
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };//行能省略，列不能
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
//	for(k=0;k<sz-1;k++)//一趟冒泡排序的过程
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - k; j++)//每趟交换的次数
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//交换
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,5,6,4,3,2,1,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);//确定冒泡排序的趟数，不能在void里面写
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//计算pi近似值
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

//int main()//中国古典算术问题）某工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬一块。问用45人正好搬45块砖，男人、女人、小孩各多少人？
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

//int main()//任意输入一个整数m，若m不是素数，则输出其所有不包括1和自身的因子；否则输出“没有因子，是素数”的相关提示信息
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
//void print(int n)//分别打印出数字的每一位
//{
//	if (n > 9)
//	{
//		print(n / 10);
//     }
//	printf("%d ",n % 10);
//}
////递归要有限制条件，且每次递归调用后要越来越接近限制条件
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//递归，函数自己调用自己
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
//int main() /*有5个人围坐在一起，问第5个人多大年纪，他说比第4个人大2岁；问第4个人，他说比第3个人大2岁；
//问第3个人，他说比第2个人大2岁；问第2个人，他说比第1个人大2岁。第1个人说自己10岁，请利用递归法编程计算并输出第5个人的年龄*/
//{
//	int n;
//	n=count(5);
//	printf("The 5th person's age is %d\n",n);
//
//	return 0;
//}

//int main()//一球从100米高度自由落下
//{
//	float h=100,sum=100,i;
//	for (i = 2; i <= 10; i++)
//	{
//		h = h / 2;
//		sum = sum + h;
//	}
//	printf("第10次落地时共经过%f米。\n", sum);
//	printf("第10次反弹%f米。\n",h/2);
//
//
//	return 0;
//}

//int main()//已知xyz+yzz=532，其中x，y，z都是数字（0-9），编写一个程序求出x，y，z分别代表什么数字
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

//int main()//编程打印以下图案。(用循环实现！！)
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

//int main()//百鸡问题：公鸡每只5元，母鸡每只3元，小鸡3只1元。用100元买100只鸡，问公鸡、母鸡和小鸡各能买多少只？
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
//int main()//函数递归求n的阶乘
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
//int main()//采用递归方法计算x的n次方
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
//int main()//汉诺塔问题
//{
//	int n;
//	printf("Input the number of disks:");
//	scanf("%d", &n);
//	printf("Steps of moving %d disks from A to B by means of C:\n", n);
//	Hanoi(n, 'A', 'B', 'C'); /*调用递归函数Hanoi()将n个圆盘借助于C由A移动到B*/
//	return 0;
//}
///* 函数功能：用递归方法将n个圆盘借助于柱子c从源柱子a移动到目标柱子b上 */
//void Hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		Move(n, a, b);	     /* 将第n个圆盘由a移到b */
//	}
//	else
//	{
//		Hanoi(n - 1, a, c, b); /* 递归调用Hanoi()，将第n-1个圆盘借助于b由a移动到c*/
//		Move(n, a, b); 	     /* 第n个圆盘由a移到b */
//		Hanoi(n - 1, c, b, a); /*递归调用Hanoi()，将第n-1个圆盘借助于a由c移动到b*/
//	}
//}
///* 函数功能：  将第n个圆盘从源柱子a移到目标柱子b上 */
//void Move(int n, char a, char b)
//{
//	printf("Move %d: from %c to %c\n", n, a, b);
//}
//int count = 0;
//int Fib(int n)//用递归方法编程计算Fibonacci数列的前N项
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
//int main()用递归法将一个整数n转换成字符串   
//{
//	int n;
//	printf("\n输入整数：");
//	scanf("%d", &n);
//	printf("\n输出是："); 
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
//void func(int n)//输入一个正整数，要求以相反的顺序输出该数。用递归方法实现
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

//double func(double x, int n)//请用递归的方法计算下列函数的值：px(x,n)=x-x^2+x^3-x^4+…((-1)^n-1)(x^n)  n>0
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

//int main()//输入某班学生某门课的成绩（最多不超过40人，具体人数由用户键盘输入），用函数编程统计不及格人数
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
//int main()//从键盘输入某班学生某门课的成绩,已知每班人数最多不超过40人，试编程计算其平均分（使用函数）,最高最低分
//{
//	int  n;
//	int  arr[40];
//	printf("Input n:");
//	scanf("%d", &n);
//	printf("Input score:\n");
//	printf("Average score is %d\n",cal(arr,n));
//	printf("最低分是：%d",findmin(arr,n) );
//	printf("最高分是：%d",findmax(arr,n) );
//}

//int main()//编程实现两个数组中对应该元素值的交换(未改进版本）
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
//int main()//某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的
//{
//	int a, b, c, d;
//	int num;
//	printf("Input a 4 digits number\n");
//	scanf("%d", &num);
//	a = num / 1000;//千位
//	b = (num - a * 1000)/100;//百位
//	c = (num - a * 1000 - b * 100) / 10;//十位
//	d = (num - a * 1000 - b * 100 - c * 10);//个位
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
//	int max, min;//必须设置这两个变量
//	max = FindMax(num, 10, &pMaxPos);//直接放printf里面行不通
//	min = FindMin(num, 10, &pMinPos);
//	printf("Max=%d,Position=%d,Min=%d,Position=%d\n", max,pMaxPos,min,pMinPos);
//
//	return 0;
//}


//int main()//从键盘输入一个英文字母，如果它是大写英文字母，则将其转换为小写英文字母，如果它是小写英文字母，则将其转换为大写英文字母，
//                  然后将它及其ASCII码值显示到屏幕上，如果不是英文字母，则不转换直接输出到屏幕上
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

//void search(int arr[], int n, int x)//查找数据
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			printf("想要寻找的数字在数组中的第%d个\n", i + 1);
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


//void insert(int arr[], int num/*插入的数字*/, int pla, int i/*数组元素的个数*/)
//{
//	int n;
//	for (n = i - 1; n >= pla - 1; n--)//从最后一个元素开始，到arr[n],全部元素往后移
//	{
//		arr[n +1] = arr[n];
//	}
//	arr[pla - 1] = num;
//	
//}
//int main()//替换某个数字到一个数组里****
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("你想替换什么个数字到arr数组里的第几位？\n");
//	int num, pla;
//	printf("请输入数字");
//	scanf("%d", &num);
//	printf("请输入要替换数字的位置");
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

//int main()//删除数组中的指定元素
//{
//	int arr[5];
//	int i,j,x;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &j);
//	}
//	printf("输入你想删除的元素");
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
//int my_strlen (const char* str)//不用const行不通
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


//int main()//矩阵转换
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
//int main()//杨辉三角
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


//int main()//定义1个3 * 2的二维数组a，数组元素的值由下式给出，按矩阵的形式输出a
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

// 判断素数，若是返回1，否则返回0 
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
//int main()//哥德巴赫猜想
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




//int main()//找到数组中的最大值
//{
//	int arr[3][4];
//	int i, j,max=0;
//	printf("请输入3*4矩阵：\n");
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

//int main()//任意输入英文的星期几，通过查找星期表，输出其对应的数字，若查到表尾，仍未找到，则输出错误提示信息。
//{
//	int i, count = 0;
//	const char* Weekday[8] = { 0,"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday" };
//	char day_name[30];
//	printf("Please enter a string:\n");
//	scanf("%s", day_name);
//	for (i = 1; i < 8; i++)
//	{
//		if (!(strcmp(day_name, Weekday[i])))     //strcmp为字符串比较函数，传递两个数组名（地址）过去比较
//		{
//			count = i;
//			break;
//		}
//	}
//	if (i == count)           //验证是否找到了输入的该星期名
//		printf("%s is %d\n", day_name, count);
//	else
//		printf("Not found!\n");
//}




//int main()//有如下3*4的矩阵，求出其中值最大的元素的值
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

//int main()//编写一个程序，输入年份和月份，判断该年是否是闰年，并根据给出的月份判断是什么季节和该月有多少天(二维数组)
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
//	if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))//闰年
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

//编写程序计算两个矩阵的乘积，请将以下代码复制到codeblocks中，将multiply函数补充完整，程序运行正确后将所有代码（包括题目中给出的代码）复制到答题区内运行并提交。

//#include <stdio.h>
//#define M 3
//#define S 4
//#define N 2
//
//void multiply(int A[M][S], int B[S][N], int C[M][N])
//{
//	
//	int i, j, k;
//	for (i = 0; i < M; i++) //用于控制C和A的行标
//	{
//		for (j = 0; j < N; j++) //用于控制C和B的列标
//		{
//			for (k = 0; k < S; k++)  //用于控制A的列标和B的行标
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
//	int A[M][S], B[S][N],  C[M][N] = { 0 };//如果C不初始化会有错误
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

//判断是否是回文
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

//给定如下的数组：
//float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
//float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
//int mpl[5];  /* Miles per litre. */
//写一个程序计算并显示mpl中每个元素的值。使用指针而不是下标访问数组元素。
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

//有如下3*4的矩阵，求出其中对角线值最大的元素的值
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

//改错题：用户从键盘任意输入一个数字表示月份值n，程序显示该月份对应的英文表示，若n不在1～12之间，则输出“Illegal month”。
//注意：
//（1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
//（2）对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
//（3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。

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
//		for (j = 0, max = 0, p = 0; j < 6; j++) {         //判断出该行元素的最大值
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				p = j;
//			}
//			else {
//				max = max;
//				p = p;
//			}
//		}
//		for (k = 0, min = arr[i][p], q = i; k < 2; k++) {   //判断最大值在该列是否为最小值
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
//			printf("%d is the saddle point!\n", arr[p][q]);  //如果该最大值行号没有改变，输出鞍点
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

//定义函数strcpym将字符串s1中从第m个字符开始剩余的所有字符，存入字符数组s2中。(要求：不能使用库函数strcpy)
//**输入格式要求："%d" 提示信息："input a string:\n" "input start point:\n"
//**输出格式要求：puts(s2)
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


//计算字符串中各种类型的数据
//#define ARR_SIZE 80
//
//int main()
//{
//	char str[ARR_SIZE];
//	int  len, i;
//	int  letter = 0, digit = 0, space = 0, other = 0;
//
//	printf("请输入一个字符串:");
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
//	printf("英文字符数:%d\n", letter);
//	printf("数字字符数:%d\n", digit);
//	printf("空格数:%d\n", space);
//	printf("其他字符数:%d\n", other);
//}

//编程判断输入的一个字符串是否是“回文”。所谓“回文”字符串就是左读和右读都一样的字符串。例如: "abcba"就是一个回文字符串。
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


//从键盘输入一个字符串a，将字符串a复制到字符串b中，再输出字符串b，
//即编程实现字符串处理函数strcpy()的功能，但要求不能使用字符串处理函数strcpy()。
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
//	gets_s(a);//考试时要用gets，不然会报错
//	mstrcpy(a, b);
//	printf("The copy is:");
//	puts(b);
//
//	return 0;
//}

//利用一个字符数组作函数参数,实现字符串（最大长度为80个字符 ）的逆序存放。
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

//用字符指针作函数参数编程实现在字符串每个字符间插入一个空格的功能。
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

//用字符指针作函数参数编程实现字符串逆序存放功能。
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



//按如下函数原型编写程序，用字符数组作函数参数编程实现字符串逆序存放功能。
//void Inverse(char str[], char ptr[]);
//输入提示信息："Input a string:"
//输入字符串用gets()
//输出提示信息："Inversed results:%s\n"
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

//不使用字符串处理函数strcat()编程实现strcat()的功能，即任意输入两个字符串，然后连接这两个字符串，返回连接后字符串的首地址。
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

//不使用字符串处理函数strcat()编程实现strcat()的功能，即任意输入两个字符串，然后连接这两个字符串，返回连接后字符串的首地址。
//#define N 80
//char *MyStrcat(char *dstStr, char *srcStr);
//int main()
//{
//	char first[2 * N]; /* 这个数组应该足够大，以便存放连接后的字符串 */
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
///* 函数功能：连接两个字符串 */
//char *MyStrcat(char *dstStr, char *srcStr)
//{
//	char *pStr = dstStr;   /* 保存字符串首地址指针 */
//	/* 将指针移到字符串末尾 */
//	while (*dstStr != '\0')
//	{
//		dstStr++;
//	}
//	/* 将字符串2内容复制到字符串1的后面 */
//	for (; *srcStr != '\0'; dstStr++, srcStr++)
//	{
//		*dstStr = *srcStr;
//	}
//	*dstStr = '\0';      /* 在连接后的字符串的末尾添加字符串结束标志 */
//	return pStr;          /* 返回连接后的字符串的指针 */
//}

//用字符指针作函数参数编程实现如下功能：在字符串中删除与某字符相同的字符。
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

//用字符指针编程实现两个字符串的拷贝。注：不允许使用字符串拷贝函数！
//请使用以下函数编程实现。
//void  MyStrcpy(char *dstStr, char *srcStr)
//
//***输入提示："Please enter a string:\n"
//***输入格式要求：无格式要求
//***输出格式要求："The copy is:%s"
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

//按如下函数原型编程实现字符串连接函数strcat()的功能。
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




//按如下函数原型编程从键盘输入一个m行n列的二维数组，然后计算数组中元素的最大值及其所在的行列下标值。其中，m和n的值由用户键盘输入。已知m和n的值都不超过10。
//void InputArray(int *p, int m, int n);
//int  FindMax(int *p, int m, int n, int *pRow, int *pCol);
//输入提示信息：
//"Input m, n:"
//"Input %d*%d array:\n"
//输入格式："%d,%d"
//输出提示信息和格式："max = %d, row = %d, col = %d\n"

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
///* 函数功能：输入m*n矩阵的值 */
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
///* 函数功能：在m*n矩阵中查找最大值及其所在的行列号 */
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
//				*pRow = i;              /*记录行下标*/
//				*pCol = j;              /*记录列下标*/
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



//用二维数组的列指针作为函数实参，实现矩阵转置。按如下函数原型编程计算并输出m×n阶矩阵的转置矩阵。其中，m和n的值由用户从键盘输入。已知m和n的值都不超过10。
//void Transpose(int *a, int *at, int m, int n);
//void InputMatrix(int *a, int m, int n);
//void PrintMatrix(int *at, int n, int m);
//#include <stdio.h>
//#define M 10
//#define N 10
///* 函数功能：计算m*n矩阵a的转置矩阵at */
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
///* 函数功能：输入m*n矩阵a的值 */
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
///* 函数功能：输出n*m矩阵at的值 */
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


//用指针编程实现3X4的二维数组的元素读入以及求此二维数组的最大值及最大值下标
//请用以下函数实现：
//void Input(int(*p)[4], int m, int n); /*数组元素读入函数*/
//int FindMax(int(*p)[4], int m, int n, int *pRow, int *pCol); /*求最大值及下标函数*/
//
//***输入提示信息："Please input your data:\n"
//***输入格式要求：无格式要求
//***输出格式要求："The maximum is %d, which is in row %d, colum %d\n"

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
//		printf("输入第%d个学生的信息：学号、姓名、成绩\n",t);
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
//			}//排序处理
//		}
//	}
//	printf("排序后学生的信息为:\n");
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
//	stu stu1[5];//多一个位置用以排序
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		printf("输入第%d个学生的信息：学号、姓名、成绩\n", i);
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
//			}//排序处理
//		}
//	}
//	printf("排序后学生的信息为:\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %s %d\n", stu1[i].id, stu1[i].name, stu1[i].point);
//	}
//
//	return 0;
//}

//*************************************************************************************
//定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天？注意闰年问题。
//输出格式要求："\n%d月%d日是%d年的第%d天。"
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	//定义日期数组，用于算每个月的天数，2月份的天数为平年天数，闰年的2月份是29
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	struct date d;//定义结构体变量D，用于接收用户输入的年月日。
//	printf("请输入日期（年，月，日）");
//	scanf("%d,%d,%d", &d.year, &d.month, &d.day);
//	int dday = 0;
//	for (int i = 1; i < d.month; i++)//逐个月份的天数相加，从1月到当前月份-1
//	{
//		dday += days[i];
//	}
//	dday += d.day;//统计完月份，加上当月的天数
//	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))//判断是否为闰年的条件。
//	{
//		if (d.month > 2)//如果该年份是闰年，并且月份大于2月的时候，我们需要把天数加1，因为闰年2月份的天数比平年2月份的天数多一天。
//			dday = dday + 1;
//	}
//	printf("\n%d月%d日是%d年的第%d天。", d.month, d.day, d.year, dday);
//	return 0;
//}
//************************************************************************************************
//编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。
//选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。
//求用结构体数组candidate表示3个候选人的姓名和得票结果。
//输入提示："Input vote %d:"
//输入用gets();;
//输出提示："Election results:\n"
//输出格式为："%8s:%d\n"，"Wrong election:%d\n"

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
//		/* 将name中的字符全部变成小写字母 */
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
//			wrong++;  /* 废票计数 */
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
//13个人围成一圈，从第1个人开始顺序报号1、2、3，凡报到3的人退出圈子。找出最后留在圈子里的人原来的序号。要求用结构体编程实现。
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
//	/* 建立队列 */
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
//	printf("出圈成员及顺序：");
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
//	printf("\n最后的成员是：");
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
//给定如下定义：
//struct time_rec
//{
//	int hours;
//	int mins;
//	int secs;
//};
//struct time_rec current_time;
//写一个程序包含如下的函数，完成：
//(a) 输入current_time的值：
//void input_time(struct time_rec *current_time)
//(b)将current_time增加1秒：
//void increment_time(struct time_rec *current_time)
//(c)显示current_time的新值。
//void output_time(struct time_rec *current_time)

//**输入格式要求："%d%d%d" 提示信息："请输入当前时间（时 分 秒）："
//**输出格式要求："当前时间：%d时%d分%d秒！"

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
//	printf("请输入当前时间（时 分 秒）：");
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
//	printf("当前时间：%d时%d分%d秒！", current_time->hours, current_time->mins, current_time->secs);
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


////创建链表
//
////先创建一个结构体
//struct Node {
//	int data;
//	struct Node* next;
//};
////创建表头
//struct Node* CreatList() {
//	struct Node* HeadNode = (struct Node*)malloc(sizeof(struct Node));
//	HeadNode->data = 1;
//	HeadNode->next = NULL;
//	return HeadNode;
//}
////创建结点
//struct Node* CreatNode(int data) {
//	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
//	NewNode->data = data;
//	NewNode->next = NULL;
//	return NewNode;
//}
////链表的头插法
//void InserNodeByHead(struct Node* HeadNode, int data) {
//	struct Node* NewNode = CreatNode(data);
//	NewNode->next = HeadNode->next;
//	HeadNode->next = NewNode;
//}
//
////链表的打印
//void Print(struct Node* HeadNode) {
//	while (HeadNode->next) {
//		printf("%d ", HeadNode->next->data);
//		HeadNode = HeadNode->next;
//	}
//	printf("\n");
//}
////创建一个动态链表
//int main() {
//	struct Node* HeadNode = CreatList();
//	int i = 0;//i为循环变量
//	int l = 0;//l为要生成的新链表的长度
//	scanf("%d", &l);
//	for (i = 0; i < l; i++) {
//		int data = 0;
//		scanf("%d", &data);
//		InserNodeByHead(HeadNode, data);//利用头插法的循环创建动态链表
//	}
//	Print(HeadNode);
//}


////先创建一个结构体(尾插法)
//struct Node {
//	int data;
//	struct Node* next;
//};
//
////创建结点
//struct Node* CreatNode(int data) {
//	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
//	NewNode->data = data;
//	NewNode->next = NULL;
//	return NewNode;
//}
//
////创建表头
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
////链表的打印
//void Print(struct Node* HeadNode) {
//	while (HeadNode->next) {
//		printf("%d ", HeadNode->next->data);
//		HeadNode = HeadNode->next;
//	}
//	printf("\n");
//}
////创建一个动态链表(尾插)
//int main() {
//	struct Node* HeadNode = CreatList();
//	int i = 0;//i为循环变量
//	int l = 0;//l为要生成的新链表的长度
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
//	 int treat;//客户的信息结构
// }QNODE;
//
// typedef struct node {
//	 QNODE data;
//	 struct node *next;//队列中的元素信息
// }LNODE, *LNODEPtr;
//
// LNODE *front, *rear;// 队头指针和队尾指针
//
// //入队
// void EnQueue(QNODE e)
// {
//	 LNODEPtr s = (LNODEPtr)malloc(sizeof(LNODE));
//	 if (!s) // 存储分配失败
//		 exit(0);
//	 s->data = e;
//	 s->next = NULL;
//	 rear->next = s;	// 把拥有元素e的新结点s赋值给原队尾结点的后继
//	 rear = s;		// 把当前的s设置为队尾结点，rear指向s
// }
//
//
//
// //出队
// int DeQueue(QNODE *e)
// {
//	 LNODEPtr p;
//	 if (front == rear)
//		 return 0;
//	 *e = front->next->data; // 将欲删除的队头结点的值赋值给e
//	 p = front->next;				// 将欲删除的队头结点暂存给p
//	 front->next = front->next->next;
//	 if (rear == p)		// 若队头就是队尾，则删除后将rear指向头结点
//		 rear = front;
//	 free(p);
//	 return 1;
// }
//
//
//
// int main()
// {
//	 int waitsum1 = 0, waitsum2 = 0;//一为业务员等待时间。二为客户等待时间
//	 int clock = 0;
//	 int nubk = 0;//用于积累客户人数
//	 int have = 0;//have用于判断是否有未处理的客户 非0为存在 0为不存在
//
//	 QNODE temp, e;
//
//	 //建造空队列
//	 front = rear = (LNODEPtr)malloc(sizeof(LNODE));
//	 front->next = NULL;//防止指针乱指
//
//	 FILE *fp = fopen("C:\\test.txt", "r");//创建一个TXT文件并打入‘10 20 23 10 45 5 55 10 58 15 65 10’。
//					/*"要打开的文件路径以及文件命名","r" */
//	 if (fp == NULL) {
//		 printf("文件打开失败");
//		 return 0;
//	 }
//
//	 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//
//	 do {
//		 if (have == 2 && front == rear)//等待队列为空并且还有客户
//		 {
//			 waitsum1 += (temp.arrive - clock);//累计业务员总等待时间
//			 clock = temp.arrive;// 时钟推进到暂存变量中的客户的到达时间
//
//			 //入队
//			 EnQueue(temp);
//
//			 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//		 }
//
//		 nubk++;//积累客户人数+1
//
//		 //出队
//		 DeQueue(&e);
//
//		 waitsum2 += (clock - e.arrive);
//
//		 clock += e.treat;//时间推进到客户结束时间
//
//		 while (temp.arrive <= clock && have == 2) //在上一个客户结束结束之前，若有到达的客户就入队
//		 {
//			 //入队
//			 EnQueue(temp);
//			 have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
//		 }
//	 } while (have == 2 || front != rear);//还有未处理的客户
//	 printf("业务员等待时间为%d\n客户平均等待时间为%f", waitsum1, (float)waitsum2 / (float)nubk);
//
//	 return 0;
// }

