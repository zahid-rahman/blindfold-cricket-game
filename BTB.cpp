
/*
   Bhattacharjee Susmoy (15-28966-1)
   Rahman Md.Zahid (15-28982-1)
   Naim SM Golam Rabbani (15-29456-1)

*/
#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<cstdlib>
#include<time.h>
using namespace std;

void shield();
void menu();
void introduction();
void information();
void Team();
void Name1();
void Toss();


class Cricket
{
public :
    //virtual void set() = 0;
   protected :
       int run;
       int run2;
       int wicket;
       int over;
       int player;
};

class Team2;

class Team1 : public Cricket
{
   private :
       string name1;
       int count1;
   public :
       friend void game(Team1 a,Team2 b);
       //friend int batting(Team1 a,Team2 b);
        Team1()
       {
           count1 = 0;
           run = 0;
           wicket = 0;
           player = 0;
       }
       void setrun(int r)
       {
           count1 = count1 + r;
       }
       void setname(char* ar)
       {
           name1 = ar;
       }
       void setover(int o)
       {
           over = o;
       }
       void setplayer(int p)
       {
           player = p;
       }
};



class Team2 : public Cricket
{
private :
    string name2;
    int count2;
public :
    Team2()
    {
        count2 = 0;
        run = 0;
        wicket = 0;
        player = 0;
    }
    friend void game(Team1 a,Team2 b);
    //friend int batting(Team1 a,Team2 b);

    void setname(char* br)
        {
            name2 = br;
        }
    void setover(int o)
       {
           over = o;
       }
       void setplayer(int p)
       {
           player = p;
       }
        void setrun(int r)
       {
           count2 = count2 + r;
       }
};



int main()
{
    system("color a");
    Team1 t1;
    Team2 t2;
    shield();

    menu();

    //introduction(); // first running part
    //system("cls");
     Team(); //selection of team
//    Name1();

    cout << "Player 1 Enter your team name : ";
    char name1[100];
    cin >> name1;
    t1.setname(name1);

    cout << "Player 2 Enter your team name : ";
    char name2[100];
    cin >> name2;
    t2.setname(name2);

    cout << "\nHow many overs do you want to play : ";
    int o;
    cin >> o;
    t1.setover(o);
    t2.setover(o);

    cout << "\n& With how many players do you want to continue : ";
    int p;
    cin >> p;
    t1.setplayer(p);
    t2.setplayer(p);

    game(t1,t2);


    //cout << a.
}


void shield()
{
    system("color a");
    char sh[] = "         SHIELD";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t    ";

    for(int s=0;s<sh[s];s++)
    {
        Sleep(300);
        cout << sh[s];
    }

    Sleep(1000);
      Sleep(1000);
        Sleep(1000);
          Sleep(1000);
          system("cls");
}

void menu()
{
    cout << "Menu\n\n";

    int q;
    cout << "1.Start The game .\n2.Information\n\n";

    cout << "\n\nchoose - ";
    cin >> q;

    if(q==1)
    {
        introduction();
        system("cls");
    }
    else if(q==2)
    {

        information();
        //system("cls");
    }
}

void introduction()
{
    system("cls");
    system("color a");
    char ar[] = "Hello everyone";
    char br[] = "Today you all going to enjoy";
    char cr[] = "Beat The Bat";
    char dr[] = "Let's play it";

    cout << endl << endl << endl;
    cout << "\t\t\t\t";
    for(int a=0;a<ar[a];a++)
    {
        Sleep(200);
        cout << ar[a];
    }
    cout << endl << "\t\t\t";
        for(int b=0;b<br[b];b++)
        {
            Sleep(200);
            cout << br[b];
        }
     cout <<endl << "\t\t\t        ";

     for(int c=0;c<cr[c];c++)
     {
         Sleep(250);
         cout << cr[c];
     }

     cout << endl << "\t\t\t\t";

     for(int d=0;d<dr[d];d++)
     {
         Sleep(200);
         cout << dr[d];
     }

     Sleep(1000);
     cout << endl << endl;

     system("cls");
}

void Team()
{
    cout << "\n\n\n\t\t\t\t";
    char ar[] = "Selection of Teams - ";

    for(int a=0;a<ar[a];a++)
    {
        Sleep(250);
        cout << ar[a];
    }
    cout << "\n\n\n";
}

