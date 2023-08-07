int n;
cin>>n;
int arr[5001],brr[5001],crr[5001];
int a=0,b=0,c=0;
for(int i=1; i<=n; i++)
{
    int num;
    cin>>num;
    if(num == 1)
    {
        arr[a]=i;
        a++;
    }
    if(num == 2)
    {
        brr[b]=i;
        b++;
    }
    if(num == 3)
    {
        crr[c]=i;
        c++;
    }
}
int x=min(min(a,b),c);
cout<<x<<"\n";
for(int i=0; i<x; i++)
{
    cout<<arr[i]<<" "<<brr[i]<<" "<<crr[i]<<"\n";
}
