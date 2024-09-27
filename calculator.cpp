#include <iostream>

int main() {
  std::cout << "電卓アプリケーション" << std::endl;

  double num1, num2, result;
  char op, keepRunning;

do {
  //ユーザー入力
std::cout << "最初の数値を入力してください：";
std::cin >> num1;

std::cout << "演算子を入力してください：";
std::cin >> op;

std::cout << "二つ目の数値を入力してください：";
std::cin >> num2;

if (op == '+')
  std::cout << "結果：" << num1 + num2 << std::endl;
else if (op == '-')
  std::cout << "結果：" << num1 - num2 << std::endl;
else if (op == '*')
  std::cout << "結果：" << num1 * num2 << std::endl;
else if (op == '/')
  if (num2 != 0)
    std::cout << "結果：" << num1 / num2 << std::endl;
  else
    std::cout << "エラー:0で割ることはできません" << std::endl;
else
  std::cout << "無効な演算子です" << std::endl;

  //ループ選択
  std::cout << "もう一度計算しますか（y/n）:";
  std::cin >> keepRunning;

} while (keepRunning == 'y');

  return 0;
}