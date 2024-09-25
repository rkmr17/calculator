#include <iostream>

int main() {
  std::cout << "電卓アプリケーション" << std::endl;

  double num1, num2, result;
  char op;

//ユーザー入力
std::cout << "最初の数値を入力してください：";
std::cin >> num1;

std::cout << "演算子を入力してください：";
std::cin >> op;

std::cout << "二つ目の数値を入力してください：";
std::cin >> num2;

std::cout << num1;
std::cout << op;
std::cout << num2;

  return 0;
}