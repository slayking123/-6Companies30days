vector<string> generate(int N)
{
	vector<string> v;
	int x;
	for(int i=1;i<=N;i++)
	{
	    string s;
	    x=i;
	    while(x>0)
	    {
	        (x&1)?s+='1':s+='0';
	        x=x>>1;
	    }
	    reverse(s.begin(),s.end());
	    v.push_back(s);
	}
	return v;
}
