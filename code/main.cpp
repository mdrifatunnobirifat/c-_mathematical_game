
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    cout<<"------GAME for FUN-------\n\n"<<endl;

    while(true)
    {
    float a,b,c,d,e,f,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    int g;
    //int ss=1,2,3,4,5,6,7,8,9;
    float sum,sub,mul,div;
    cout<<"\n\n------ @PLEASE ENTER@ -------"<<
          "\n"<<"\n"<<
        " *  type 1 to use sum\n"<<
        " *  type 2 to do subtraction\n"<<
        " *  type 3 to do multipliaction\n"<<
        " *  type 4 to do divide\n" <<
        " *  type 5 to see multiplication table\n"<<
        " *  type 6 to check even or odd\n"<<
        " *  type 7 to play sum game\n"<<
        " *  type 8 to play subtraction game\n"<<
        " *  type 9 to play multiple game\n"<<
        " *  type 10 to play divide game\n"<<
        " *  type 11 to see square and cube \n"<<endl;  cin>>a;


        if(a==1)
        {
             cout<<"enter your 1 st number"<<endl; cin>>b;
             cout<<"enter your 2nd number"<<endl; cin>>c;
             sum=b+c; cout<<" "<<b<<"+ "<<c<<"= "<<sum<<endl;
             }

   else if(a==2) {
                cout<<"enter your 1 st number"<<endl; cin>>b;
                cout<<"enter your 2nd number"<<endl; cin>>c;
                sub=b-c; cout<<b<<" -"<<" "<<c<<"= "<<sub<<endl;
                }

   else if(a==3)

        { cout<<"enter your 1 st number"<<endl; cin>>b;
          cout<<"enter your 2nd number"<<endl; cin>>c;
           mul=b*c; cout<<b<<" *"<<" "<<c<<"= "<<mul<<endl;
        }
   else if(a==4)
        {cout<<"enter your 1 st number"<<endl; cin>>b;
        cout<<"enter your 2nd number"<<endl; cin>>c;
         div=(float)b/(float)c;cout<<b<<" /"<<" "<<c<<"= "<<div<<endl;
        }

   else if(a==5)
           {
                cout<<"enter the number"<<endl; cin>>e;
                for(d=1;d<=10;d++)
                    {   f=e*d;  cout<<" "<<e<<" * "<<d<<" = "<<f<<"\n"<<endl;}
            }

   else if(a==6)
           { cout<<" enter to check"<<endl; cin>>g;
              if((g%2)==0) {cout<<" this is even number"<<endl;}
              else {cout<<" this is an odd number"<<endl;}

           }


    if(a==7){
            cout<<" enter your 1st number= "<<endl;
            cin>>h;
             cout<<"enter result to calculate=  "<<endl;
              cin>>j;
             cout<<" "<<h<<"+ -?-"<<" = "<<j<<"   what will be  in the (?) "<<endl;  cin>>i;
     if(i==(j-h))
        { cout<< "%% GOOD JOB %%"<<endl;
          cout<<"\n"<<"\n"<<endl;
      }
    else if(i!=(j-h))
        {cout<<"(!.!) wrong (!.!)"<<endl;
        cout<<"\n"<<"\n"<<endl;}
    }
    else if(a==8){
            cout<<"enter your 1st number =  "<<endl; cin>>k; cout<<"entre your 2nd number "<<endl; cin>>m;  cout<<" "<<k<<"- _"<<"= "<<m<<"  what will be  in the blank "<<endl;cin>>l;
     if(l==(k-m)){ cout<< "%% GOOD JOB %%"<<endl;
                   cout<<"\n"<<"\n"<<endl;}
    else if(l!=(k-m)){cout<<"(!.!) wrong (!.!)"<<endl;
        cout<<"\n"<<"\n"<<endl;}
    }
    else if(a==9){
            cout<<"enter your 1st number=  "<<endl; cin>>n; cout<<"enter your 2nd nunber=  "<<endl;
            cin>>o;
             cout<<" "<<n<<"* "<<o<<"= "<<"  what will be in the blank "<<endl;
             cin>>p;
            if(p==(n*o))
                {cout<< "%% GOOD JOB %%"<<endl;
          cout<<"\n"<<"\n"<<endl;}

            else if(p!=(n*o)){cout<<"(!.!) wrong (!.!)"<<endl;
        cout<<"\n"<<"\n"<<endl;}
                }
    else if(a==10){
            cout<<"enter your 1st number=  "<<endl;
            cin>>q;
             cout<<"enter result  "<<endl;
             cin>>r;
            cout<<" "<<q<<"/ "<<r<<"= "<<"   what will be in the blank "<<endl;
            cin>>s;
            if(s==(q/r))
                { cout<< "%% GOOD JOB %%"<<endl;
          cout<<"\n"<<"\n"<<endl;}
            else if(s!=(q/r))
            {cout<<"(!.!) wrong (!.!)"<<endl;
        cout<<"\n"<<"\n"<<endl;}
                }
   else if(a==11){
                   cout<<"enter"<<endl;
                    cin>>t;
                    {u=t*t; cout<<"square= "<<u<<endl;}
                    {v=(t*t*t); cout<<"cube= "<<v<<endl;}
                }


   }


    return 0;
    }
