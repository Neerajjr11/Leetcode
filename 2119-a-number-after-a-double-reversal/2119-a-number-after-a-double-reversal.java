class Solution {
    public boolean isSameAfterReversals(int num) {
     StringBuilder sb=new StringBuilder();
        sb.append(num);
        sb.reverse();
        int revnum=Integer.parseInt("" + sb);
        sb=new StringBuilder();
        sb.append(revnum);
        sb.reverse();
        int newnum=Integer.parseInt("" + sb);
        return newnum ==num;
    }
}