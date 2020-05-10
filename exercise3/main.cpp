#import <iostream>
using namespace std;

bool alreadyInMem(int input[], int size, int page){
  for(int i=0;i<size;i++){
    if(page == input[i]){
      return true;
    }
  }
  return false;
}
//void display();
int optimal(int mem[], int nPages, int nframes) {
    int i, j, page[nPages], fs[10], hits=0;
    int
    max, found = 0, lg[nframes], index, k, l, flag1 = 0, flag2 = 0, pf = 0;
    float pr;
    int fr[nframes], n, m;
    //printf("Enter length of the reference string: ");
    n=nPages;
    //printf("Enter the reference string: ");
    for (i = 0; i < n; i++)
        page[i]=mem[i];
    //printf("Enter no of frames: ");
    //scanf("%d", & m);
    m=nframes;
    for (i = 0; i < m; i++)
        fr[i] = -1;
    pf = m;
    for (j = 0; j < n; j++) {
        flag1 = 0;
        flag2 = 0;
        for (i = 0; i < m; i++) {
            if (fr[i] == page[j]) {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }
        if (flag1 == 0) {
            for (i = 0; i < m; i++) {
                if (fr[i] == -1) {
                    fr[i] = page[j];
                    flag2 = 1;
                    break;
                }
            }
        }
        if (flag2 == 0) {
            for (i = 0; i < m; i++)
                lg[i] = 0;
            for (i = 0; i < m; i++) {
                for (k = j + 1; k <= n; k++) {
                    if (fr[i] == page[k]) {
                        lg[i] = k - j;
                        //hits++;
                        break;
                    }
                }
            }
            found = 0;
            for (i = 0; i < m; i++) {
                if (lg[i] == 0) {
                    index = i;
                    found = 1;
                    hits++;
                    break;
                }
            }
            if (found == 0) {
                max = lg[0];
                index = 0;
                for (i = 0; i < m; i++) {
                    if (max < lg[i]) {
                        max = lg[i];
                        index = i;
                    }
                }
            }
            fr[index] = page[j];
            pf++;
        }
        cout<<"step "<<j+1<<": ";
        for(i=0;i<nframes;i++){
          cout<<fr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<pf<<" Page faults."<<endl;
    cout<<j-pf<<" Hits."<<endl;
  return 0;
}


int lru(int mem[], int pages, int nframes){
  //void display();
  int fr[nframes];
  //int p[12]={2,3,2,1,5,2,4,5,3,2,5,2};
  int p[pages];
  for(int i=0;i<pages;i++){
    p[i]=mem[i];
  }

  int i,j,fs[nframes];
  int index,k,l,flag1=0,flag2=0,pf=0,hits=0;
  for(i=0;i<nframes;i++){
    fr[i]=-1;
  }
  for(j=0;j<pages;j++){
    flag1=0,flag2=0;
    for(i=0;i<nframes;i++){
      if(fr[i]==p[j]){
        flag1=1;
        flag2=1; 
        hits++;
        break;
      }
    }
    if(flag1==0){
      for(i=0;i<nframes;i++) {
        if(fr[i]==-1){
          fr[i]=p[j]; flag2=1;
          break; 
        }
      }
    }
    if(flag2==0) {
      for(i=0;i<nframes;i++)
      fs[i]=0;
      for(k=j-1,l=1;l<=nframes-1;l++,k--){
        for(i=0;i<nframes;i++) {
          if(fr[i]==p[k]) {
            fs[i]=1;
          }
        }
      }
      for(i=0;i<nframes;i++) {
        if(fs[i]==0)
        index=i; 
      }
      fr[index]=p[j];
      pf++; 
    }
    cout<<"step "<<j+1<<": ";
    for(i=0;i<nframes;i++){
      cout<<fr[i]<<" ";
    }
    cout<<endl;
  }
  cout<<pf+nframes<<" Page faults."<<endl;
  cout<<hits<<" Hits."<<endl;
  return 0;
}

int fifo(int mem[], int nPages, int nframes){
  int next=0;
  int hit =0;
  int miss =0;
  int pfaults =0;
  //int nPages=14;
  //int mem []= {4,7,3,0,1,7,3,8,5,4,5,3,4,7};
  int frames[nframes];
  for(int i=0;i<nframes;i++){
    frames[i] =-1;
  }
  for(int step=0; step < nPages;step++){
    std::cout<<"step "<< step+1<<": ";
    if(!alreadyInMem(frames, nframes ,mem[step])) {
      if(frames[next]==-1){
        frames[next] = mem[step];
        next++;
        miss++;
        pfaults++;
      }else{
        if(next == nframes) next=0;
        if(frames[next] != mem[step]  ){
          frames[next] = mem[step];
          next++;
          miss++;
          pfaults++;
        }
      }
    }else{
      hit++;
    }
    for(int pg=0; pg<nframes ;pg++){
      std::cout<< frames[pg]<<" ";
    }
    std::cout<<std::endl;;
  }
  std::cout<<pfaults<<" Page faults."<<std::endl;
  std::cout<<hit<<" Hits."<<std::endl;  
  return 0;
}

int main(){
  int algorithm;
  std::cin>> algorithm;
  int nframes;
  std::cin>> nframes;
  int npages;
  std::cin>> npages;

  int stream[npages];
  for(int i =0;i<npages;i++){
    std::cin>> stream[i];
  }
  //cout<<">>>>>>>"<<endl;
  if(algorithm == 1){
    fifo(stream, npages, nframes);
  }
  if(algorithm == 2){
    lru(stream, npages, nframes);
  }
  if(algorithm == 3){
    optimal(stream, npages, nframes);
  }
  return 0;
}

