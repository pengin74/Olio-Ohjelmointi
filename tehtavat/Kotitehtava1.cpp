#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    srand(time(0));

    int satunnainenLuku = rand()%20;
    int kayttajanNumero = -1;

    while(kayttajanNumero != satunnainenLuku)
    {
       cout << "Arvaa luku 0-19 valilta" << endl;
       cin >> kayttajanNumero;
       
       if (kayttajanNumero < satunnainenLuku)
       {
        cout << "Luku on suurempi kuin " << kayttajanNumero << endl;
       }

       else if (kayttajanNumero > satunnainenLuku)
       {
        cout << "Luku on pienempi kuin " << kayttajanNumero << endl;
       }
       
       else
       {
        cout << "Oikea vastaus" << endl;
       }
    }
    

    return 0;
}