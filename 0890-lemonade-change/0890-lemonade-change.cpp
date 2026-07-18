class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int numf=0,numt=0;

        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                
                numf++;
            

            }
            else if(bills[i]==10){
                if(!numf){
                    return false;
                }
                else{
                    numf--;
                    numt++;
                }
                
            }
            else if(bills[i]==20){
                if(numf && numt){
                    numf--;
                    numt--;

                }
                else if(numf && !numt){
                    if(numf>=3){
                        numf-=3;
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        } return true;
    }
};