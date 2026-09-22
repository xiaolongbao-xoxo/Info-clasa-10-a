#include <iostream>
using namespace std;

int ogl(int x)//functia de oglindit
{
    int r = 0;
    do
    {
        r = 10 * r + x % 10;
        x =x/10;
    }
    while(x != 0);
    return r;
}

int suma_cifrelor(int y) //functia de suma a cifrelor
{ int c,s=0;
  while(y!=0)
  { c=y%10;
    s=s+c;
    y=y/10;
  }
 return s; 
    
}
int main(){
    int n , m;
    cin >> n>>m;
    cout<<ogl(n)<<" "<<ogl(m)<<endl;
    cout << ogl(n)+ogl(m)<<endl;
    cout<<suma_cifrelor(n);
    //pentru functiile de int-> folosim return ca sa returnam valoarea care vrem sa o calculam(exemplu suma)
    //pentru afisare directa folosim void
    return 0;
}