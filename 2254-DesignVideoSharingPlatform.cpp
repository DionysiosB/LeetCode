class VideoSharingPlatform {
public:
    VideoSharingPlatform() {
        nxtid = 0;
        savlid = std::set<int>();
        vm = std::map<int, std::string>();
        vcv = std::map<int, int>();
        vlm = std::map<int, int>();
        vdm = std::map<int, int>();        
    }
    
    int upload(string video) {
        int vid(-1);
        if(savlid.empty()){vid = nxtid++;}
        else{vid = *savlid.begin(); savlid.erase(savlid.begin());}

        vm[vid] = video;
        vcv[vid] = 0;
        vlm[vid] = 0;
        vdm[vid] = 0;

        return vid;
    }
    
    void remove(int videoId) {
        if(!vm.count(videoId)){return;}
        savlid.insert(videoId);
        vm.erase(videoId);
        vcv.erase(videoId);
        vlm.erase(videoId);
        vdm.erase(videoId);
    }
    
    string watch(int videoId, int startMinute, int endMinute) {
        if(vm.count(videoId)){++vcv[videoId]; return vm[videoId].substr(startMinute, endMinute - startMinute + 1);}
        else{return "-1";}
    }
    
    void like(int videoId) {
        if(vlm.count(videoId)){++vlm[videoId];} 
    }
    
    void dislike(int videoId) {
        if(vdm.count(videoId)){++vdm[videoId];}
        
    }
    
    vector<int> getLikesAndDislikes(int videoId) {
        if(vlm.count(videoId) && vdm.count(videoId)){return std::vector<int>({vlm[videoId], vdm[videoId]});}
        else{return std::vector<int>(1, -1);}
    }
    
    int getViews(int videoId) {
        return vcv.count(videoId) ? vcv[videoId] : -1;
    }

private:
    int nxtid;
    std::set<int> savlid;
    std::map<int, std::string> vm;
    std::map<int, int> vcv;
    std::map<int, int> vlm;
    std::map<int, int> vdm;
};

/**
 * Your VideoSharingPlatform object will be instantiated and called as such:
 * VideoSharingPlatform* obj = new VideoSharingPlatform();
 * int param_1 = obj->upload(video);
 * obj->remove(videoId);
 * string param_3 = obj->watch(videoId,startMinute,endMinute);
 * obj->like(videoId);
 * obj->dislike(videoId);
 * vector<int> param_6 = obj->getLikesAndDislikes(videoId);
 * int param_7 = obj->getViews(videoId);
 */
