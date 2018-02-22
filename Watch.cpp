/***
    Muntasher Morshed
    Fall, 2014
    Email: ijeshourav1409@gmail.com
    Dept. of CSE
    University of Asia Pacific
                              ***/
/***    H E A D E R   F I L E S     ***/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

/*
  a ------------- b
    |           |
  c ------------- d
    |           |
  e \           / f
     \         /
      \       /
       \     /
        \   /
         \ /
     g   / \ h
        /   \
       /     \
      /       \
     /         \
  i /           \ j
    |           |
  k ------------- l
    |           |
  m ------------- n

*/



/***    C O D E   S T A R T S   H E R E     ***/

/*  Body of the watch  */
void shape()
{
    line(400,250,600,250);      //AB
    line(400,270,600,270);      //CD

    line(400,250,400,270);      //AC
    line(600,250,600,270);      //BD
    line(400,530,400,550);      //KM
    line(600,530,600,550);      //LN

    line(400,270,400,300);      //CE
    line(600,270,600,300);      //DF

    line(400,300,490,400);      //EG
    line(600,300,510,400);      //FH
    line(490,400,400,500);      //GI
    line(510,400,600,500);      //HJ

    line(400,500,400,530);      //IK
    line(600,500,600,530);      //JL

    line(400,530,600,530);      //KL
    line(400,550,600,550);      //MN
}

/*  balls or sands??    */
void balls_initial()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);

    circle(460,350,8);
    circle(480,350,8);
    circle(500,350,8);
    circle(520,350,8);
    circle(540,350,8);
}

void balls_1()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);

    circle(460,350,8);
    circle(480,350,8);
    circle(500,350,8);
    circle(520,350,8);
}

void balls_2()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);

    circle(460,350,8);
    circle(480,350,8);
    circle(500,350,8);
}

void balls_3()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);

    circle(460,350,8);
    circle(480,350,8);
}

void balls_4()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);

    circle(460,350,8);
}

void balls_5()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
    circle(470,370,8);
}

void balls_6()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
    circle(490,370,8);
}

void balls_7()
{
    circle(500,390,8);

    circle(530,370,8);
    circle(510,370,8);
}

void balls_8()
{
    circle(500,390,8);

    circle(530,370,8);
}

void balls_9()
{
    circle(500,390,8);
}

void shape_1()
{
    circle(500,520,8);
}

void shape_2()
{
    circle(500,520,8);
    circle(520,520,8);
}

void shape_3()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
}

void shape_4()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
    circle(500,500,8);
}

void shape_5()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);

    circle(510,500,8);
}

void shape_6()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);

    circle(510,500,8);
    circle(490,500,8);
}

void shape_7()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);

    circle(510,500,8);
    circle(490,500,8);

    circle(500,480,8);
}

void shape_8()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
    circle(540,520,8);

    circle(510,500,8);
    circle(490,500,8);

    circle(500,480,8);
}

void shape_9()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
    circle(540,520,8);
    circle(460,520,8);

    circle(510,500,8);
    circle(490,500,8);

    circle(500,480,8);
}

void shape_10()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
    circle(540,520,8);
    circle(460,520,8);

    circle(510,500,8);
    circle(490,500,8);
    circle(530,500,8);

    circle(500,480,8);
}

void shape_final()
{
    circle(500,520,8);
    circle(520,520,8);
    circle(480,520,8);
    circle(540,520,8);
    circle(460,520,8);

    circle(510,500,8);
    circle(490,500,8);
    circle(530,500,8);
    circle(470,500,8);

    circle(500,480,8);
}

void shape_90_degree()
{
    line(650,300,650,500);      //AB
    line(630,300,630,500);      //CD

    line(650,300,630,300);      //AC
    line(650,500,630,500);      //BD
    line(370,300,350,300);      //KM
    line(370,500,350,500);      //LN

    line(630,300,600,300);      //CE
    line(630,500,600,500);      //DF

    line(600,300,500,390);      //EG
    line(600,500,500,410);      //FH
    line(500,390,400,300);      //GI
    line(500,410,400,500);      //HJ

    line(400,300,370,300);      //IK
    line(400,500,370,500);      //JL

    line(370,300,370,500);      //KL
    line(350,300,350,500);      //MN
}

