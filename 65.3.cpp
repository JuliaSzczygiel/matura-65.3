#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

class files {
    ifstream fileIn;
    ofstream fileOut;
    long i,minL, minM,d;
    long sumL=0, ileN=0;
    long ile=5;
    int licz[ROZ], mian[ROZ];
    public:
    files();
    ~files();
    void loop();
};

files::files()
{
   fileIn.open("c:\\dane_ulamki.txt");
   fileOut.open("c:\\wyniki_ulamki.txt");

  if (!fileIn.good())
     cerr << "Error fileIn not exists!!!!\n";
  if (!fileOut.good())
     cerr << "Error cannot create fileOut!!!\n";
}

files::~files()
{
   fileIn.close();
   fileOut.close();
}

void zad3::loop()
{
    int nwd(int  n, int m){
    if (n<m) return nwd(m,n);
    if (m==0) return n;
    return nwd(m,n%m);
    }

    for(i=0;i<ile;i++){
        d=nwd(licz[i],mian[i]);
        sumL = sumL + licz[i]/d;
    }
    cout << "Zadanie 3: " << sumL << endl;
}

main()
{	
  zad3 dane;
  dane.loop();
  return 0;
}
