vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> result;
    int aliceScore = 0;
    int bobScore = 0;

    for(int i=0;i<a.size();i++){
        if(a[i] > b[i])
            aliceScore ++;
        else if(b[i] > a[i])
            bobScore++;
        }
        result.push_back(aliceScore);
        result.push_back(bobScore);
    return result;
}
