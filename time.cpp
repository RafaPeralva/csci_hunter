/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: project Lab 10B
change in time
*/
#include <iostream>
#include <cmath>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};
enum DayTime {MORNING, DAYTIME, EVENING};

class Time { 
    public:
        int h;
        int m;
};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

void printTime(Time time); //called function prototype
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
void printMovie(Movie mv);
void printTimeSlot(TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 

int main(){
    //Time now = {10,20};
    //cout<< now.h<<":"<<now.m<<endl;
    //printTime(now);
    /* lab 10 A
    int h1,h2,m1,m2;
    cout<< "Enter first time: "<<endl;
    cin>> h1>>m1;
    cout<<"Enter second time: "<<endl;
    cin>>h2>>m2;
    Time first = {h1, m1};
    Time second = {h2, m2};
    //printTime(first);
    cout<< endl;
    //printTime(second);
    cout <<"The first time is "<< minutesSinceMidnight(first)<< " minutes since midnight."<< endl;
    cout <<"The second time is "<< minutesSinceMidnight(second)<< " minutes since midnight."<< endl;
    cout <<"The times are "<< minutesUntil(first, second)<< " minutes apart."<< endl;
    
    lab 10B starts
    int h, m, p;
    cout <<"Enter time and minutes passed: "<<endl;
    cin>> h>> m >> p;
    Time t= {h,m};
    addMinutes(t, p);
    */
   //lab 10C
   Movie m = {"Back to the Future", COMEDY, 116};
   Time t = {9,15};
   TimeSlot tim = {m, t};
   Movie m2 = {"Back to the Future", COMEDY, 116};
   Time t2 = {10,0};
   TimeSlot tim2 = {m2, t2};
   cout << timeOverlap(tim, tim2);
   //printTimeSlot (scheduleAfter(tim, m));
    
    
    return 0;
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time){
    int x = (time.h * 60)+ time.m;
    return x;


}
int minutesUntil(Time earlier, Time later){
    int hour = later.h - earlier.h;
    hour = hour*60;
    int min = later.m - earlier.m;
    int hm= hour + min;
    return hm;


}
Time addMinutes(Time time0, int min){
    int h;
    h = time0.h;
    int nmin = time0.m;
    int minamin = nmin + min;
    int vezes;
    if (min>60){
        vezes= minamin/60;
        h+= minamin/60;
        min=(min - (vezes*60) ) + nmin;
    }
    else if (min<60){
        if (minamin<60){
            min=minamin;
        }
        else if (minamin>60){
            h+= minamin/60;
            min= (min + nmin) - 60;

        }
        else if (minamin=60){
            h+= minamin/60;
            min= 0;

        }
    }
    Time nt= {h, min};
    return nt;
    }


void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time end;
    printMovie(ts.movie);
    cout<<" [starts at ";
    printTime(ts.startTime);
    cout<<", ends by ";
    end = addMinutes(ts.startTime, ts.movie.duration);
    printTime(end);
    cout<<"]";
    
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot next;
    next.movie=nextMovie;
    next.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return next;

    }
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    bool overlap;
    if (minutesUntil(ts1.startTime, ts2.startTime)==0){
        overlap = true;
    }
    else if (minutesUntil(ts1.startTime, ts2.startTime)>0){
        if (minutesUntil(ts1.startTime, ts2.startTime)<(ts1.movie.duration)){
            overlap = true;
        }
        else {
            overlap = false;
        }

    }
    else if (minutesUntil(ts2.startTime, ts1.startTime)>0){
        if (minutesUntil(ts2.startTime, ts1.startTime)<(ts2.movie.duration)){
            overlap = true;
        }
        else {
            overlap = false;
        }
    }
    return overlap;
}



