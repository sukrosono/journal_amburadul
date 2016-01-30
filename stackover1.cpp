struct proNode{
    int pID;// id of process
    struct proNode *next;

};
char groups [3][128];
// group
struct group{
    int gID;
    char *name;
    struct proNode *prolist;
    struct proNode *blacklist;
}publicgroup;


// check if pID in _group, if it exists ,return 1, otherwise return 0
int isgroupCointainsPID(group _group, int pID){
//    if (_group->prolist == NULL){
//        printf("There is no process %d\n", pID);
//        return 0;
//    }
//    struct proNode *pros = _group.prolist;
//    while (pros != NULL){
//        if (pros->pID == pID)
//            return 1;
//        pros = pros->next;
//
//    }
//    printf("There is no process %d\n", pID);
//
    return 1;
}

int main (int argc,char* *adi)
{
    publicgroup.gID = -1;
    publicgroup.name = "public group";
    //publicgroup->prolist = NULL;
    //publicgroup->blacklist = NULL;
    publicgroup.gID = 2;
    int value = isgroupCointainsPID(publicgroup, 300);// there is an error :struct group is incompatible with parameters of type struct group
	return value;
}
