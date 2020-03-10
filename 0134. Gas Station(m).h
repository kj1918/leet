class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=-1,tank=0,tank_cur=0;
        for(int i=0;i<gas.size();i++){
            tank_cur+=gas[i]-cost[i];
            if(tank_cur>=0&&start==-1){
                start=i;
            }
            else if(tank_cur<0){
                start=-1;
                tank_cur=0;
            }
            tank+=gas[i]-cost[i];
        }
        return tank<0 ? -1:start;
    }
};
