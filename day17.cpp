int minimizeCost(int maxJump, vector<int>& values){
    int size=values.size();
    vector<int>minCost(size,INT_MAX);
    minCost[size - 1] = 0;
    for(int currentIndex=size-2;currentIndex>=0;currentIndex--)
    {
        int bestCost=INT_MAX;
        for (int jump=0;jump<maxJump;jump++){
            if (currentIndex+jump+1 < size){
                int cost=bs(values[currentIndex]-values[currentIndex+jump+1])+minCost[currentIndex + jump + 1];
                bestCost=min(bestCost, cost);
            }
        }
        minCost[currentIndex]=bestCost;
    }
    return minCost[0];
    }