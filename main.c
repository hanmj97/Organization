#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int n;
  
  srand((unsigned)time(NULL));
	int sr = rand() % 10 + 1;
  
  printf("Team project\n");
  printf("숫자를 입력해주세요.\n");
  do{
  scanf("%d", &n);
  printf("입력하신 숫자는 %d 입니다.", n);
  	if (1 > n || n > 10) {
		 printf("\n1~10단을 입력해주세요.\n");
	}
  } while (1 > n || n > 10);
		 
  for(int a=1 ; a < 10 ; a++){
    printf(" %d x %d = %d\n",n,a,n*a);
  }
  
  int c = n * sr;
	int an;
	printf("구구단 문제!\n %d X %d = ", n, sr);

	scanf("%d", &an);

	if (an == c) {
		printf("정답입니다\n");
	}
	else if (an != c) {
		printf("땡 정답은 %d 입니다.\n", c);
	}
  
  return 0;
}
