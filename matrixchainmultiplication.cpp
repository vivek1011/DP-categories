http://codeforces.com/contest/608/problem/D
spoj - MIXTURES - 
generally applied with O(N^3) complexity 
int fun(int i, int j )
{
  int &r= dp[i][j]; // memoization will take o(n^2) complexity. 
  if(r!=-1)
  return r;
  int ret =0 ; 
  for(int k = i ; k < j ; k++)
  {
    ret = // solve(i , k) and solve(k+1 , j); 
  }
  return ret;  
}
