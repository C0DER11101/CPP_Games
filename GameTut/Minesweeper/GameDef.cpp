GAME::GAME():_name("noname"){}

GAME::GAME(string n):_name(n)
{
        for(int i=0; i<30; i++)
        {
                for(int j=0; j<150; j++)
                        Area[i][j]='.';
        }
}

void GAME::displayArea()
{
        for(int i=0; i<30; i++)
        {
                for(int j=0; j<150; j++)
                        cout<<Area[i][j]<<" ";
                cout<<"\n";
        }

}

void GAME::
