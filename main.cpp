//
//  main.cpp
//  The Problem
//
//  Created by Diyaa Hamdy on 01/03/2023.
//

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class point
{
private:
    float x;
    float y;

public:
   point()
    {
        x=0;
        y=0;
    }
   point(float x1, float y1)
    {
        x=x1;y=y1;
    }
    void setX(float n)
    {
        x = n;
    }
    void setY(float n)
    {
        y = n;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    void display()
    {
        cout<< "(" << x << ", " << y<< ")" << endl;
    }
    float distance(point p)
    {
        return sqrt(pow(x-p.getX(),2)+pow(y-p.getY(),2));
    }
    
};



point calcCenter(point *C, int n)
{
    point p1;
    float totalX=0,totalY=0;
    for(int i=0;i<n;i++)
    {
        p1 = *(C+i);
        totalX += p1.getX();
        totalY += p1.getY();
    }
    p1.setX(totalX/n);
    p1.setY(totalY/n);
    return p1;
}

void calcClosest(point *A, point *B, int n, point p)
{
    point a = calcCenter(A,n);
    point b = calcCenter(B,n);
    
    float distA = a.distance(p);
    float distB = b.distance(p);
    
    if(distA<distB)
        cout<<"Cluster A is closer to point P than cluster B"<<endl<<endl;
    else if(distB<distA)
        cout<<"Cluster B is closeer to point P than cluster A"<<endl<<endl;
    else
        cout<<"Both clusters are equidistant from point P"<<endl<<endl;
}


int main()
{
    int n=20;
    point *a,*b;
    a = new point[n];
    b = new point[n];
    
    srand(time(0));
    point x;
    
    for(int i=0;i<n;i++)
    {
        x.setX(rand()%20+70);
        x.setY(rand()%20+70);
        *(a+i) = x;
        x.setX(rand()%20+70);
        x.setY(rand()%20+70);
        *(b+i) = x;
    }
    
    point *p1;
    int n1=20;
    p1 = new point[n1];
    
    for(int i=0;i<n1;i++)
    {
        x.setX(rand()%20+70);
        x.setY(rand()%20+70);
        *(p1+i) = x;
    }
    
    for(int i=0;i<n1;i++)
    {
        cout << "Point: ";
        (*(p1+i)).display();
        calcClosest(a,b,n,x);
    }
}
