//
//  main.cpp
//  helloworld
//
//  Created by yhhsu on 2015/8/27.
//  Copyright (c) 2015年 yhhsu. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int fib_forLoop(int );
int fib_recursion(int );

int main(void) {

    int a;
    do{
        cout << "input a num: " ;
        cin >> a;
     
    }while (a<=0);
    
    cout << fib_forLoop(a) << endl;
    
    cout << fib_recursion(a) << endl;
    return 0;
}

int fib_forLoop(int num)
{
    int sum=0;
    int f1=1,f2=1;
    
    for (int i=3; i<num+1; i++) {
        sum = f2 + f1;
        f1 = f2;
        f2 = sum;
    }
    
    return sum;
}

int fib_recursion(int num)
{
    //int f1=1,f2=1;
    if (num==2 || num==1)
        return 1;
    else
        return fib_recursion(num-1)+fib_recursion(num-2);
    
    
}
