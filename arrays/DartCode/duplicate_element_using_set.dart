void main(){
  isCheckDuplicate([1,2,2]);
}

bool isCheckDuplicate(List<int>nums){
  Set<int>seen = {};
  for(int num in nums){
    if(seen.contains(num)){
      return true;
    }
    seen.add(num);
  }
  return true;
}