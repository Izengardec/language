#include <iostream>
#include <algorithm>
#include <vector>

int maxArea(std::vector<int> height) {
      int over=height.size()-1;
      int start=0;
      int max=0;
      while(start<over)
      {
        int result=(over-start)* std::min(height[start], height[over]);
        if(result>max)
        {
          max=result;
        }
        if(height[start]< height[over])
        {
          start++;
        }else
        {
          over--;
        }
      }
      return max;
}
int main(){
    std::vector<int> n;
    int len=0,a;
    while (std::cin>>a){
        n.push_back(a);
    }
    std::cout<<maxArea(n);

    return 0;
}

