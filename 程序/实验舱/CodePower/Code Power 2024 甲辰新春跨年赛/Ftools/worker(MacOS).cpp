#ifdef TY
#include "/Users/ty/Desktop/code/ty.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;
char cmd[66];
int main()
{
  for (int i = 3; i <= 10; i++)
  {
    do
    {
      snprintf(cmd, sizeof cmd, "./gen < data%d.in > hhh.txt", i);
      assert(!system(cmd));
      snprintf(cmd, sizeof cmd, "./checker < hhh.txt > data%d.ans", i);
    } while (system(cmd));
  }
  return 0;
}