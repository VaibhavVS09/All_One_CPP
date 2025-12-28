//PlayerApp
#include<iostream>
using namespace std;
class PlayerInfo{
	private:
		int id,run;
		string name;
	public:
		void setId(int id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setRun(int run){
			this->run=run;
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getRun(){
			return run;
		}
};
class Team{
	private:
	PlayerInfo* players;
	int size,maxrun,index=0;
	public:
		Team(PlayerInfo* p,int size){
			this->players=p;
			this->size=size;
		}
		~Team(){
			delete[] players;
		}
		void findHighetRun(){
			maxrun=players[0].getRun();
			for(int i=0;i<size;i++){
				if(players[i].getRun()>maxrun){
					maxrun=players[i].getRun();
					index=i;
				}
			}
			cout<<"Max Run Player Info:\n";
			cout<<"Player Id: "<<players[index].getId()<<" Player Name:"<<players[index].getName()<<" Player Runs:"<<players[index].getRun();
		}
};
int main(){
	int id,run,size;
	string name;
	cout<<"Enter the total player count:\n";
	cin>>size;
	PlayerInfo* p=new PlayerInfo[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the player id,name,run\n";
		cin>>id>>name>>run;
		p[i].setId(id);
		p[i].setName(name);
		p[i].setRun(run);
	}
	Team t(p,size);
	t.findHighetRun();
	delete[] p;
	p=nullptr;
	return 0;	
}
