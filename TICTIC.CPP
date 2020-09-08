#include<iostream.h>
#include<conio.h>
char game[3][3];
int check(){
	for(int m=0;m<3;m++){
		if((game[m][0]==game[m][1])&&(game[m][1]==game[m][2])){
			if(game[m][0]!='.'){
			return(1);
			}
			}
		if((game[0][m]==game[1][m])&&(game[1][m]==game[2][m])){
			if(game[0][m]!='.'){
			return(1);
			}
			}
		}
	if((game[0][0]==game[1][1])&&(game[1][1]==game[2][2])){
		if (game[1][1]!='.'){
		return(1);
		}
		}
	if((game[0][2]==game[1][1])&&(game[1][1]==game[2][0])){
		if(game[1][1]!='.'){
		return(1);
		}
		}
	return(0);
}
void display(){
	cout<<"\t0\t1\t2";
	for(int i=0;i<3;i++){
		cout<<"\n"<<i<<"\t";
		for(int j=0;j<3;j++){
			cout<<game[i][j]<<"\t";
		}
	}

}
void main(){
char player='X';
int c=9,a,b,result=0;
clrscr();
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		game[i][j]='.';
		}
	}
display();
while(c!=0){
	cout<<"\nPlayer "<<player<<" enter row and coloum";
	cin>>a>>b;
	game[a][b]=player;
	display();
	result=check();
	if(result==1){
		break;
	}
	if (player=='X'){
		player='O';
	}
	else{
		player='X';
	}
	c-=1;
}
if(result==1){
	cout<<"\nPlayer "<<player<<" has won";
}
else{
	cout<<"Draw";
}
getch();
}

