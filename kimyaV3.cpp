#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char atom1[10],atom2[10];
    int adet1,adet2,akutle1,akutle2;
    float mol;
    cout<<"1.Atomu Giriniz=  ";
    cin>>atom1;
    cout<<"1.Atomdan Ne Kadar Bulunuyor?=  ";
    cin>>adet1;
    cout<<"2.Atomu Giriniz=  ";
    cin>>atom2;
    cout<<"2.Atomdan Ne Kadar Bulunuyor?=  ";
    cin>>adet2;
    cout<<"Kac Tane Mol Olacagini Giriniz=  "<<endl;
    cin>>mol;
    if(strcmp(atom1,"H")==0||strcmp(atom1,"h")==0)
        akutle1=1;
    else if(strcmp(atom1,"C")==0||strcmp(atom1,"c")==0)
        akutle1=12;
    else if(strcmp(atom1,"N")==0||strcmp(atom1,"n")==0)
        akutle1=14;
    else if(strcmp(atom1,"O")==0||strcmp(atom1,"o")==0)
        akutle1=16;
    else if(strcmp(atom1,"F")==0||strcmp(atom1,"f")==0)
        akutle1=19;
    else if(strcmp(atom1,"P")==0||strcmp(atom1,"p")==0)
        akutle1=31;
    else if(strcmp(atom1,"S")==0||strcmp(atom1,"s")==0)
        akutle1=32;
    else if(strcmp(atom1,"Cl")==0||strcmp(atom1,"cl")==0)
        akutle1=35;
    if(strcmp(atom2,"H")==0||strcmp(atom2,"h")==0)
        akutle2=1;
    else if(strcmp(atom2,"C")==0||strcmp(atom2,"c")==0)
        akutle2=12;
    else if(strcmp(atom2,"N")==0||strcmp(atom2,"n")==0)
        akutle2=14;
    else if(strcmp(atom2,"O")==0||strcmp(atom2,"o")==0)
        akutle2=16;
    else if(strcmp(atom2,"F")==0||strcmp(atom2,"f")==0)
        akutle2=19;
    else if(strcmp(atom2,"P")==0||strcmp(atom2,"p")==0)
        akutle2=31;
    else if(strcmp(atom2,"S")==0||strcmp(atom2,"s")==0)
        akutle2=32;
    else if(strcmp(atom2,"Cl")==0||strcmp(atom2,"cl")==0)
        akutle2=35;
    cout<<"-------------"<<mol<<" mol "<<atom1<<adet1<<atom2<<adet2<<"------------"<<endl<<endl<<endl<<endl;
    
    cout<<"---Molekul ile ilgili bilgiler---"<<endl;
    cout<<mol*((akutle1*adet1)+(akutle2*adet2))<<" gr dir"<<endl;
    cout<<"("<<mol*6.02<<") .10*23 tanedir"<<endl;
    cout<<(adet1+adet2)*mol<<" mol atomdur"<<endl;
    cout<<"1 tanesi = "<<mol*((akutle1*adet1)+(akutle2*adet2))<<" akb'dir"<<endl<<endl;
    
    cout<<"---Atomlar ile ilgili Bilgiler---"<<endl;
    cout<<atom1<<" = "<<mol*akutle1*adet1<<" gr dir"<<endl;
    cout<<atom2<<" = "<<mol*akutle2*adet2<<" gr dir"<<endl;
    cout<<mol*adet1<<" mol "<<atom1<<" atomu vardir"<<endl;
    cout<<mol*adet2<<" mol "<<atom2<<" atomu vardir"<<endl;
    
    
    cout<<mol*adet1<<" mol "<<atom1<<" atomu = ("<<float(akutle1*mol*adet1)<<").N akb"<<endl;
    cout<<mol*adet2<<" mol "<<atom2<<" atomu = ("<<float(akutle2*mol*adet2)<<").N akb"<<endl;
    
    
    cout<<atom1<<" atomu = ("<<6.02*mol*adet1<<").10*23 tanedir"<<endl;
    cout<<atom2<<" atomu = ("<<6.02*mol*adet2<<").10*23 tanedir"<<endl;
    system("PAUSE");
}
