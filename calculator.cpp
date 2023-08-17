#include<iostream>
#include <math.h>

using namespace std;
float inRadians(float degrees)
 {
    return (degrees*3.14159)/180;
   }
int main()
{  
  float degrees,radians;
  cout<<"enter an angle in degrees:" ;
  cin>>degrees;
  radians = inRadians(degrees);
  cout<<sin(radians)<<endl<<cos(radians)<<endl<<tan(radians)<<endl;

  int num1, num2;
  char op;
  cout<< "Enter first number";
  cin >> num1;
  cout<< "Enter operator";
  cin >> op;
  cout<< "Enter second number";
  cin >> num2;
  int result;

  if(op == '+'){
    result = num1 + num2;
  } else if (op == '-'){
    result = num1-num2;
  }  else if (op == '/'){
    result = num1/num2;
  } else if (op == '*'){
    result = num1*num2;
  } else{
    cout <<"invalid";
  }
  cout << result<<endl;

  int b,e;
  cout << "Enter the base"<<endl;
  cin>> b;
  cout<<"Enter the exponent"<<endl;
  cin>>e;
   int p =1;
  for(int i = 1; i<=e; i++)
  {
     p=p*b;
  } 
    cout <<"the result is:"<<p<<endl;
    return 0;
}
