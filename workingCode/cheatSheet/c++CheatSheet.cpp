
/////////////////////////////////////////  misc /////////////////////////////////////////
// longest increasing subsequece
//given n nums gets longest increasing subsequence

//run time O(n log n)
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef int             Typ;
typedef vector<Typ>     TypList;
typedef pair<Typ, Typ>  TypPair;
typedef vector<TypPair> PairList;

#define STRICTLY_INCREASING

TypList LongestIncSub(TypList seq){
    int seqLen = seq.size();
    PairList best;
    TypList  dad(seqLen, -1);
    for(int i = 0; i < seqLen; i++){
        #ifdef STRICTLY_INCREASING
            TypPair item = make_pair  (seq[i], 0);
            auto it      = lower_bound(best.begin(), best.end(), item);
            item.second = i;
        #else
            TypPair item = make_pair  (seq[i], i);
            auto it      = upper_bound(best.begin(), best.end(), item);
        #endif
            if(it == best.end()){
                dad[i] = (best.size() == 0 ? -1 : best.back.second);
                best.push_back(item);
            }else{
                dad[i] = dad[it->second];
                *it = item;
            }
    }
    TypList ret;
    for(int i = best.back().second; i >= 0; i = dad[i]){
        ret.push_back(v[i]);   
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
// end

//dates


//end

//nth root simple 
long long nthRoot(long long a, long long b){
    return (long long)round(p, (1.0/n));
}

//////////////////////////////////// number theory //////////////////////////////

// min max O(1) time
int max(a, b) {return a>b ? a:b}
int min(a, b) {return a<b ? a:b}
// min end

// gcd(a, b) log (n) time lcm(a, b)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a*b/gcd(a, b);
}
// gcd end

//trivial is prime O(sqrt(n))
bool trivIsPrime(int n){
    if (n<2) return false;
    if (n<4) return true;
    if (0 == (1&n) || 0 == (n%3)) return false;
    for(int i = 5; i*i <= n; i+=6){
        if(0 == (n%i) || 0 == (n%(i+2))){
               return false;
        }
    }
    return true;
}
// IsPrime end

//trivial is prime with extra primes O(sqrt(n))
vector<int> primes; // filled with primes
bool trivIsPrime(int n){
    for(auto i = primes.begin(); (*i)*(*i) <= n; i++){
        if(0 == (n%(*i))) return false;
    }
    return true;
}
// IsPrime end

//miller rabin
//miller end

// triv factorization
// triv end

// leap year
bool isLeap(int n){
    if(n%100 == 0){
        if(n%400 == 0){
            return true;
        }else{
            return false;
        }
    }
    if(n%4 == 0){
        return true;
    }else{
        return false;
    }
}
// end leap year











/////////////////////////////////// graph theory ////////////////////////////////
