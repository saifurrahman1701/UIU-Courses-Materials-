#include<iostream>
using namespace std;

int par[100];
int Rank[100];

void makeset(int n) {
  for(int i=1;i<=n;i++) {
    par[i] = i;
    Rank[i] = 0;
  }
}

int findRepresentative(int x) {
  if(par[x] == x) return x;
  int r = findRepresentative(par[x]);
  par[x] = r;
  return r;
}

void Union(int a, int b) {
  int Ra = findRepresentative(a);
  int Rb = findRepresentative(b);

  if(Ra == Rb) {
    return;
  }
  else {
    if(Rank[Ra] > Rank[Rb]) {
      par[Rb] = Ra;
    }
    else if(Rank[Ra] < Rank[Rb]) {
      par[Ra] = Rb;
    }
    else {
      // Rank[Ra] = Rank[Rb]
      par[Ra] = Rb;
      Rank[Rb]++;
    }
  }


}