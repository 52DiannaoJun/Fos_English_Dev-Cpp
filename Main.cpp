#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main(int argc, char** argv){
    cout<<" "<<argv<<endl;
    cout<<" "<<argc<<endl;
    cout<<" "<<rand()<<endl;
    cout<<"\t========\33[91mFOS IO CMD\33[0m========\t"<<endl;
    string uis0,uis1,emp,i;
    char uic0[64],uic1[1024];
    int uii0,uii1=0;
    float uif0,uif1=0;
    bool tr=true;
    bool fr=false;
    fstream file;
    while(tr){
        cout<<" IN SYS:<<";
        cin>>uis0;
        cout<<" \t:USR IPT ";
        cout<<""<<uis0<<endl;
        emp,i=uis0;
        if(i=="exit" or i=="quit" or i=="xit" or i=="qit"){
            exit(0);
        }
        else if(i=="open" or i=="opn"){
            cout<<"file name:";
            cin>>uis1;
            file.open(uis1.c_str(),ios::in|ios::out|ios::app);
            if(file.is_open()){
                cout<<"\tOK"<<endl;
            }
            else{
                cout<<"\tERR:FIL IS OPEN'T"<<endl;
            }
        }
        else if(i=="newf" or i=="nwfl"){
            cout<<"file name:";
            cin>>uis1;
            file.open(uis1.c_str(),ios::trunc);
            if(file.is_open()){
                cout<<"\tOK"<<endl;
                file.close();
            }
            else{
                cout<<"\tERR:FIL CAN'T OPEN";
            }
        }
        else if(i=="close" or i=="clos" ){
            file.close();
        }
        else if(i=="write" or i=="writ" or i=="wrt"){
            if(file.is_open()){
                cout<<"text data:";
                cin>>uis1;
                file<<uis1<<endl;
                cout<<"OK"<<endl;
            }
            else{
                cout<<"\tERR:FIL IS OPEN'T"<<endl;
            }
        }
        else if(i=="read" or i=="rad"){
            file.seekg(0);
            if(file.is_open()){
                while(file.getline(uic1,sizeof(uic1))){
                    cout<<uic1<<endl;
                }
            }
            else{
                cout<<"\tERR:FIL IS OPEN'T"<<endl;
            }
            file.seekg(0,ios::end);
        }
        else if(i=="comd" or i=="cmd" or i=="dosc"){
            cout<<"dos command:";
            cin>>uic0;
            system(uic0);
        }
        else if(i=="clean" or i=="clan" or i=="cln"){
            uii0=4096;
            while(uii0>0){
                cout<<endl;
                uii0--;
            }
        }
        else if(i=="sb"){
            uii0=4095;
            while(uii0>=0){
                if(uii0%256==0){
                    cout<<"|\n";
                }
                cout<<i;
                uii0--;
            }
        }
        else{
            cout<<" ERR:CMD"<<endl;
            cout<<" \tAT:"<<i<<endl;
        }
        uis0,uis1,i="";
        uii0,uii1=0;
        uif0,uif1=0;
    }
    return 1;
}
