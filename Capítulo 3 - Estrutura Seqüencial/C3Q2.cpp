#include <iostream>

int main(void)
{
    float nota1, nota2, nota3, media;
    
    std::cout << "Escreve o valor da primeira nota: ";
    std::cin >> nota1;
    std::cout << "Escreve o valor da segunda nota: ";
    std::cin >> nota2;
    std::cout << "Escreve o valor da terceira nota: ";
    std::cin >> nota3;
    media = (nota1 + nota2 + nota3)/3;
    std::cout << "A média aritmética das notas é: " << media << std::endl;
    return 0;
}