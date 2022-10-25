#include<iostream>
using namespace std;

int run=0,wicket=0,overs=0,balls=0,totalOvers;

class team{
public:
    string name;
    string players[11];
    string bowlerList[11];
    string batsmanList[11];
public:
    team(string s){
        name=s;
    }
    void showScore(){
        cout<<endl<<endl<<"Team: "<<name<<endl;
        cout<<"Runs: "<<run<<" Wicket: "<<wicket<<endl;
        cout<<"Overs: "<<overs<<"."<<balls<<endl;
        // for(int i=0;i<a;i++){
        //     cout<<batsman[i]<<
        // }

    }

};


void addRun(int k){
    run=run+k;
}


int main(){
    char c[25];
    cout<<"Enter batting team name: ";
    cin.getline(c,25);
    team a(c);
    cout<<"Enter bowling team name: ";
    cin.getline(c,25);
    team b(c);
    cout<<"Enter total no of overs to be played: ";
    cin>>totalOvers;
    cout<<"Enter batsman1 name: ";
    cin.getline(c,25);
    cin.getline(c,25);
    a.batsmanList[0]=c;
    cout<<"Enter batsman2 name: ";
    cin.getline(c,25);
    a.batsmanList[1]=c;
    cout<<"Enter bowler name: ";
    cin.getline(c,25);
    a.bowlerList[0]=c;
    int b1=2,b2=1;
    cout<<"Enter(r/w/nb/extra):"<<endl<<"'r' to add runs in legal delivery."<<endl;
    cout<<"'w' for wicket."<<endl;
    cout<<"'extra' to add extra runs."<<endl;
    cout<<"'nb' for noball."<<endl;

    while(1){
        string in;
        int k;
        cout<<endl<<"Enter(r/w/nb/extra):";
        cin>>in;
        if(in=="r"){
            cout<<"Enter runs: ";
            cin>>k;
            addRun(k);
            balls++;
        }
        if(in=="w"){
            wicket++;
            balls++;
            cout<<"Runs scored: ";
            cin>>k;
            if(wicket<10){
                cout<<"Enter new batsman name: ";
                cin.getline(c,25);
                a.batsmanList[b1]=c;
                b1++;
            }
            addRun(k);
        }
        if(in=="nb"){
            cout<<"Enter runs scored: ";
            cin>>k;
            addRun(k);
        }
        if(in=="extra"){
            cout<<"Enter runs scored: ";
            cin>>k;
            addRun(k);
        }

        if(balls==6){
            overs++;
            balls=0;
            if(overs<totalOvers){
            cout<<"New bowler name: ";
            cin.getline(c,25);
            a.bowlerList[b2]=c;
            }
        }
        a.showScore();

        if((overs==totalOvers)||(wicket==10)){
            cout<<"Inning over"<<endl;
            a.showScore();
            break;
        }
    }
    
    int target=run+1;
    run=0;
    wicket=0;
    balls=0;
    overs=0;


    while(1){
        string in;
        int k;
        cout<<endl<<"Enter(r/w/nb/extra):";
        cin>>in;
        if(in=="r"){
            cout<<"Enter runs: ";
            cin>>k;
            addRun(k);
            balls++;
        }
        if(in=="w"){
            wicket++;
            balls++;
            cout<<"Runs scored: ";
            cin>>k;
            if(wicket<10){
                cout<<"Enter new batsman name: ";
                cin.getline(c,25);
                a.batsmanList[b1]=c;
                b1++;
            }
            addRun(k);
        }
        if(in=="nb"){
            cout<<"Enter runs scored: ";
            cin>>k;
            addRun(k);
        }
        if(in=="extra"){
            cout<<"Enter runs scored: ";
            cin>>k;
            addRun(k);
        }

        if(balls==6){
            overs++;
            balls=0;
            if(overs<totalOvers){
            cout<<"New bowler name: ";
            cin.getline(c,25);
            a.bowlerList[b2]=c;
            }
        }
        b.showScore();


        if((run==target)&&((overs==totalOvers)||(wicket==10))){
            cout<<"Game over"<<endl;
            cout<<"Match tied"<<endl;
            break;
        }
        if((run>=target)){
            cout<<"Match over"<<endl;
            cout<<b.name<<" won by"<<10-wicket<<" wickets."<<endl;
            break;
        }
        if(((overs==totalOvers)||(wicket==10))&&(run<target-1)){
            cout<<"Match over"<<endl;
            cout<<a.name<<" won by "<<run-target+1<<" runs."<<endl;
            break;
        }
    }

    
}
