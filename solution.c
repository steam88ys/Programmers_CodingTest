class Solution {
    public int solution(String s) {
        int answer = 0;
        boolean buho = true;
        
        for(int i = 0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(ch == '-') {
                buho = false;    
            }else if(ch !='+'){;
                answer = answer * 10 + (ch-'0');
            }
        }
        return buho ? answer : (-1)*answer;
    }
}