void game(Team1 a,Team2 b)
{
    system("cls");
   cout << "\t\t\t\t    " << a.name1 << " vs " << b.name2 << endl<< endl;
    //system("cls");
     char ar[] = "Now who will bat first ?";
     char br[] = "Let's toss";

     for(int a=0;a<ar[a];a++)
     {
         Sleep(200);
         cout << ar[a];
     }
     cout << endl;

     for(int b=0;b<br[b];b++)
     {
         Sleep(200);
         cout << br[b];
     }
     cout << endl << endl;

     cout << a.name1 << " First you choose your opinion between 0 & 1 -  ";
     int s;
     cin >> s;

  //  cout << b.name2 << " choose your opinion between 0 & 1 - ";
     int k;
    // cin >> k;

     if(s == 0)
     {
        k = 1;
     }

     else if(s == 1)
     {
         k = 0;
     }

     srand(time(0));

     int x = (rand()%2);
    // srand(time(0));

     if(x == s)
     {
         cout<< a.name1 << " will bat first\n\n";

         system("pause");
         system("cls");

         cout << "\t\t" << a.name1 << " you got " << a.over << " over & " << a.player << " player" << endl<<endl;
         //if(x == s )
         //{
             //cout<< "\t\t\t\t"<<b.name2<< " need "<<a.run +1<< " to win the match"<<endl;
         //}
         cout << "Wish you all the best...." << endl << endl;
         system("pause");
         system("cls");
         int k=0;

         for(int o=0;o<a.over;o++)
         {
             srand(time(0));
             for(int o1=0;o1<6;o1++)
             {
                 int r = (rand()%7);
                 cout << "player " << k+1 << " - ";
                 char p;
                 cin >> p;
                 if(r == 1 || r == 3)
                 {
                     cout << "\nDot ball\n";
                     r = 0;
                 }
                 else if(r == 5)
                 {
                     cout << "\nNo ball + 4\n";
                     o1 = o1 - 1;
                 }
                 else if(r == 0)
                 {
                     r = 0;
                     cout << "\nIt's a wicket\n";
                     a.wicket = a.wicket + 1;
                     k = k+1;
                     if(a.wicket == a.player)
                     {
                         break;
                     }

                 }
                 cout << "\nBall " << o1+1 << " - \t" <<"Run = "<< r << endl << endl;
                 a.run = a.run + r;
             }

             cout << "Run - " << a.run << " & wicket - " << a.wicket << endl;
             Sleep(1000);
             Sleep(1000);
             Sleep(1000);
             Sleep(1000);

             a.setrun(a.run);
             system("cls");
             if(o == a.over)
             {
                 break;
             }
         }

         cout << "\t\t\t\tNow it's time for " << b.name2 << endl;

         cout << "\t\t\t\t" << b.name2 << " you got " << b.over << " over & " << b.player << " player" << endl;
         cout<< "\t\t\t"<<b.name2<< " need "<<a.run +1<< " to win the match"<<endl;
         cout << "Wish you all the best...." << endl << endl;
         system("pause");
         system("cls");
         int k1=0;

         for(int o=0;o<b.over;o++)
         {
             srand(time(0));
             for(int o1=0;o1<6;o1++)
             {
                 int r = (rand()%7);
                 cout << "player " << k1+1 << " - ";
                 char p;
                 cin >> p;
                 if(r == 1 || r == 3)
                 {
                     cout << "\nDot ball\n";
                     r = 0;
                 }
                 else if(r == 5)
                 {
                     cout << "\nNo ball + 4\n";
                     o1 = o1 - 1;
                 }
                 else if(r == 0)
                 {
                     r = 0;
                     cout << "\nIt's a wicket.\n";
                     b.wicket = b.wicket + 1;
                     k1 = k1+1;
                     //Sleep(1000);
                     if(b.wicket == b.player)
                     {
                         break;
                     }
                 }
                 cout << "\nBall " << o1+1 << " - \t" << "Run = " << r << endl << endl;
                 b.run = b.run + r;

             if(b.run > a.run)
             {
                 break;
             }
             }

             cout << "Run - " << b.run << " & wicket - " << b.wicket << endl;
             Sleep(1000);
             Sleep(1000);

             b.setrun(b.run);
             system("cls");
             if(o == b.over)
             {
                 break;
             }
         }
     }
     else
     {
         cout << endl << endl << b.name2 << " will bat first\n\n";

         system("pause");
         system("cls");


         cout << "\t\t" << b.name2 << " you got " << b.over << " over & " << b.player << " player" << endl;
        // if(x !=s )
         //{
             // cout<< "\t\t\t\t"<<b.name2<< " need "<<a.run +1<< " to win the match"<<endl;
        // }

         cout << "Wish you all the best...." << endl << endl;
         system("pause");
         system("cls");
         int k1=0;

         for(int o=0;o<b.over & k1 <b.player;o++,k1++)
         {
             srand(time(0));
             for(int o1=0;o1<6;o1++)
             {
                 int r = (rand()%7);
                 cout << "player " << k1+1 << " - ";
                 char p;
                 cin >> p;
                 if(r == 1 || r == 3)
                 {
                     cout << "\nDot ball\n";
                     r = 0;
                 }
                 else if(r == 5)
                 {
                     cout << "\nNo ball\n";
                     o1 = o1 - 1;
                 }
                 else if(r == 0)
                 {
                     r = 0;
                     cout << "\nIt's a wicket.\n";
                     b.wicket = b.wicket + 1;
                     k1 = k1 + 1;
                     //Sleep(1000);
                     if(b.wicket == b.player)
                     {
                         break;
                     }
                 }
                 cout << "\nBall " << o1+1 << " - \t" << r << endl << endl;
                 b.run = b.run + r;
             }

             cout << "Run - " << b.run << " & wicket - " << b.wicket << endl;
             Sleep(1000);
             Sleep(1000);

             b.setrun(b.run);
             system("cls");
             if(o == b.over)
             {
                 break;
             }
         }

              cout << "\t\t\tNow it's time for " << a.name1 << endl;

                 cout << "\t\t" << a.name1 << " you got " << a.over << " over & " << a.player << " player" << endl;
                 cout<< "\t\t"<<a.name1<< " need "<<b.run +1<< " to win the match"<<endl;
         cout << "Wish you all the best...." << endl << endl;
         system("pause");
         system("cls");
         int k=0;

         for(int o=0;o<a.over & k <a.player;o++,k++)
         {
             srand(time(0));
             for(int o1=0;o1<6;o1++)
             {
                 int r = (rand()%7);
                 cout << "player " << k+1 << " - ";
                 char p;
                 cin >> p;
                 if(r == 1 || r == 3)
                 {
                     cout << "\nDot ball\n";
                     r = 0;
                 }
                 else if(r == 5)
                 {
                     cout << "\nNo ball\n";
                     o1 = o1 - 1;
                 }
                 else if(r == 0)
                 {
                     r = 0;
                     cout << "\nIt's a wicket\n";
                     a.wicket = a.wicket + 1;
                     k = k + 1;
          //           Sleep(1000);
            //         break;
                     if(a.wicket == a.player)
                     {
                         break;
                     }
                 }
                 cout << "\nBall " << o1+1 << " - \t" << r << endl << endl;
                 a.run = a.run + r;
                  if(a.run > b.run)
             {
                 break;
             }
             }

             cout << "Run - " << a.run << " & wicket - " << a.wicket << endl;
             Sleep(1000);
             Sleep(1000);

             a.setrun(a.run);
             system("cls");
             if(o == a.over)
             {
                 break;
             }
         }

     }

     system("cls");
     //cout << a.count;
      int g,f;
     string nam1,nam2;
     g = a.count1;
    // cout << a;
     f = b.count2;

  //  if(g > f)
    //{
        Sleep(1000);
        system("cls");
        //cout << a.name1  << " wins\n\n";
        if(g>f)
        {
            cout<< "\t\t\t\t SCORE BOARD"<<endl;
             cout<<a.name1<<" "<<g<< " / "<<a.wicket<<endl;
            cout<<b.name2<<" "<<f<< " / "<<b.wicket<<endl<<endl;

            char bc[]= "\t\t               CONGRATULATION";

                for(int z = 0 ; z<bc[z] ; z++)
                {
                    Sleep(250);
                    cout<<bc[z];



                }
               cout<<endl;


            cout<<"\t\t\t\t   "<<a.name1 << " wins"<<endl;

        }
        else if(g<f)
        {
            cout<< "\t\t\t\t SCORE BOARD"<<endl;
             cout<<a.name1<<" "<<g<< " / "<<a.wicket<<endl;
            cout<<b.name2<<" "<<f<< " / "<<b.wicket<<endl<<endl;
                char bc[]= "\t\t               CONGRATULATION";

                for(int z = 0 ; z<bc[z] ; z++)
                {
                    Sleep(250);
                    cout<<bc[z];



                }
               cout<<endl;



            cout<<"\t\t\t\t   "<<b.name2 << " wins"<<endl;




        }
        else if(g == f)
        {
            cout<< "\t\t\tSCORE BOARD"<<endl;
            cout<<a.name1<<" "<<g<< " / "<<a.wicket<<endl;
            cout<<b.name2<<" "<<f<< " / "<<b.wicket<<endl<<endl;

            cout<< "match drawn"<<endl;

        }


  //  }
}

void information()
{
    system("cls");
    system("color 4");
    cout << "Batting - \n\n";
    system("color 3");
    cout << "While players will bat,then input option will rise.Input same number as player\n was defined.";
    cout << "\t \n\n\nEX : player 1 will input - 1 & player 2 will input - 2 \n\n\njust like that batsman will input same number that was defined before.\n\n";

    system("color 4");
    cout << "\nScore -\n\n";
    system("color 3");
    cout << "In this game 2,4,6 will count the main run/score . In case if the score will 0/zero then\nthe Batsman will declare out.\n\n";

    cout << "\n\n\nTo continue the game press <s> : ";
    char s;
    cin >> s;
    if(s == 's')
    {
        introduction();
    }
}

