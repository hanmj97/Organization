#include<stdio.h>

int main()
{
  int n;
  
  printf("Team project\n");
  printf("숫자를 입력해주세요.\n");
  scanf("%d", &n);
  printf("입력하신 숫자는 %d 입니다.", n);
  
  for(int a=1 ; a < 10 ; a++){
    printf(" %d x %d = %d\n",n,a,n*a);
  }
  
  return 0;
}
