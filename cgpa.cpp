// calculation of cgpa
#include<iostream>
using namespace std;
int main (){

int  NumberOfSubjects;
float cgpa;
int weightedScore  = 0;
int TotalCredit =0;
cout <<"number of subjects"<<endl;
cin>>NumberOfSubjects;
//loop to take input
for (int i=1;  i <=NumberOfSubjects ;i++){
int MaxCredit, PointerScore;
cout<<"maximum credit in subject: "<<i<<endl;
cin>>MaxCredit;
cout<<"pointer Scored"<<endl;
cin>>PointerScore;
weightedScore = weightedScore + (MaxCredit*PointerScore);
TotalCredit = TotalCredit + MaxCredit;
}
// cgpa calculation
if(TotalCredit!=0){
cgpa = (weightedScore)/(TotalCredit);
cout << "cgpa = "<<cgpa<<endl;
}
else{
cout<<"total credit can not be zero";
}
return 0;
}



