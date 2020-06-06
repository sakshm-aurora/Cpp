/*
Trie is an efficient information retrieval data structure. Use this data structure to store Strings and search strings. Your task is to use TRIE data structure and search the given string A. If found print 1 else 0.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines.
First line of each test case consist of a integer N, denoting the number of element in a Trie to be stored.
Second line of each test case consists of N space separated strings denoting the elements to be stored in the trie.
Third line of each test case consists of a String A to be searched in the stored elements.

Output:
Complete insert and search function and return '1' if key is present in the formed trie else '0' in the search function.

Constraints:
1 <= T <= 15
1 <= N <= 104
1 <= |input strings|, |A| <= 100

Example:
Input:
2
8
the a there answer any by bye their
the
8
the a there answer any by bye their
geeks
Output:
1
0

Explanation:
Testcase1: the is present in the given string "the a there answer any by bye their"
Testcase2: geeks is not present in the given string "the a there answer any by bye their"
*/
void insert(struct TrieNode *root, string key) {
    // code here
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    // mark last node as leaf
    pCrawl->isLeaf = true;
}

// root : root node of the trie
// key : string to search in the trie
// Returns true if key presents in trie, else false

bool search(struct TrieNode *root, string key) {
    // code here
     struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return (pCrawl != NULL && pCrawl->isLeaf);
}
