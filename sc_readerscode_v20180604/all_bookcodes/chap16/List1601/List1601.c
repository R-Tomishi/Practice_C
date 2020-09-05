#include <sqlite3.h>
#include <stdlib.h>

int main(void)
{
  sqlite3* pDB = NULL;
  char* errMsg = NULL;

  // データベースを開く
  sqlite3_open("myBooks", &pDB);

  // SQLを実行(INSERT)
  sqlite3_exec(pDB,
      "INSERT INTO EMPLOYEES VALUES ('083003', 'Kusanagi')",
      NULL, NULL, &errMsg);

  // データベースを閉じる
  sqlite3_close(pDB);

  return 0;
}
