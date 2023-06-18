#include <bits/stdc++.h>

#define endl "\n"
#define int long long
#define double long double
#define precise \
    fixed << setprecision(12)

using namespace std;

int ran(int a, int b)
{
    return a + rand() % (b - a + 1);
}

// Prints edges of tree
// represented by give Prufer code
void printTreeEdges(int prufer[], int m)
{
    int vertices = m + 2;
    int vertex_set[vertices];

    // Initialize the array of vertices
    for (int i = 0; i < vertices; i++)
        vertex_set[i] = 0;

    // Number of occurrences of vertex in code
    for (int i = 0; i < vertices - 2; i++)
        vertex_set[prufer[i] - 1] += 1;

    int j = 0;

    // Find the smallest label not present in
    // prufer[].
    for (int i = 0; i < vertices - 2; i++)
    {
        for (j = 0; j < vertices; j++)
        {

            // If j+1 is not present in prufer set
            if (vertex_set[j] == 0)
            {

                // Remove from Prufer set and print
                // pair.
                vertex_set[j] = -1;
                // consists of weight on each edge
                cout << (j + 1) << " "<< prufer[i] << " " << ran(1, 20) << endl;

                vertex_set[prufer[i] - 1]--;

                break;
            }
        }
    }

    j = 0;

    // For the last element
    for (int i = 0; i < vertices; i++)
    {
        if (vertex_set[i] == 0 && j == 0)
        {

            cout << (i + 1) << " ";
            j++;
        }
        else if (vertex_set[i] == 0 && j == 1)
            cout << (i + 1) << " " << ran(1, 20) << "\n";
    }
}

// Function to Generate Random Tree
void generateRandomTree(int n)
{

    int length = n - 2;
    int arr[length];

    // Loop to Generate Random Array
    for (int i = 0; i < length; i++)
    {
        arr[i] = ran(0, length + 1) + 1;
    }
    printTreeEdges(arr, length);
}

int32_t main()
{
    srand(time(0));
    int t = 1;
    cout<<t<<"\n";
    int n = ran(1, 10);
    int k = ran(0, 9);
    int g = ran(2, 10);
    cout<<n<<" "<<k<<" "<<g<<"\n";
}