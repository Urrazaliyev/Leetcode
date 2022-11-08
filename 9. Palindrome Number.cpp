class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)return false;
        String f="",b="";
        f=String.valueOf(x);
        for(int i=f.length()-1;i>=0;i--){
            b+=f.charAt(i);
        }
           return f.equals(b);
    }
}
