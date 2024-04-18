#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <ctime>

using namespace std;
#define maxN 4  //number of Neuorns = number of "links"
#define ins 6  //number odf defined attributes (inputs)

class Neuron
{
    private:
    short int size, colR, colG, colB, speedX, speedY;
    vector<char> genome={};

    public:
    void setGenome(vector<char> v)
    {
        genome=v;
    }

    void showGenome() //show raw data
    {
        for (const auto &i :genome)
            cout<<i;
    }

    void interpret() //translate data to name of characteristics
    {
        for(const auto&i:genome)
        {
            switch(i)
            {
                default:break;
            }
            cout<<endl;
        }
    }

};

void MakeGenome(Neuron &n) //create random genome
{
    srand(time(NULL)) ;
    vector<char> vn;
    char g;
    for(int i=0;i<maxN;i++)
    {
        switch(rand()%4)
        {
            case 0: g='A';
                break;
            case 1: g='T';
                break;
            case 2: g='C';
                break;
            case 3: g='G';
                break;
            default:break;
        }
        vn.emplace_back(g) ;

    }

    n.setGenome(vn);
}


int main()
{
    Neuron x;
    MakeGenome(x) ;

    x.showGenome() ;
    cout<<endl;
    x.interpret();


    sf::RenderWindow _window;
    _window.create(sf::VideoMode(1280,720), "test");
    _window.setFramerateLimit(20);










    sf::Event event;
    while(_window.isOpen())
    {
        _window.display();
        while(_window.pollEvent(event))
            if(event.key.code == sf::Keyboard::Escape)
                _window.close();
    }




    return 0;
}
