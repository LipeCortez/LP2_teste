float calcular_soma(int n) {
    float resultado = 0.0;
    
    for (int k = 1; k <= n; k++) {
        resultado += (float) k / (k * k) * ((k % 2 == 0) ? -1 : 1);
    }
    
    return resultado;
}

int main() {
    int numero;
    float resultado;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    
    resultado = calcular_soma(numero);
    
    printf("O valor retornado pela função é: %f\n", resultado);
    
    return 0;
}