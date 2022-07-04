#include <iostream>
#include <iomanip>

using namespace std;


// next time nest the if statements

int main() {
  int a,b,c,d;

  cout << "first ip number" << endl;
  cin >> a;
  if (a >= 1 && a <= 255){
    a = a;
  }
  else{
    cout << "first ip number not valid, try again" << endl;
    cin >> a;
  }
  cout << "second ip number" << endl;
  cin >> b;
  if (b >= 1 && b <= 255){
    b = b;
  }
  else{
    cout << "second ip number not valid, try again" << endl;
    cin >> b;
  }

  cout << "third ip number" << endl;
  cin >> c;

  if (c >= 1 && c <= 255){
    c = c;
  }
  else{
    cout << "third ip number not valid, try again" << endl;
    cin >> c;
  }

  cout << "fourth ip number" << endl;
  cin >> d;

  if (d >= 1 && d <= 255){
    d = d;
  }
  else{
    cout << "foruth ip number not valid, try again" << endl;
    cin >> d;
  }
  cout << a << "." << b << "." << c << "." << d << endl;

}