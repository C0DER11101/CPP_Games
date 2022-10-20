Game::Game()
{
	_PlayerName="noname";
	_dimension=0;
	_PlayerSymbol='\0';
}
Game::Game(string name, int dim, char smb): _PlayerName(name), _dimension(dim), _PlayerSymbol(smb)
{
	for(int x=0; x<_dimension; x++)
		for(int y=0; y<_dimension; y++)
			board[x][y]=' ';
}

int Game::playerInput()
{
	int x, y;
	cout<<_PlayerName<<" your turn: ";
	cin>>x>>y;

	return placeSymbol(x, y);
}

char Game::playerSymbol()
{
	return _PlayerSymbol;
}

void Game::quoteWinner()
{
	cout<<_PlayerName<<" won the game!!\n\n";
	exit(0);
}

void Game::verifyPlayer(Game&winner, Game&player1, Game&player2)
{
	if(winner._PlayerName == player1._PlayerName)
		player1.quoteWinner();

	else if(winner._PlayerName == player2._PlayerName)
		player2.quoteWinner();
}

int Game::placeSymbol(int x, int y)
{
	if((x<0 || x>_dimension) || (y<0 || y>_dimension))
	{
		cout<<"\n\nBad Index!! Try Again!!\n\n";
		return -1;
	}

	else if(board[x][y]!=' ')
	{
		cout<<"\nThat square is occupied, try another one!!\n\n";
		return -1;
	}

	board[x][y]=_PlayerSymbol;

	return 0;
}

void showBoard(int dmsn)
{
	cout<<"  ";
	for(int i=0; i<dmsn; i++)
		cout<<" "<<i;
	cout<<"\n";
	for(int x=0; x<dmsn; x++)
	{
		cout<<" "<<x<<"|";
		for(int y=0; y<dmsn; y++)
			cout<<board[x][y]<<"|";
		cout<<"\n";
	}
}

Game&checkWinner(Game&p1, Game&p2, int dmsn) // returns the player number of the player who won the game!!
{
	for(int x=0; x<dmsn; x++)
	{
		for(int y=0; y<dmsn; y++) // checking row-wise
		{
			if((y+2)<dmsn)
			{
				if(board[x][y]==p1.playerSymbol() && board[x][y+1]==p1.playerSymbol() && board[x][y+2]==p1.playerSymbol())
					return p1;

				if(board[x][y]==p2.playerSymbol() && board[x][y+1]==p2.playerSymbol() && board[x][y+2]==p2.playerSymbol())
					return p2;
			}

		}

		for(int y=0; y<dmsn; y++) // checking column-wise
		{
			if((y+2)<dmsn)
			{
				if(board[y][x]==p1.playerSymbol() && board[y+1][x]==p1.playerSymbol() && board[y+2][x]==p1.playerSymbol())
					return p1;

				if(board[y][x]==p2.playerSymbol() && board[y+1][x]==p2.playerSymbol() && board[y+2][x]==p2.playerSymbol())
					return p2;
			}
		}

		if((x+2)<dmsn) // checking the diagonal elements!!
		{
			if(board[x][x]==p1.playerSymbol() && board[x+1][x+1]==p1.playerSymbol() && board[x+2][x+2]==p1.playerSymbol())
					return p1;
			if(board[x][x]==p2.playerSymbol() && board[x+1][x+1]==p2.playerSymbol() && board[x+2][x+2]==p2.playerSymbol())
					return p2;
		}

		for(int y=0; y<dmsn; y++)
		{
			if((x+2)<dmsn && (y+2)<dmsn)
			{
				if(board[x][y]==p1.playerSymbol() && board[x+1][y+1]==p1.playerSymbol() && board[x+2][y+2]==p1.playerSymbol())
					return p1;
				if(board[x][y]==p2.playerSymbol() && board[x+1][y+1]==p2.playerSymbol() && board[x+2][y+2]==p2.playerSymbol())
					return p2;
			}
		}

	}

	return defobj; // if no winner, then return default object!!

}
