#include <iostream>
#include <cstring>
using namespace std;
int main(){
int m,siz=0;
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
int min_length=arr[0],first_index=0,second_index=arr[0];
for(m=0;m<siz;m++){
    if(arr[m]-arr[m-1]-1>0&&arr[m]-arr[m-1]-1<min_length){
        min_length=arr[m]-arr[m-1]-1;
        first_index=arr[m-1]+1;
        second_index=arr[m];
        }
    }
if(strlen(str)-arr[siz-1]-1>0&&strlen(str)-arr[siz-1]-1<min_length){
    min_length=strlen(str)-arr[siz-1]-1;
    first_index=arr[siz-1];
    second_index=strlen(str);
    }
cout<<min_length<<endl<<"!!!";
for(m=first_index;m<second_index;m++)cout<<str[m];
cout<<"!!!";
}
