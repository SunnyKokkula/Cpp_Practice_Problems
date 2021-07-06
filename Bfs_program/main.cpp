#include <iostream>

using namespace std;
void connect_edges(list<int>,int ,int );
void BFS(list<int>*,int);
void connect_edges(list<int> *lst,int X,int Y){
    //for the undirected graph we have to make a link of X-->Y and Y-->X
    lst[X].push_back(Y);
    lst[Y].push_back(X);
    return;
}

void BFS(list<int>*lst,int count,int X){
    //created a boolean array to find out the unvisited nodes
    bool *visited= new bool[count];
    for(int i=0;i<count;i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(X);
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        //take one element from the queue and check the element is
        //unvisited or not
        if(!visited[ele]){
            visited[ele]=true;
            //print the unvisited nodes
            cout<<ele<<" ";
            list<int>::iterator it;
            for(it=lst[ele].begin();it!=lst[ele].end();it++){
                q.push(*it);
            }
        }
    }
}
// Print the Adjacency List
void print(list<int> *lst,int count){
    list<int>::iterator it;
    for(int i=0;i<count;i++){
        cout<<i<<"-->";
        for(it=lst[i].begin();it!=lst[i].end();it++){
            cout<<*it<<"-->";
        }
        cout<<endl;
    }
}

int main(){
    int count;
    cout<<"Enter the no. of vertices : ";
    cin>>count;
    cout<<endl;
    list<int> *lst=new list<int>[count];
    connect_edges(lst,0,1);
    connect_edges(lst,0,2);
    connect_edges(lst,2,4);
    connect_edges(lst,3,2);
    connect_edges(lst,4,5);
    connect_edges(lst,3,5);
    connect_edges(lst,1,3);
    connect_edges(lst,5,0);
    cout<<"Adjacency matrix: "<<endl;
    print(lst,count);
    cout<<"BFS : "<<endl;
    BFS(lst,count,0);

    return 0;
}
