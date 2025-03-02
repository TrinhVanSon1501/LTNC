#include <bits/stdc++.h>
using namespace std;
int main()
{   int So;
    int Soluot=10;
    int key=rand()%100+1;
    int Point=500;
    bool isKey=true;
    do{ Soluot--;
        cin>>So;
        if(So>key){
               cout<<"Hay chon so nho hon"<<endl;
               Point-=50;
       }
        else if(So<key) {
                cout<<"Hay chon so lon hon"<<endl;
                Point-=50;
       }
        else {
            cout<<"You win!";isKey=false;
        }
    }
     while(isKey==true &&Soluot>0);
     if(isKey) cout<<"You lost!";
    return 0;
}
