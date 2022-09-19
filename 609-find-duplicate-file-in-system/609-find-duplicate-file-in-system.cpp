class Solution {
public:
 vector<vector<string>> findDuplicate(vector<string>& paths) {
    unordered_map<string, vector<string>> umtostore;
    vector<vector<string>> ans;

    for (auto i : paths) {
	    stringstream stream(i);
	    string filelocation;
	    string s;
	    getline(stream, filelocation, ' ');
	    while (getline(stream, s, ' ')) {
		    string fname = filelocation + '/' + s.substr(0, s.find('('));
		    string fcontent = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
		    umtostore[fcontent].push_back(fname);
	    }
    }

    for (auto file : umtostore) {
	    if (file.second.size() > 1)
		    ans.push_back(file.second);
    }

    return ans;
}
};