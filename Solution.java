class Solution {
    public String solution(int a, int b) {
        
        int month, day=0;
        String[] d = new String[] {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        
        for(month = 1; month<a; month++) {
            if(month < 8) {
                if(month==2) day += 29; // 2
                else if(month%2==1) day += 31;  // (1, 3, 5, 7)
                else day += 30; // (4, 6)
            }
            else {
                if(month==2) day += 29; // 2
                else if(month%2==1) day += 30;  // (9, 11)
                else day += 31; // (8, 10, 12)
            }
            
        }
        day+=(b-1);
    
        return d[day%7];
    }
}