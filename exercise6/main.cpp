#include <iostream>
using namespace std;
#include<stdio.h>

int main(){
  char job[10][10];
  int time[10],avail,tem[10],temp[10]; int safe[10];
  int ind=1,i,j,q,n,t;
  //printf("Enter no of jobs: ");
  //scanf("%d",&n);
  cin>>n;
  for(i=0;i<n;i++){
    //printf("Enter name and time: ");
    //scanf("%s%d",&job[i],&time[i]);
    cin>>job[i]>>time[i];
  }
  //printf("Enter the available resources:");
  //scanf("%d",&avail;);
  cin>>avail;
  for(i=0;i<n;i++){
    temp[i]=time[i];
    tem[i]=i;
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(temp[i]>temp[j]){
        t=temp[i]; 
        temp[i]=temp[j];
        temp[j]=t; t=tem[i];
        tem[i]=tem[j];
        tem[j]=t;
      }
    }
  }
  for(i=0;i<n;i++){
    q=tem[i];
    if(time[q]<=avail){
      safe[ind]=tem[i];
      avail=avail-tem[q];
      ind++;
    }else{
      printf("No safe sequence\n");
      return 0;
    }
  }
  for(i=1;i<ind-1; i++){
    cout<<job[safe[i]]<<" "<< time[safe[i]]<<", ";
  }
  cout<<job[safe[ind-1]]<<" "<< time[safe[ind-1]]<<endl;
  
  return 0;
}


