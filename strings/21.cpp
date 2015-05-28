#include <iostream>
#include <cstring>
using namespace std;
int main(){
int m,siz=0,words=0;
char str[100];
cin.getline(str,100);

for(m=0;m<100;m++){
    if(str[m]==' '){
        siz++;
        }
    }
int arr[siz];
siz=0;
for(m=0;m<100;m++){
    if(str[m]==' '){
        arr[siz]=m;
        siz++;
        }
    }
/// checking the number of the words written
if(arr[0]>0)words++;
for(m=1;m<siz-1;m++){
    if(arr[m]-arr[m-1]>1)words++;
    }
if(arr[siz-1]<strlen(str)-1)words++;
cout<<words;
}
