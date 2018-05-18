flag(x,y,z)
{
	return(!(x-y)*(x-z)*(y-z));
}
main()
{
	int n,k,a,b,c;
	for(k=1;;k++)
	{
		n=k*k;
		if(n<100)
			continue;
		if(n>999)
			break;
		a = n/100;		//°ÙÎ»Êý
		b = n%100/10;
		c = n%10;
		if(flag(a,b,c))
			printf("n = %d = %d * %d\n",n,k,k); 
	}
}
