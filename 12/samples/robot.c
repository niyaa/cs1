#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50

//x,y,vx,vy,ax,ay
double acc()
{
  return (double)rand()/(double)RAND_MAX*10.0;//G*M*m/(r*r)
}


int main(){

  double x[N], y[N], vx[N], vy[N], ax[N], ay[N];//should have a name, a color, 
  //Initialize positions, velocities and acc
  
  double dt=0.001;
  
  for(int i=0; i<1000; ++i)
  {
    //loop over all the elements
    ax=acc();
    ay=acc();
    
    vx += dt*ax;
    vy += dt*ay;
    
    x += dt * vx;
    y += dt * vy;
  }
    
  
}
