#include<bits/stdc++.h>
using namespace std;

class RandomGenerator {

private:
    unordered_set<int>myset;
    vector<int>v;
    int num_call=0;
    int N;
public:
    RandomGenerator(int n) {
        N=n;
        srand(time(NULL));
    }
	
	int generate() {
		// todo
        num_call++;        
        if(num_call>N)return -1;
        
        bool dir=(2*num_call<=N);
        
        if(!dir&&2*num_call-2<=N){
           int i;
           for(i=0;i<N;i++)v.push_back(i);
           for(i=N-1;i>=0;i--){
               int p=rand()%(i+1);
               swap(v[i],v[p]);
           }
           int cnt=0;
           for(i=0;i<N;i++)
               if(myset.count(v[i])==0)swap(v[i],v[cnt++]);
           v.resize(cnt);
        }  
            
        int gen;
        if(dir){
          do{
             gen=rand()%N;
           }while(myset.count(gen)!=0);
           myset.emplace(gen);
        }
        else{
            gen=v.back();
            v.pop_back();
        }

        return gen;
	}
};

int main(void){
    
    RandomGenerator *R=new RandomGenerator(11);
    for(int i=0;i<12;i++)cout<<R->generate()<<endl;
    
    return 0;
}