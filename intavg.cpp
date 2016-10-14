//
//  main.cpp
//  intavg
//
//  Created by Shadee Rafati on 10/13/16.
//  Copyright © 2016 Shadee Rafati. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    ifstream Input;
    ofstream Output;
    
    Input.open("num.txt");
    
    
    Output.open("average.txt");
    
    int total=0;
    int count=0;
    
    while(!Input.eof())
    {
        Input>>n;
        total=total+n;
        count++;
    }
    
    float average=0;
    
    average=float(total)/float(count);
    cout<<"sum "<<total<<" count "<<count<<" average "<<average;
    Output<<average;
    
    Input.close();
    Output.close();
    
    return 0;
    
}
