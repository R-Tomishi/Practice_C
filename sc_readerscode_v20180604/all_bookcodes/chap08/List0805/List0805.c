#include <stdio.h>

typedef char String[1024];

void hello(String name)
{
  printf("%sさん、こんにちは\n", name);
}

int main(void)
{
  printf("関数を呼び出します\n");
  hello("岬");       /* 引数"岬"を渡しながら関数を呼び出す */
  hello("赤城");     /* 引数"赤城"を渡しながら関数を呼び出す */
  hello("海藤");     /* 引数"海藤"を渡しながら関数を呼び出す */
  printf("関数の呼び出しが終わりました\n");

  return 0;
}
