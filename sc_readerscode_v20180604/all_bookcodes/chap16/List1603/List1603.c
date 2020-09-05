#include <curl/curl.h>

int main(void)
{
  // 初期設定
  CURL* curl = curl_easy_init();
  curl_easy_setopt(curl, CURLOPT_URL, "https://book.impress.co.jp/");
  curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);

  // 実行
  curl_easy_perform(curl);

  // 終了処理
  curl_easy_cleanup(curl);

  return 0;
}
