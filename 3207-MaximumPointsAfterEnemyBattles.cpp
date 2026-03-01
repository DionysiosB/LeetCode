class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {

        long mne(1e9 + 7), total(currentEnergy);
        for(int p = 0; p < enemyEnergies.size(); p++){
            mne = (mne < enemyEnergies[p] ? mne : enemyEnergies[p]);
            total += enemyEnergies[p];
        }
        if(currentEnergy < mne){return 0;}
        
        return (total - mne) / mne;
    }
};
