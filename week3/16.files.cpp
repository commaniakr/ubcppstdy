#include <iostream>

using namespace std;

int main() {
    FILE *pfile = NULL;

    fopen(&pfile, "test.txt", "w");

    if (pfile != NULL) {
        char *ptext = "HKLM";
        fwrite(ptext,1,5,pfile);
        fclose(pfile);
        cout << "making file" << endl;
    }
    fopen(&pfile, "test.txt", "r");
    if (pfile) {
        char str[6] = {};
        fread(str, 1, 5, pfile);
        cout << "reading file : "<< str << endl;
    }

    return 0;
}
