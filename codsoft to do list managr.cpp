#include<bits/stdc++.h>
using namespace std;
    vector<string> tasks;
    const int N = 1e5;
    bool chk[N];
    void add_task(){
        cout<<"Enter the no of task you want to add\n";
        int t;
        cin>>t;
        while(t--){
        cout<<"Enter the task\n";
        string s;
        
        cin>>s;
        tasks.push_back(s);
        }
    }
    void remove(){
       cout<<"Enter the task no you want to remove\n";
       int ind;
       cin>>ind;
        if(ind>=tasks.size()){cout<<"Invalid Input\n";return;}
       tasks.erase(tasks.begin()+ind);
    }
    void markcomp(){
        cout<<"Enter task no which is completed\n";
        int idx;
        cin>>idx;
         if(idx>=tasks.size()){cout<<"Invalid Input\n";return;}
        chk[idx] = 1;
    }
   
    void viewtasks(){
        int i=1;
        for(auto x:tasks)cout<<i<<" "<<x<<endl,i++;
    }

int main(){
    cout<<"Todo list manager\n";
    cout<<"Enter 1 to add task\n";
    cout<<"Enter 2 to remove task\n";
    cout<<"Enter 3 to mark  task completed\n";
    cout<<"Enter 4 to print all available tasks\n";

        cout<<"Enter the task you want to perform\n";
       int x;
       cin>>x;
       if(x==1)add_task();
       if(x==2)remove();
       if(x==3)markcomp();
       if(x==5)viewtasks();
       else cout<<"Invalid input\n";
       
    }
    




