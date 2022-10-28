
int main(){
  int x;
  cout << "Enter your Integer---> ";
  cin >> x;
  int ans = 0;
  while(x!=0){
  ans = ans*10+x%10;
  x = x/10;
  }
  cout << "Revese integer is---> " << ans << endl;
  return 0;
}
