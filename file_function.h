#include<fstream>
#include<vector>
using namespace std;
ifstream ifile;
ofstream ofile;

void read(){
string choose,in;
 cout<<BOLDBLUE<<"LIST :"<<RESET<<endl;
 system("cd source && ls");
 cout<<YELLOW<<"Choose :"<<RESET;
 cin>>choose;
ifile.open("source/"+choose);
  if (ifile.fail())
  {
      cout<<"fail"<<endl;
  }
else{
cout<<BOLDWHITE<<"-----------start----------"<<RESET<<endl;
while(getline(ifile,in)){
    cout<<in<<endl;
}
 cout<<BOLDWHITE<<"-----------END----------"<<RESET<<endl;
}
ifile.close();
}
void encrypt(){
    string choose,in;
    vector<string> SumString;
    int add;
cout<<BOLDBLUE<<"LIST :"<<RESET<<endl;
system("cd source && ls");
cout<<YELLOW<<"Choose :"<<RESET;
cin>>choose;
ifile.open("source/"+choose);
  if (ifile.fail())
  {
      cout<<"fail"<<endl;
  }else{
    while(getline(ifile,in)){
        string tmp="";
        for (int i = 0; i < in.length(); i++)
        {
           tmp+=tolower(in.at(i));
        }
        SumString.push_back(tmp);
    }
    cout<<YELLOW<<"Penambah :"<<RESET;
    cin>>add;
}
ifile.close();
for (auto &a : SumString)
{
    for (int x = 0; x <a.length() ; x++)
    {
        if(a.at(x)>=97&&a.at(x)<=122) {
        int tmp=(int)a.at(x)+add%26;
            if (tmp>=123){
                tmp=97+tmp%123;
                cout<<char(tmp);
                continue;
            }
            cout<<char(tmp);
            continue;
        }
        if(a.at(x)>=48&&a.at(x)<=57) {
        int tmp=(int)a.at(x)+add%10;
            if (tmp>=58){
                tmp=48+tmp%58;
                cout<<char(tmp);
                continue;
            }
            cout<<char(tmp);
            continue;
        }
    cout<<a.at(x);
    }
    cout<<endl;
}


}