class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int maxvolume=0;
        while(start<end)
        {
            int minheight=min(height[start],height[end]);
            maxvolume=max(maxvolume,(end-start)*minheight);
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return maxvolume;

    }
};