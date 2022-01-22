class Solution {
    public int numberOfBeams(String[] arr) {
        int res = 0;
        int pre = count(arr[0]);
        
        for(int i = 1;i<arr.length;i++){
            int cur = count(arr[i]);
            
            if(cur==0){
                continue;
            }
            
            res = res + (pre*cur);
            pre = cur;
        }
        return res;
    }
    
    public int count(String s){
        
        int r = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1'){
                r++;
            }
        }
        return r;
    }
    
}