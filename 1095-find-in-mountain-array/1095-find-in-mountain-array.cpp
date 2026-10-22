/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findpeak(MountainArray &mountainArr){
        int l=0,h=mountainArr.length()-1;
        while(l<h){
            int mid = l + (h-l)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
               l = mid+1;
            }
            else h = mid;
         }
        
        return l;
    }
    int BS2(MountainArray &mountainArr,int peak,int target){
        int l=peak+1,h=mountainArr.length()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target) l = mid+1;
            else h = mid-1;
         }
        
        return -1;
    }


    int BS1(MountainArray &mountainArr,int peak,int target){
        int l=0,h=peak;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(mountainArr.get(mid)==target) return mid;
            if(mountainArr.get(mid) < target){
               l = mid+1;
            }
            else h = mid - 1;
         }
        
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
         int l=0,h=mountainArr.length()-1;
         int peak = findpeak(mountainArr);
         int ans = BS1(mountainArr,peak,target);
         if(ans != -1)return ans;

         return BS2(mountainArr,peak,target);
    }
         
};