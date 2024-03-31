#include <iostream>

using namespace std;

int main(){
    string seq; cin >> seq;
    int seqCt, maxSeqCt;
    seqCt = maxSeqCt = 0;

    char ch = seq[0];

    for(int i = 0; i < seq.length(); i++){
        if(ch == seq[i]){
            seqCt++;
            if(maxSeqCt < seqCt) maxSeqCt = seqCt;
        } else {
            seqCt = 0; seqCt++;
            ch = seq[i];
        }
    }
    cout << maxSeqCt << '\n';
    return 0;
}