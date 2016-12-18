//
//  main.cpp
//  labirinth
//
//  Created by Даниил Яныгин on 11.12.16.
//  Copyright © 2016 Даниил Яныгин. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <CoreFoundation/CoreFoundation.h>
#include <thread>


#include "AudioPlayer.h"

using namespace std;



void music()
{
    const char *fn = "piano.mp3";
    
    AudioPlayer* ap = AudioPlayer::file(fn);
    
    if(!ap) {
        std::cerr << "Error loading audio" << std::endl;
    }
    
    ap->play();
    
    char indic[] = { '|', '/', '-', '\\' };
    int i = 0;
    do {                                               // 5
     //        std::cout << "Loop." << std::endl;
     CFRunLoopRunInMode (kCFRunLoopDefaultMode,0.25,false);
     
     
     
     
     
     } while (ap->isPlaying());
    
}


int main() {
    
    srand (time(NULL));
    ifstream fin("/Users/Bober/Desktop/C++/lab.txt");
    const int N=255;
    char matrix[N][N];
    //int i=0;
    for(int i=0;i<=37;i++){
        for (int j=0;j<54;j++){
            fin>> matrix[i][j];
        }
    }
    
    thread mus (music);
    
        int y=7, x=8;
    matrix[y][x]='V';
    int yb=30, xb=45;
    matrix[yb][xb]='0';
    int yg=35, xg=45;
    matrix[yg][xg]='0';
    int yo=1, xo=1;
    matrix[yo][xo]='0';
    cout << "WELCOME IN EXTRA MEGA HARD AND IMPOSSIBLE LABIRINTH 'PROSTI ROST' " << endl;
    cout << "TRY YOUR BEST TO FIND 3 KEYS('K') AND REACH FIN" << endl;
    cout << "U R 'V'" << endl;
    cout << "YOUR MAIN ENEMY IS '0', AND ALWAYS REMEMBER THAT HE'S NEAR" << endl;
    cout << "ALSO U CAN ENTER 'm' AND SEE ALL MAP, BUT REMEMBER THAT EVIL DON'T SLEEP " << endl;
    cout << "TRY TO USE 'T' OR 'S' ON THE MAP WHILE ESCAPING" << endl;
    cout << "SO NOW ENTER THE LEVEL FROM 1 TO 10" << endl;
    int lvl;
    cin >> lvl;
    lvl=11-lvl;
    int hp=3;
    int k=0;
    while(true)
    {
        int a = getchar();
        if (a=='a')
        {
            matrix[y][x]='O';
            x--;
            if (matrix[y][x]=='#'){
                x++;
                matrix[y][x]='V';
            }
            else{
                if (matrix[y][x]=='T'){
                    int tp;
                    tp=rand()%2;
                    if(tp==0){
                        y=y+4;
                    }
                    if(tp==1){
                        x=x+4;
                    }
                    matrix[y][x]='V';
                }
                else{
                    if (matrix[y][x]=='S'){
                        x=24;
                        y=1;
                        matrix[y][x]='V';
                    }
                    else{
                        if (matrix[y][x]=='K'){
                            k++;
                            matrix[y][x]='V';
                        }
                        else {
                            matrix[y][x]='V';
                        }
                    }
                }
            }
                    }
        if (a=='w')
        {
            matrix[y][x]='O';
            y--;
            if (matrix[y][x]=='#'){
                y++;
                matrix[y][x]='V';
            }
            else{
                if (matrix[y][x]=='T'){
                    int tp;
                    tp=rand()%2;
                    if(tp==0){
                        y=y+4;
                    }
                    if(tp==1){
                        x=x+4;
                    }
                    matrix[y][x]='V';
                }
                else{
                    if (matrix[y][x]=='S'){
                        x=24;
                        y=1;
                        matrix[y][x]='V';
                    }
                    else{
                        if (matrix[y][x]=='K'){
                            k++;
                            matrix[y][x]='V';
                        }
                        else {
                            matrix[y][x]='V';
                        }
                    }
                }
            }

        }
        if (a=='d')
        {
            matrix[y][x]='O';
            x++;
            if (matrix[y][x]=='#'){
                x--;
                matrix[y][x]='V';
            }
            else{
                if (matrix[y][x]=='T'){
                    int tp;
                    tp=rand()%2;
                    if(tp==0){
                        y=y+4;
                    }
                    if(tp==1){
                        x=x+4;
                    }
                    matrix[y][x]='V';
                }
                else{
                    if (matrix[y][x]=='S'){
                        x=24;
                        y=1;
                        matrix[y][x]='V';
                    }
                    else{
                        if (matrix[y][x]=='K'){
                            k++;
                            matrix[y][x]='V';
                        }
                        else {
                            matrix[y][x]='V';
                        }
                    }
                }
            }
            
        }
        if (a=='s')
        {
            matrix[y][x]='O';
            y++;
            if (matrix[y][x]=='#'){
                y--;
                matrix[y][x]='V';
            }
            else{
                if (matrix[y][x]=='T'){
                    int tp;
                    tp=rand()%2;
                    if(tp==0){
                        y=y+4;
                    }
                    if(tp==1){
                        x=x+4;
                    }
                    matrix[y][x]='V';
                }
                else{
                    if (matrix[y][x]=='S'){
                        x=24;
                        y=1;
                        matrix[y][x]='V';
                    }
                    else{
                        if (matrix[y][x]=='K'){
                            k++;
                            matrix[y][x]='V';
                        }
                        else {
                            matrix[y][x]='V';
                        }
                    }
                }
            }
            
        }
        system ("clear");
        int RB;
        RB=rand()%lvl;
        if (a=='m'){
            RB=1;
        }
        if(RB==1){
            char b;
            if (xb>x){
                b='a';
            }
            if (xb<x){
                b='d';
            }
            else{
                if (yb<y){
                    b='s';
                }
                if (yb>y){
                    b='w';
                }
            }
        
            if (b=='a'){
                matrix[yb][xb]='O';
                xb--;
                matrix[yb][xb]='0';
            
            }
            if (b=='w'){
                matrix[yb][xb]='O';
                yb--;
                matrix[yb][xb]='0';
            }
            if (b=='d'){
                matrix[yb][xb]='O';
                xb++;
                matrix[yb][xb]='0';
            }
            if (b=='s'){
                matrix[yb][xb]='O';
                yb++;
                matrix[yb][xb]='0';
            }
        }
        int RO;
        RO=rand()%lvl;
        if (a=='m'){
            RO=1;
        }
        if(RO==1){
            char o;
            if (xo>x){
                o='a';
            }
            if (xo<x){
                o='d';
            }
            else{
                if (yo<y){
                    o='s';
                }
                if (yo>y){
                    o='w';
                }
            }
            
            if (o=='a'){
                matrix[yo][xo]='O';
                xo--;
                matrix[yo][xo]='0';
                
            }
            if (o=='w'){
                matrix[yo][xo]='O';
                yo--;
                matrix[yo][xo]='0';
            }
            if (o=='d'){
                matrix[yo][xo]='O';
                xo++;
                matrix[yo][xo]='0';
            }
            if (o=='s'){
                matrix[yo][xo]='O';
                yo++;
                matrix[yo][xo]='0';
            }
        }
        if (y>35){
            int RG;
            RG=rand()%lvl-1;
            if (a=='m'){
                RG=1;
            }
            if(RG==1){
                char g;
                if (xg>x){
                    g='a';
                }
                if (xg<x){
                    g='d';
                }
                else{
                    if (yg<y){
                        g='s';
                    }
                    if (yg>y){
                        g='w';
                    }
                }
                if (g=='a'){
                    matrix[yg][xg]='O';
                    xg--;
                    matrix[yg][xg]='0';
                    
                }
                if (g=='w'){
                    matrix[yg][xg]='O';
                    yg--;
                    matrix[yg][xg]='0';
                }
                if (g=='d'){
                    matrix[yg][xg]='O';
                    xg++;
                    matrix[yg][xg]='0';
                }
                if (g=='s'){
                    matrix[yg][xg]='O';
                    yg++;
                    matrix[yg][xg]='0';
                }
            }
        }
        
        
        
        if (a=='m'){
            for(int i=0;i<=37;i++){
                for (int j=0;j<54;j++){
                    if (matrix[i][j]=='O'){
                        cout << ' ';
                    }
                    else{
                        cout << matrix[i][j];
                    }
                }
                cout << endl;
            }
        }
        else{
            if (((xb==x)&&(yb==y))||((x==xg)&&(y==yg))||((x==xo)&&(y==yo))){
                cout << "-hp" << endl;
                hp--;
                y=7;
                x=45;
            }
            if (hp<0){
                system ("clear");
                cout << "U LOSE" << endl;
                return 0;
            }
            if ((x==54)&&(y==36)&&(k>=3)){
                system("clear");
                cout << "U WON" << endl;
                return 0;
            }
            else{
                for(int i=y-4;i<y+4;i++){
                    for (int j=x-7;j<x+7;j++){
                        if (matrix[i][j]=='O'){
                            cout << ' ';
                        }
                        else{
                            cout << matrix[i][j];
                        }
                    }
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}
