#include <gtk/gtk.h>

void hello(void)
{
  g_print("Hello World\n");
}

void destroy(void)
{
  // ウィンドウを破棄するにはメインループを終了する
  gtk_main_quit();
}

int main(int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *button;

  // GTK+の初期化
  gtk_init(&argc, &argv);

  // ウィンドウの作成
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  // ウィンドウの初期設定
  gtk_window_set_title(GTK_WINDOW(window), "Hello World");
  gtk_widget_set_size_request(window, 200, 100);

  // ボタンの作成
  button = gtk_button_new_with_label("Hello World");

  // ウィンドウ操作に関する設定
  // (1)ウィンドウを閉じたらウィンドウを破棄
  gtk_signal_connect(GTK_OBJECT(window), "destroy", GTK_SIGNAL_FUNC(destroy), NULL);
  // (2)ボタンを押したら「Hello World」を表示して終了
  gtk_signal_connect(GTK_OBJECT(button), "clicked", GTK_SIGNAL_FUNC(hello), NULL);
  gtk_signal_connect_object(GTK_OBJECT(button), "clicked", GTK_SIGNAL_FUNC(gtk_widget_destroy), GTK_OBJECT(window));

  // ウィンドウにボタンを追加
  gtk_container_add(GTK_CONTAINER(window), button);

  // ウィンドウを表示
  gtk_widget_show(button);
  gtk_widget_show(window);

  // メインループを開始
  gtk_main();

  return 0;
}
