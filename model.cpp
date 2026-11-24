#include <iostream>
#include <string>

// Practice 13 · Part 2 — Bavly
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  // TODO: print every field on one line, then "\n"
  std::cout << a.name << " " << a.balance << "\n";
}

int main() {
  // TODO: make two records with braces, then print both with your helper
  Account ada = {"Ada", 50.25};
  Account ben = {"Ben", 120.5};
  printAccount(ada);
  printAccount(ben);
  return 0;
}