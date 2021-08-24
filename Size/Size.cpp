#include <stdio.h>

//int main()    // 메모리 크기 확인 sizeof()
//{
//	int x;
//	x = 5;
//	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
//	return 0;
//}

//int main()
//{
//	char x = 'A', y = 'B', z = 'A' - 'B';  // 아스키 코드 이용 연습
//	
//	printf("%d - %c = %d입니다.", x, y, z); 
//	return 0;
//}

//int main()			// 선 후 ++, -- 출력
//{
//	int x = 0;
//	printf("현재의 x는 %d 입니다.\n", x);
//	x++;
//	printf("현재의 x는 %d 입니다.\n", x); 
//	printf("현재의 x는 %d 입니다.\n", x--);
//	printf("현재의 x는 %d 입니다.\n", x);
//	//printf("현재의 x는 %d 입니다.", --x);
//	return 0;
//}

//int main()  // 연산의 개념
//{
//	int x = 100;
//	printf("현재의 x의 값은 %d입니다. \n", x);
//	x += 50; // x = x + 50 ;
//	printf("현재의 x의 값은 %d입니다. \n", x);
//	x -= 50; // x = x - 50 ; = 오른쪽 값을 왼쪽에 대입 
//	printf("현재의 x의 값은 %d입니다. \n", x);
//	x *= 50;
//	printf("현재의 x의 값은 %d입니다. \n", x);
//	x /= 50;
//	printf("현재의 x의 값은 %d입니다. \n", x);
//	x %= 3;
//	printf("현재의 x의 값은 %d입니다. \n", x); // %= 나누고 난 나머지 값
//	return 0;
//}

//int main()
//{
//	int x = 50, y = 30;
//	printf("x가 y와 같은가 ? %d\n", x == y);   // 0 = 거짓의 값
//	printf("x가 y와 다른가 ? %d\n", x != y);
//	printf("x가 y보다 큰가 ? %d\n", x > y);
//	printf("x가 y보다 작은가 ? %d\n", x < y);
//	printf("x에 y값을 넣으면 ? %d\n", x = y);
//	//if (1)
//	//{
//	//	// 실행되는 부분
//	//}
//	//else
//	//{
//
//	//}
//
//	return 0;
//}

//int main()
//{
//	int x = 50, y = 30;
//	printf("x가 y보다 크고 y는 40 미만입니까 ? %d\n", (x > y) && (y < 40)); //&& = and
//	printf("x가 y보다 작거나 혹은 y가 30입니까 ? %d\n", (x < y) || (y == 30)); // || = or
//	printf("x가 50이 아닙니까 ? %d\n", x != 50); // != = not
//	return 0;
//}

//int main()
//{
//	int x = -50, y = 30;
//	int absoulteX = (x > 0) ? x : -x; // absoulte 절대값 (x>0)이 참이면 x값 아니면 -x 값
//	int max = (x > y) ? x : y;
//	int min = (x < y) ? x : y;
//	printf("x의 절댓값은 %d입니다.\n", absoulteX);
//	printf("x 와 y 중에서 최댓값은 %d입니다. \n", max);
//	printf("x 와 y 중에서 최솟값은 %d입니다. \n", min);
//	return 0;
//}

//int main()
//{
//	int x = -150;
//	if (x < 0)
//	{
//		x = -x;
//	}
//	printf("x의 절댓값은 %d입니다.", x);
//	return 0;
//}

//int main()
//{
//	int score; // 학생의 점수
//	while (1)
//	{
//		printf("학점을 입력하시오 : ");
//		scanf("%d", &score);
//		if (score >= 90)
//		{
//			printf("학점이 %d라면 A입니다.\n",score);
//		}
//		else if (score >= 80)
//		{
//			printf("학점이 %d라면 B입니다.\n", score);
//		}
//		else if (score >= 70)
//		{
//			printf("학점이 %d라면 C입니다.\n", score);
//		}
//		else
//		{
//			printf("학점이 %d라면 F입니다.\n", score);
//		}
//		break;
//	}
//}

//int main()
//{
//	// 윤년 = 4년마다, 그렇지만 100년 다위일 떄는 윤년에 해당하지 않도록
//	// 윤년 = 400년 단위일 때는 어떤 상황이든간에 윤년으로 설정
//
//	int year = 2016;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("%d년은 윤년입니다. \n", year);
//	}
//	else
//	{
//		printf("%d년은 윤년이 아닙니다. \n", year);
//	}
//	return 0;
//}
//


//int main() //1 부터 1000까지의 합
//{
//	int i = 1, sum = 0;
//	while (i <= 1000)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("1부터 1000까지의 합은 %d입니다.", sum);
//	return 0;
//}

//int main() // 사각형 만들기
//{
//	int i, j;
//	int N = 10;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("★");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()  // 피라미드 만들기
//{
//	int i, j;
//	int n = 20;
//	for (i = 0; i < n; i++)
//	{
//		for (j = n - i - 1; j >0; j--)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("★");
//		}
//		for (j = 0; j < i - 1; j++)
//		{
//			printf("★");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//int main()   // 간단한 계산기
//{
//	char o;
//	int x, y;
//	while (1)
//	{
//		printf("수식을 입력하세요 : ");
//		scanf("%d %c %d", &x,&o,&y);
//		if (o == '+')
//		{
//			printf("%d %c %d = %d\n", x, o, y, x + y);
//		}
//		else if (o == '-')
//		{
//			printf("%d %c %d = %d\n", x, o, y, x - y);
//		}
//		else if (o == '*')
//		{
//			printf("%d %c %d = %d\n", x, o, y, x * y);
//		}
//		else if (o == '/')
//		{
//			printf("%d %c %d = %d\n", x, o, y, x / y);
//		}
//		else if (o == '%')
//		{
//			printf("%d %c %d = %d\n", x, o, y, x % y);
//		}
//		else 
//		{
//			printf( "입력오류\n" );
//		}
//		getchar();  // 엔터를 효율적으로 처리
//		printf("프로그램을 종료하시겠습니까?\n");
//		scanf("%c", &o);
//		if (o == 'n' || o == 'N')
//		{
//			continue;
//		}
//		else if (o == 'y' || o == 'Y')
//		{
//			break;
//		}
//	} 
//	return 0;


//int main()
//{
//	int number, x, i, sum = 0;
//	printf("정수의 개수를 입력하세요 :");
//	scanf("%d", &number);
//	for (i = 0; i < number; i++)
//	{
//		printf("정수의 값을 입력하세요 : ");
//		scanf("%d", &x);
//		sum += x;
//	}
//	printf("전체 정수의 값은 %d 입니다. \n", sum);
//	return 0;
//}
//

//int main()
//{
//	int x, i;
//	printf("몇단 ? ");
//	scanf("%d", &x);
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", x, i, x * i);
//	}
//	return 0;
//
//}
//
//int main()  // 무한 20단
//{
//	int x, i;
//	while (1)
//	{
//		printf("몇 단을 검색하시겠습니까 ? ");
//		scanf("%d", &x);
//		for (i = 1; i <= 20; i++)
//		{
//			printf(" %2d  x  %2d =  %6d\n", x, i, x * i);
//		}
//		if (x == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}














































