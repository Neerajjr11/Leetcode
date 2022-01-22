class Solution {
    public boolean asteroidsDestroyed(int mass, int[] arr) {
        Arrays.sort(arr);
        long sum = mass;
        
        for(int i = 0;i<arr.length;i++){
            long l = arr[i];
            if(sum<l){
                return false;
            }
            
            sum +=l;
        }
        
        return true;
        
    }
}