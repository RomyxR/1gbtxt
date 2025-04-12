#include <iostream>
#include <fstream>

using namespace std;

int main(){
ofstream fout("bebra.txt");

unsigned long long c = 16777216;


unsigned long long count = 0;

for(unsigned long long i=0;i<c;i++){
count+=64;

fout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
cout<<"aga"<< count <<endl;

}


fout.close();
return 0;
}