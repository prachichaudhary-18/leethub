class Solution {
    public String reverseWords(String s) {
        String word="";
        String res="";
        for(int i=0;i<s.length();i++){
            char ch =s.charAt(i);
            if(ch!=' '){
                word+=ch;
            }
            else{
                if(word.length()!=0){
                    res=word+" "+res;
                    word="";
                }
            }
        }
        if(word.length()!=0){
                    res=word+" "+res;
                    // word="";
                }

        return res.trim();

        
        
    }
}