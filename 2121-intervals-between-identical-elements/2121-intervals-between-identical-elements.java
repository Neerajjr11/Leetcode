class Solution {
    public long[] getDistances(int[] a) {
     int n=a.length;
        HashMap<Integer , ArrayList<Integer>> hm = new HashMap<>();
        for(int i=0;i<n;i++){
            ArrayList<Integer>a1=new ArrayList<>();
            if(hm.containsKey(a[i])){
                a1=hm.get(a[i]);
                
            }
            a1.add(i);
            hm.put(a[i],a1);
        }
        long[] ans=new long[n];
        for(Integer k1 : hm.keySet()){
            ArrayList<Integer>a1=hm.get(k1);
            int m=a1.size();
            long[] left=new long[m];
            long[] right=new long[m];
            for(int i=1;i<m;i++){
                left[i]=left[i-1]+(long)((long)i*(long)(a1.get(i)-a1.get(i-1)));
            }
            for(int i=m-2;i>=0;i--){
                right[i]=right[i+1]+(long)((long)(m-1-i)*(long)(a1.get(i+1)-a1.get(i)));
            }
            for(int i=0;i<m;i++){
                ans[(int)a1.get(i)]=left[i]+right[i];
            }
        }
            return ans;
        
    }
}