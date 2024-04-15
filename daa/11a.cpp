#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printer(const vector<vector<int> >& s, int i, int j);

void matrix_order(const vector<int>& p){
    int n = p.size() - 1;
    vector<vector<int> > m (n, vector<int>(n, INT_MAX));

    vector<vector<int> > s(n, vector<int>(n, 0));

    for(int len = 2; len <=n; ++len){
        for(int i = 1; i<= n-len; ++i){
            int j = i + len -1;
            m[i-1][j-1] = INT_MAX;
            for(int k = i; k< j; ++k){
                int q = m[i -1][k - 1] + m[k][j -1] + p[i - 1]*p[k]*p[j];
                if(q < m[i - 1][j - 1]){
                    m[i - 1][j - 1] = q;
                    s[i - 1][j - 1] = k;
                }
            }
        }
    }
    cout<<"minimun no of multiplications are"<<m[0][n - 1]<<endl;
    cout<<"optimal sequence is"<<printer(s, 1, n-1);
}

void printer(const vector<vector<int> >& s, int i, int j){
    if(i == j){
        cout<<"A"<<i;
    }else{
        cout<<"(";
        printer(s, i, s[i-1][j- 1]);
        printer(s, s[i-1][j-1] +1, j);
        cout<<")";
    }
}

int main(){
    vector<int> p = {1, 3, 4, 5};
    matrix_order(p);
    return 0;
}