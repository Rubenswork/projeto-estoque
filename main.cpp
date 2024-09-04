#include <iostream>
#include "estoque.hpp"

using namespace std;

int main() {
    
    int escolha;
    int id, novaQuantidade;
    string nome;
    
    do {
        cout << "\nSistema de Gerenciamento de Estoque\n";
        cout << "1. Adicionar produto" << endl;
        cout << "2. Exibir estoque" << endl;
        cout << "3. Buscar produto por ID" << endl;
        cout << "4. Buscar por Nome" << endl;
        cout << "5. Atualizar quantidade" << endl;
        cout << "6. Remover produtos" << endl;
        cout << "7. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;
        
        switch(escolha) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                exibirEstoque();
                break;
            case 3:
                cout << "Digite o ID do produto: ";
                cin >> id;
                buscarPorId(id);  
                break;
            case 4:
                cout << "Digite o nome do produto: ";
                cin >> nome;
                buscarPorNome(nome);  
                break;
            case 5:
                cout << "Digite o ID do produto: ";
                cin >> id;
                cout << "Digite a nova quantidade: ";
                cin >> novaQuantidade;
                atualizarQuantidade(id, novaQuantidade);
                break;
            case 6:
                cout << "Digite o ID do produto: ";
                cin >> id;
                removerProduto(id);
                break;
            case 7:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Escolha inválida! Tente novamente!" << endl;
        }
    } while(escolha != 7);
    
    return 0;
}