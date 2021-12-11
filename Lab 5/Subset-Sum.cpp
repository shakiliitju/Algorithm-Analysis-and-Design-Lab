#include<bits/stdc++.h>
using namespace std;
int arr[10000],sz,sum;



void display(int arr[],int n)
{

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    double stop_s=clock();
    cout << "Time: " << (stop_s/1000) << " seconds" <<endl;
}

void subSum(int ans[],int subsz,int tot,int cnt)
{

    if(tot==sum)
    {
        display(ans,subsz);

        return ;
    }
    else
    {
        for (int i = cnt; i < sz; i++)
        {
            ans[subsz] = arr[i];
            subSum(ans, subsz + 1, tot + arr[i], i+ 1);
        }
    }
}

main()
{
    double start_s=clock();
    cout<<"Enter array size :"<<endl;
    cin>>sz;
    cout<<"Enter array :"<<endl;
    int sm=0;
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];
        sm+=arr[i];
    }
    cout<<"Enter target :"<<endl;
    cin>>sum;
    int ans[sz+1];
    subSum(ans,0,0,0);
    return 0;


}
