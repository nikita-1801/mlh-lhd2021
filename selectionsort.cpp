//Selection Sort

#include<iostream>

using namespace std;

void selsort(int abc[],int size){
  int lowest,temp,pos;
  for(int i=0;i<size-1;i++){
    lowest=abc[i];
    pos=i;
    for(int j=i+1;j<size;j++){
      if(lowest>abc[j]){
        pos=j;
        lowest=abc[j];
      }
    }
    temp=abc[i];
    abc[i]=abc[pos];
    abc[pos]=temp;
  }
}

int main(){
  int abc[500], size;
  cout<<"Enter the size of the Array(max 500):";
  cin>>size;
  cout<<"Enter elements in the Array:";
  for(int i=0;i<size;i++)
    cin>>abc[i];
  cout<<endl;
  selsort(abc,size);
  cout<<"The sorted Array is:";
  for(i=0;i<size;i++)
     cout<<abc[i]<<" ";
  return 0;
}
