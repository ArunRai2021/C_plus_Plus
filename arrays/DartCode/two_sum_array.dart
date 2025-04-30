List<int> twoSum(List<int> nums,int target){
 Map<int,int> numMap = {};
  for(int i =0;i<nums.length;i++){
    int compliment = target - nums[i];
    if(numMap.containsKey(compliment)){
      return [numMap[compliment]!, i]; 
    }
     numMap[nums[i]] = i; 
    
  }
     throw Exception("No solution found"); 
  }

void main(){
   print(twoSum([2, 7, 11, 15], 9));
}
