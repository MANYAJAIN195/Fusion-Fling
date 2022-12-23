#include <bits/stdc++.h>
#include<stdlib.h>
#include <ctime>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
int score=0;
list<string> ll[3];
int n1=0,n2=0,n3=0;
int search(string s,list<string>::iterator it,int c);
void searchList(list<string>::iterator hd,int c);
int arr[3];
void showlist(list<string>::iterator hd1,list<string>::iterator hd2,list<string>::iterator hd3);
void insert()
{
    HANDLE y=GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
    int num = (rand() % (5)) + 0,x;
    int arr[]={4,4,4,16,32};
    x=arr[num];
    auto s = to_string(x);
    cout<<"insert "<<x<<endl;
	int c;
	label:
	cout<<"Enter column to be inserted: ";
    cin>>c;
    if(c<0 || c>3)
    {
        SetConsoleTextAttribute(y,6);
        cout<<"Enter valid column"<<endl;
        SetConsoleTextAttribute(y,7);
        goto label;
    }
    list <string> :: iterator it=ll[c-1].begin();
    list <string> :: iterator hd1=ll[0].begin();
    list <string> :: iterator hd2=ll[1].begin();
    list <string> :: iterator hd3=ll[2].begin();
    SetConsoleTextAttribute(y,2);
    switch(c)
    {
        case 1:
            if(n1>3)
            {
                cout<<"\nCOLUMN FULL!! CANOT BE INSERTED"<<endl;
                goto label;
                cout<<n1;
            }
            n1++;
            break;
        case 2:
            if(n2>3)
            {
                cout<<"\nCOLUMN FULL!! CANOT BE INSERTED"<<endl;
                goto label;
                cout<<n2;
            }
            n2++;
            break;
        case 3:
            if(n3>3)
            {
                cout<<"\nCOLUMN FULL!! CANOT BE INSERTED"<<endl;
                goto label;
                cout<<n3;
            }
            n3++;
            break;
    }
    SetConsoleTextAttribute(y,7);
    if(search(s,it,c)==1)
        {
    while(it!=ll[c-1].end() && *it==" ")
    {
        it++;

    }
    it--;
    *it=s;
    }
    showlist(hd1,hd2,hd3);


}
int search(string s,list<string>::iterator it,int c)
{
    HANDLE z=GetStdHandle(STD_OUTPUT_HANDLE);
    int ff=0;
    while(it!=ll[c-1].end() && *it==" ")
    {
        ff++;
        it++;
    }
    it--;
    if(ff!=4)
    {
        it++;
    }

    if(*it==s)
    {
        score+=5;
        switch(c)
    {
        case 1:
            n1--;
            break;
        case 2:
            n2--;
            break;
        case 3:
            n3--;
            break;
    }
        list <string> :: iterator hd1=ll[0].begin();
        list <string> :: iterator hd2=ll[1].begin();
        list <string> :: iterator hd3=ll[2].begin();
        list <string> :: iterator it11=ll[c-1].begin();

        it--;
        *it=s;
        showlist(hd1,hd2,hd3);
        SetConsoleTextAttribute(z,5);
        cout<<"\nAFTER MERGING:"<<endl;
        SetConsoleTextAttribute(z,7);
        *it=" ";
        it++;
        int num=2*stoi(s);
        *it= to_string(num);
        searchList(it11,c);

        return 0;
    }
    return 1;
}
int isAlpha(string s)
{
    int f=0;
    int n=s.length();
    char arr[n+1];
    strcpy(arr,s.c_str());
    for(int i=0;i<n;i++)
    {
        if(!(isalpha(arr[i])))
        {
            cout<<"return fsle";
            return false;


        }
        cout<<arr[i];
    }
cout<<"return true";
        return true;


}
void searchList(list<string>::iterator hd, int c)
{

    list<string>::iterator hd1=hd;
    hd1++;
    int temp=0;
    while(hd1!=ll[c-1].end() && temp<4)
    {

        if(*hd==*hd1 && (*hd1!=" "))
        {
            score+=5;
             switch(c)
    {
        case 1:
            n1--;
            break;
        case 2:
            n2--;
            break;
        case 3:
            n3--;
            break;
    }


            string s1=*hd1;
            int num1=2*stoi(s1);
            *hd1= to_string(num1);
            *hd=" ";

        }
        hd++;
        hd1++;
        temp++;
    }

}
void showlist(list<string>::iterator hd1,list<string>::iterator hd2,list<string>::iterator hd3)
{
    HANDLE a=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(a,1);
    cout << "\n--------------------\n";
    for(int j=0;j<4;j++)
    {
    cout  << "|  " <<*hd1<< "  |"<< "  " <<*hd2<< "  |"<< "  " <<*hd3<< "  |";
    hd1++;hd2++;hd3++;
    cout << "\n--------------------\n";

    }
    SetConsoleTextAttribute(a,7);


}
int main()
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    system("COLOR 09");
    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"                                       ******* *    *    *****   *      **      *      *        *******  *        *   *      *      ***      \n";
    cout<<"                                       *       *    *    *       *     *  *     * *    *        *        *        *   * *    *     *          \n";
    cout<<"                                       *       *    *    *       *    *    *    *  *   *        *        *        *   *  *   *    *           \n";
    cout<<"                                       *****   *    *    *****   *    *    *    *   *  *        *****    *        *   *   *  *    *           \n";
    cout<<"                                       *       *    *        *   *    *    *    *    * *        *        *        *   *    * *    *   ***       \n";
    cout<<"                                       *       *    *        *   *     *  *     *     **        *        *        *   *     **     *  * *      \n";
    cout<<"                                       *       ******   ******   *      **      *      *        *        *******  *   *      *      *** *      \n";
    cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n";
    char a;
    cout<<"Enter any character to Start the Game!"<<endl;
    cin>>a;
    system("cls");
    system("COLOR 04");
    cout<<endl;
    cout<<endl;
    cout<<"**********************************INSTRUCTIONS*******************************************"<<endl;
    cout<<endl;
    cout<<"1.  Guide the number to the best landing spot by selecting columns."<<endl;
    cout<<"2.  Adjacent blocks (VERTICALLY) with the same number form a single block whose value is doubled."<<endl;
    cout<<"3.  Making doubles will free up more space on the board."<<endl;
    cout<<"4.  Continue to make doubles until you run out of moves."<<endl;
    cout<<"Can you set a new personal record?"<<endl;
    cout<<endl;
    cout<<"**********************************LET'S BEGIN!*******************************************"<<endl<<endl;
    SetConsoleTextAttribute(h,1);
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<4;j++)
       {
            ll[i].push_back(" ");
       }
   }
    list <string> :: iterator hd1=ll[0].begin();
    list <string> :: iterator hd2=ll[1].begin();
    list <string> :: iterator hd3=ll[2].begin();
   cout << "\n--------------------\n";
    for(int j=0;j<4;j++)
    {
    cout  << "|  " <<*hd1<< "  |"<< "  " <<*hd2<< "  |"<< "  " <<*hd3<< "  |";
    hd1++;hd2++;hd3++;
    cout << "\n--------------------\n";
    }

    SetConsoleTextAttribute(h,3);
          cout<<"             |----|"<<endl;
     if(score<10)
     cout<<"Your Score : | "<<score<<"  |"<<endl;
     cout<<"             |----|"<<endl;
    SetConsoleTextAttribute(h,7);
    while(n1!=4 || n2!= 4 || n3!=4)
     {insert();
     SetConsoleTextAttribute(h,3);
     cout<<"             |----|"<<endl;
     if(score<10)
     cout<<"Your Score : | "<<score<<"  |"<<endl;
     if(score>9)
     cout<<"Your Score : | "<<score<<" |"<<endl;
     cout<<"             |----|"<<endl;

    SetConsoleTextAttribute(h,7);
     }
     SetConsoleTextAttribute(h,6);
     cout<<"**************GAME OVERRRRRRRRRRRRRRRRRR!******************"<<endl;

   return 0;
}
