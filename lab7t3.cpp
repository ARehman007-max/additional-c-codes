using namespace std;
int main()
{
	int a,b,c;
	cout<<"ENTER VALUE FOR no of 2D=";cin>>a;
	cout<<"ENTER VALUE OF  ROW=" ;cin>>b;
	cout<<"ENTER VALUE OF  COLUMN=";cin>>c;
	int r[a][b][c];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			for(int k=0;k<c;k++)
		{
			cin>>r[i][j][k];
		}
		cout<<endl;
	}
    }
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			for(int k=0;k<c;k++)
		{
			cout<<r[i][j][k]<<" ";
		}
		cout<<endl;
	}
    }
	return 0;
}
