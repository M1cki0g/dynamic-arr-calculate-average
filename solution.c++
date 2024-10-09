#include<iostream>
#include<vector>

using namespace std;

float moyenne(vector<int>&t){
int sum = 0;
for(int i=0 ; i<t.size() ; i++){
    sum += t[i];
   
}
return float(sum)/t.size();
}

void aff(float moy){
cout<<"moy="<<moy;
}

int main(){
float moy;
int nbr;
char choix;
vector<int>t;
do{
cout<<"Saisir"<<endl;
cin>>nbr;
t.push_back(nbr);

cout<<"ajouter un nbr?(y/n)="<<endl;
cin>>choix;

}while(choix=='y' ||choix=='Y');
moy = moyenne(t);
aff(moy);

return 0;
}
