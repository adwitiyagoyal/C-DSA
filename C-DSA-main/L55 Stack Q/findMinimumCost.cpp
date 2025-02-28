int findMinimumCost(string str) {
  if(str.length()%2 == 1){
    return -1;
  }

  stack<int> s;
  for(int i=0;i<str.length();i++){
    if(str[i]=='{'){
      s.push(str[i]);
    }
    else{
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(str[i]);
      }
    }
  }
 
  int a=0;
  int b=0;

  while(!s.empty()){
    if (s.top() == '{') {
      a++;
    }
    if (s.top() == '}') {
      b++;
    }
    s.pop();
  }

  if(a%2==0 && b%2==0){
    return (a+b)/2;
  }
  return a/2 + b/2 + 2;

}