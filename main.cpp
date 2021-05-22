#include <iostream>

using namespace std;

void teste(int* pos, int quant, int& min, int& max) 
{
    min = max = *pos;
     cout << "\nVetor: \n";
    
    for (int i = 0; i < quant; i++) {
        if (*pos > max) {
            max = *pos;
        }
        if (*pos < min) {
            min = *pos;
        }
        cout << *pos << "\n";
        pos++;
    }
}
int main()
{
    int vet[100];
    int quant;
    int min = 0;
    int max = 0;
    
    cout << "Digite a quantidade de elementos: ";
    scanf("%d", &quant);
    cout << "Digite os números: ";
    for (int i = 0; i < quant; ++i)
        scanf("%d", &vet[i]);

    teste(vet, quant, min, max);

    cout << "\nMin: " << min;
    cout << "\nMax: " << max;

    return 0;
}