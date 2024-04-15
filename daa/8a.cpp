#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct MinHNode {
    unsigned freq;
    char item;
    struct MinHNode* left;
    struct MinHNode* right;
};

struct MinH {
    unsigned size;
    unsigned capacity;
    struct MinHNode** array;
};

// Creating a new Huffman tree nodestruct MinHNode* createNode(char item, unsigned freq) {
    struct MinHNode* temp = new MinHNode;
    temp->left = temp->right = NULL;
    temp->item = item;
    temp->freq = freq;
    return temp;
}

// Compare function for sorting nodes
bool compareNodes(const struct MinHNode* a, const struct MinHNode* b) {
    return a->freq < b->freq;
}

// Build Huffman tree
struct MinHNode* buildHuffmanTree(vector<struct MinHNode*>& nodes) {
    while (nodes.size() > 1) {
        sort(nodes.begin(), nodes.end(), compareNodes);

        struct MinHNode* left = nodes[0];
        struct MinHNode* right = nodes[1];

        struct MinHNode* newNode = createNode('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;

        nodes.erase(nodes.begin(), nodes.begin() + 2);
        nodes.push_back(newNode);
    }
    return nodes[0];
}

// Generate Huffman codes
void generateHuffmanCodes(struct MinHNode* root, string code, map<char, string>& huffmanCodes) {
    if (!root)
        return;

    if (root->item != '$')
        huffmanCodes[root->item] = code;

    generateHuffmanCodes(root->left, code + "0", huffmanCodes);
    generateHuffmanCodes(root->right, code + "1", huffmanCodes);
}

int main() {
    vector<struct MinHNode*> nodes;
    nodes.push_back(createNode('a', 15));
    nodes.push_back(createNode('b', 10));
    nodes.push_back(createNode('c', 5));
    nodes.push_back(createNode('d', 40));
    nodes.push_back(createNode('e', 25));
    nodes.push_back(createNode('f', 33));

    struct MinHNode* root = buildHuffmanTree(nodes);

    map<char, string> huffmanCodes;
    generateHuffmanCodes(root, "", huffmanCodes);

    cout << "Character\tFrequency\tHuffman Code\n";
    for (size_t i = 0; i < nodes.size(); ++i) {
        cout << nodes[i]->item << "\t\t" << nodes[i]->freq << "\t\t" << huffmanCodes[nodes[i]->item] << endl;
    }

    return 0;
}
