//This is </the_brainFuck>
#include <cstring>
#include<string>
#include<sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
//#include<bits/stdc++.h>
#define sz 2000
#define eps 1e-9
#define mod  1000000007
#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define all(a) (a.begin(),a.end())
#define REP(i,a,b) for(int i=a; i<b; i++)
#define REPR(i,a,b) for(int i=b-1; i>=a; i--)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

using namespace std;

typedef long long ll;
typedef double dd;

int gcd(int a, int b) { return (b != 0 ? gcd(b, a%b) : a);}
int lcm(int a, int b) { return (a / gcd(a, b) * b);}
struct coun{
        string c;
}p[2005];
bool cmpare(coun x,coun y){
    return x.c<y.c;
}
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j;
    string name;
    sf("%d",&n);
    REP(i,0,n){
        cin>>p[i].c;
        getline(cin,name);
    }
    sort(p,p+n,cmpare);
    i=0;
    while(p[i].c[0]){
        j=i+1;
        cout<<p[i].c;
        while(p[i].c.compare(p[j].c)==0){
            j++;
        }
        pf(" %d\n",j-i);
        i=j;
    }
    return 0;
}
