#include<iostream>
using namespace std;

int main()
{
 //int a;
 //cin >> a;
 //cout << "value of a is " << a << endl;
   
/*
if (a>0)
{
    cout<< "a is positive\n";
}
else
{
    cout << " a is not positive ";
}

 int a ,b ;
 cin >> a >>b;

 if (a > b)
 {
    cout<< "a is greater";

 }
  if (b>a)
 {
    cout << "b is greater";

 }

  int n;
  cin>> n;
  int i = 1;
  while (i<=n)
  {
    cout<<i << endl;
    i=i+1;

  }
  
 int n; 
 cin>>n;
 int sum =0;
 int i =1;
 while (i<=n)
 {
    sum = sum + i;
    i++;

 }
    cout << "The value of sum is "<<sum ;
    */
   int n;
   cin>>n;

   int i = 2;

   while (i<n)
   {
    if (n % i == 0)
    {
        cout << "Not prime for "<< i <<endl;

    }
    else{
        cout << "Prime for " << i << endl;
    }
    i++;
   }
   
}