void balls_90_deg()
{
    circle(380,490,8);
    circle(400,480,8);
    circle(420,470,8);
    circle(440,450,8);
    circle(430,430,8);

    circle(420,450,8);
    circle(400,460,8);
    circle(380,470,8);
    circle(380,450,8);
    circle(400,440,8);
}

int main()
{
    bool dbflag=false, closeflag=true;
    initwindow(1000,800,"Watch it!!!",0,0,dbflag,closeflag);

    int i,j;
    while(1)
    {
        shape();
        balls_initial();

        /*** falling 1st ball ***/
        for(i=390; i<=520; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            //cleardevice();
            shape();
            balls_1();
        }
        shape_1();

        /*** falling 2nd ball ***/
        for(i=390; i<=500; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_2();
            shape_1();
        }

        /*** moving 2nd ball ***/
        for(i=1; i<=20; i=i+5)
        {
            circle(500+i,500+i,8);
            delay(100);
            cleardevice();
            shape();
            balls_2();
            shape_1();
        }
        shape_2();

        /*** falling 3rd ball ***/
        for(i=390; i<=500; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_3();
            shape_2();
        }

        /*** moving 3rd ball ***/
        for(i=1; i<=20; i=i+5)
        {
            circle(500-i,500+i,8);
            delay(100);
            cleardevice();
            shape();
            balls_3();
            shape_2();
        }
        shape_3();

        /*** falling 4th ball ***/
        for(i=390; i<=500; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_4();
            shape_3();
        }
        shape_4();

        /*** moving 4th ball ***/
        for(i=1; i<=10; i=i+2)
        {
            circle(500+i,500,8);
            delay(100);
            cleardevice();
            shape();
            balls_4();
            shape_3();
        }
        shape_5();

        /*** falling 5th ball ***/
        for(i=390; i<=480; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_5();
            shape_5();
        }

        /*** moving 5th ball ***/
        for(i=1, j=1; i<=10; i=i+2,j=j+4)
        {
            circle(500-i,480+j,8);
            delay(100);
            cleardevice();
            shape();
            balls_5();
            shape_5();
        }
        shape_6();

        /*** falling 6th ball ***/
        for(i=370; i<=480; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_6();
            shape_6();
        }
        shape_7();

        /*** falling 7th ball ***/
        for(i=370; i<=460; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_7();
            shape_7();
        }

        /***moving 7th ball ***/
        for(i=1, j=1; i<40; i=i+4, j=j+6)
        {
            circle(500+i,460+j,8);
            delay(100);
            cleardevice();
            shape();
            balls_7();
            shape_7();
        }
        shape_8();

        /*** falling 8th ball ***/
        for(i=370; i<=460; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_8();
            shape_8();
        }

        /*** moving 8th ball ***/
        for(i=1, j=1; i<40; i=i+4, j=j+6)
        {
            circle(500-i,460+j,8);
            delay(100);
            cleardevice();
            shape();
            balls_8();
            shape_8();
        }
        shape_9();

        /*** falling 9th ball ***/
        for(i=370; i<=460; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            balls_9();
            shape_9();
        }

        /*** moving 9th ball ***/
        for(i=1, j=1; i<30; i=i+3, j=j+4)
        {
            circle(500+i,460+j,8);
            delay(100);
            cleardevice();
            shape();
            balls_9();
            shape_9();
        }
        shape_10();

        /*** falling 10th ball ***/
        for(i=370; i<=460; i=i+10)
        {
            circle(500,i,8);
            delay(100);
            cleardevice();
            shape();
            shape_10();
        }

        /*** moving 10th ball ***/
        for(i=1, j=1; i<30; i=i+3, j=j+4)
        {
            circle(500-i,460+j,8);
            delay(100);
            cleardevice();
            shape();
            shape_10();
        }
        shape_final();

        /*** moving the watch ***/
        delay(1000);
        cleardevice();
        shape_90_degree();
        balls_90_deg();

        delay(1000);
        cleardevice();
        shape();
        balls_initial();
    }

    getch();
    return 0;
}
