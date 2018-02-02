
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Time2.h"
using namespace std;

Time2 :: Time(const int h, const int m, const int s) 
  : hour(h), minute (m), second(s)
{}

void Time2 :: setTime(const int h, const int m, const int s)
{
  hour = h;
  minute = m;
  second = s;
}

void Time2 :: print() const
{
  cout << setw(2) << setfill('0') << hour << ":"
       << setw(2) << setfill('0') << minute << ":"
       << setw(2) << setfill('0') << second << "\n";
}

void print_more() const
{
  cout << setw(2) << setfill('0') << hour << ":"
       << setw(2) << setfill('0') << minute << ":"
       << setw(2) << setfill('0') << second << "\n"
       << setw(2) << setfill('0') << minute << ":"
       << setw(2) << setfill('0') << second << "\n";
}

bool Time2 :: equals(const Time &otherTime)
{
  if(hour == otherTime2.hour
     && minute == otherTime2.minute
     && second == otherTime2.second)
    return true;
  else
    return false;
}
