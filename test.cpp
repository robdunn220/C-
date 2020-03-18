#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  cout << (timePtr->tm_hour) << ":" << (timePtr->tm_min) << endl;
  return 0;
}
