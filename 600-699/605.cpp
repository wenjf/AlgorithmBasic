class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num_insert = 0;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            num_insert += 1;
            flowerbed[0] = 1;
        }
            
        for(int i = 1; i < flowerbed.size() - 1 ; i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0&&flowerbed[i]==0){
                num_insert += 1;
                flowerbed[i] = 1;
            }
        }
        if(flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0){
            num_insert += 1;
            flowerbed[flowerbed.size() - 1] = 1;
        }
        if(num_insert >= n)
            return true;
        else
            return false;
            
    }
};